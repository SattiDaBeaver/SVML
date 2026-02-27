`timescale 1ns/1ps

module tb_vga_spi;

    // Parameters
    localparam CLK_PERIOD  = 20;   // 50MHz
    localparam SCLK_PERIOD = 100;   // 25MHz (well under 45MHz limit)
    localparam MEM_WIDTH   = 8;
    localparam RES_X       = 320;
    localparam RES_Y       = 240;
    localparam ADDR_WIDTH  = $clog2(RES_X * RES_Y);

    // DUT signals
    logic                   clk;
    logic                   rst;
    logic                   sclk;
    logic                   cs_n;
    logic                   mosi;
    logic                   miso;
    logic [3:0]             vga_r, vga_g, vga_b;
    logic                   h_sync, v_sync;
    logic [ADDR_WIDTH-1:0]  addr_count;

    // DUT
    vga_spi #(
        .RES_X(RES_X),
        .RES_Y(RES_Y)
    ) DUT (
        .clk(clk),
        .rst(rst),
        .sclk(sclk),
        .cs_n(cs_n),
        .mosi(mosi),
        .miso(miso),
        .vga_r(vga_r),
        .vga_g(vga_g),
        .vga_b(vga_b),
        .h_sync(h_sync),
        .v_sync(v_sync),
        .addr_count(addr_count)
    );

    // Clock gen
    initial clk = 0;
    always #(CLK_PERIOD/2) clk = ~clk;

    initial sclk = 0;

    // Waveform dump (Verilator style)
    initial begin
        $dumpfile("tb_vga_spi.vcd");
        $dumpvars(0, tb_vga_spi);
    end

    // SPI send task (MSB first, MODE 0)
    task spi_send(input logic [MEM_WIDTH-1:0] data);
        integer i;
        begin
            cs_n = 0;
            #(SCLK_PERIOD/2);
            for (i = MEM_WIDTH-1; i >= 0; i--) begin
                mosi = data[i];
                #(SCLK_PERIOD/2);
                sclk = 1;
                #(SCLK_PERIOD/2);
                sclk = 0;
            end
            #(SCLK_PERIOD/2);
            cs_n = 1;
            #(SCLK_PERIOD);
        end
    endtask

    // Main test
    initial begin
        // Init
        rst  = 1;
        cs_n = 0;
        mosi = 0;
        sclk = 0;
        repeat(4) @(posedge clk);
        rst = 0;
        repeat(4) @(posedge clk);

        // Test 1: send align/reset control byte (0x80)
        $display("=== Test 1: Control byte - align reset ===");
        spi_send(8'h80);
        repeat(10) @(posedge clk);
        if (addr_count == 0)
            $display("PASS: addr_count reset to 0");
        else
            $display("FAIL: addr_count = %0d", addr_count);

        // Test 2: send a few pixel bytes and check addr_count increments
        $display("=== Test 2: Pixel bytes, addr_count increment ===");
        // First pixel byte just sets addr_delay
        spi_send(8'h1B); // 0b00_01_10_11 => R=01 G=10 B=11
        repeat(10) @(posedge clk);
        $display("After byte 1: addr_count = %0d (expect 0, addr_delay set)", addr_count);

        spi_send(8'h1B);
        repeat(10) @(posedge clk);
        $display("After byte 2: addr_count = %0d (expect 1)", addr_count);

        spi_send(8'h3F);
        repeat(10) @(posedge clk);
        $display("After byte 3: addr_count = %0d (expect 2)", addr_count);

        // Test 3: swap buffer command (0x81)
        $display("=== Test 3: Swap buffer command ===");
        spi_send(8'h81);
        repeat(10) @(posedge clk);
        $display("Swap sent (check swap_buf pulse in waves)");

        // Test 4: reset align mid-stream (0x80)
        $display("=== Test 4: Re-align mid stream ===");
        spi_send(8'h80);
        repeat(10) @(posedge clk);
        if (addr_count == 0)
            $display("PASS: addr_count reset");
        else
            $display("FAIL: addr_count = %0d", addr_count);

        // Test 5: rapid fire bytes
        $display("=== Test 5: Rapid fire pixels ===");
        spi_send(8'h00); // addr_delay set
        repeat(5) @(posedge clk);
        repeat(5) begin
            spi_send(8'h2A);
            repeat(5) @(posedge clk);
        end
        $display("After 6 bytes: addr_count = %0d (expect 5)", addr_count);

        repeat(20) @(posedge clk);
        $display("=== Done ===");
        $finish;
    end

    // Timeout watchdog
    initial begin
        #10_000_000;
        $display("TIMEOUT");
        $finish;
    end

endmodule