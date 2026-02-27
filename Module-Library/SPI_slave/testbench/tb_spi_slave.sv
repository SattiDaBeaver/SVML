`timescale 1ns/1ps

module tb_spi_slave;

    parameter WIDTH = 8;

    localparam real CLK_T  = 20.0;
    localparam real SCLK_T = 1000.0;

    logic clk;
    logic rst;
    logic sclk;
    logic cs_n;
    logic mosi;
    logic miso;

    logic [WIDTH-1:0] din;
    logic             d_valid;
    logic [WIDTH-1:0] dout;

    spi_slave #(.WIDTH(WIDTH)) dut (
        .clk(clk),
        .rst(rst),
        .sclk(sclk),
        .cs_n(cs_n),
        .mosi(mosi),
        .miso(miso),
        .din(din),
        .d_valid(d_valid),
        .dout(dout)
    );

    initial clk = 0;
    always #(CLK_T / 2.0) clk = ~clk;

    task automatic spi_send_byte(input [7:0] data);
        for (int i = 7; i >= 0; i--) begin
            mosi = data[i];        // set MOSI
            #(SCLK_T / 2.0);
            sclk = 1;              // rising: slave samples
            #(SCLK_T / 2.0);
            sclk = 0;              // falling: ready for next bit
        end
    endtask

    always @(posedge clk) begin
        if (d_valid)
            $display("[%0t] d_valid pulse — dout = 0x%02h", $time, dout);
    end

    initial begin
        $dumpfile("tb_spi_slave.vcd");
        $dumpvars(0, tb_spi_slave);

        rst  = 1;
        cs_n = 1;
        mosi = 0;
        sclk = 0;
        din  = 8'hA5;

        repeat (5) @(posedge clk);
        rst = 0;
        repeat (2) @(posedge clk);

        // --- Transaction 1 ---
        cs_n = 0;
        spi_send_byte(8'h3C);
        spi_send_byte(8'h80);
        cs_n = 1;

        repeat (10) @(posedge clk);

        // --- Transaction 2 ---
        cs_n = 0;
        spi_send_byte(8'h36);
        spi_send_byte(8'h1B);
        cs_n = 1;

        repeat (10) @(posedge clk);

        $display("[%0t] Final dout = 0x%02h", $time, dout);
        $finish;
    end

endmodule