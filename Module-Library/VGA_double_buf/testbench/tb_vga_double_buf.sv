`timescale 1ns/1ns
module tb_vga_double_buf;

    // Parameters (match DUT)
    localparam RES_X      = 320;
    localparam RES_Y      = 240;
    localparam MEM_WIDTH  = 8;
    localparam PIXEL_WIDTH= 4;
    localparam ADDR_WIDTH = $clog2(RES_X*RES_Y);

    // Clock & reset
    logic clk = 0;
    logic rst = 1;

    // Memory / VGA signals
    logic [ADDR_WIDTH-1:0] mem_addr;
    logic [MEM_WIDTH-1:0]  din;
    logic                   wen;
    logic                   swap_buf;
    logic [MEM_WIDTH-1:0]   dout;
    logic [PIXEL_WIDTH-1:0] vga_r, vga_g, vga_b;
    logic                   h_sync, v_sync;

    // Clock generation (50 MHz)
    always #10 clk = ~clk;

    // DUT
    vga_double_buf #(
        .RES_X(RES_X),
        .RES_Y(RES_Y),
        .MEM_WIDTH(MEM_WIDTH),
        .PIXEL_WIDTH(PIXEL_WIDTH)
    ) DUT (
        .clk(clk),
        .rst(rst),
        .mem_addr(mem_addr),
        .din(din),
        .wen(wen),
        .swap_buf(swap_buf),
        .dout(dout),
        .vga_r(vga_r),
        .vga_g(vga_g),
        .vga_b(vga_b),
        .h_sync(h_sync),
        .v_sync(v_sync)
    );

    // Simple task to fill a buffer with a pattern
    task write_buffer(input int offset);
        for (int i = 0; i < RES_X*RES_Y; i++) begin
            mem_addr = i;
            din      = (i + offset) & 8'hFF;
            wen      = 1;
            #20;
        end
        wen = 0;
    endtask

    // Simulation
    initial begin
        $dumpfile("tb_vga_double_buf.vcd");
        $dumpvars(0, tb_spi_slatb_vga_double_bufve);

        rst = 1; swap_buf = 0; mem_addr = 0; din = 0; wen = 0;
        #50;
        rst = 0;

        // Fill buffer 0
        write_buffer(0);

        // Swap to buffer 1 at next frame
        swap_buf = 1;
        #20;
        swap_buf = 0;

        // Fill buffer 1 with different pattern
        write_buffer(100);

        // Let VGA read some frames
        #200_000;

        $finish;
    end

endmodule