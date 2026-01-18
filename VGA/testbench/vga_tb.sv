module tb_vga;

    // Parameters
    localparam PIXEL_BITS  = 4;
    localparam CLK_DIV     = 2;
    localparam H_COUNT_MAX = 800;
    localparam V_COUNT_MAX = 525;
    localparam H_BITS      = $clog2(H_COUNT_MAX);
    localparam V_BITS      = $clog2(V_COUNT_MAX);

    // Clock and reset
    logic clk;
    logic rst;

    // VGA signals
    logic [PIXEL_BITS-1:0] vga_r;
    logic [PIXEL_BITS-1:0] vga_g;
    logic [PIXEL_BITS-1:0] vga_b;
    logic h_sync;
    logic v_sync;
    logic vga_active;
    logic [H_BITS-1:0] vga_x;
    logic [V_BITS-1:0] vga_y;

    // Instantiate VGA module
    vga #(
        .PIXEL_BITS(PIXEL_BITS),
        .CLK_DIV(CLK_DIV),
        .H_COUNT_MAX(H_COUNT_MAX),
        .V_COUNT_MAX(V_COUNT_MAX)
    ) dut (
        .clk(clk),
        .rst(rst),
        .vga_r(vga_r),
        .vga_g(vga_g),
        .vga_b(vga_b),
        .h_sync(h_sync),
        .v_sync(v_sync),
        .vga_x(vga_x),
        .vga_y(vga_y),
        .vga_active(vga_active)
    );

    // Clock generation: 50 MHz
    initial clk = 0;
    always #10 clk = ~clk; // 50MHz -> 20ns period

    // Reset sequence
    initial begin
        rst = 1;
        #100;
        rst = 0;
        #10000
        $finish();
    end

    // Optional waveform dump
    initial begin
        $dumpfile("tb_vga.vcd");
        $dumpvars(0, tb_vga);
    end


endmodule
