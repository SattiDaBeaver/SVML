module top (
	input  logic [9:0] SW,
	input  logic [1:0] KEY,
	input  logic       CLOCK_50,

	output logic [6:0] HEX5,
	output logic [6:0] HEX4,
	output logic [6:0] HEX3,
	output logic [6:0] HEX2,
	output logic [6:0] HEX1,
	output logic [6:0] HEX0,
	output logic [9:0] LEDR,

    output logic [3:0] VGA_R,
    output logic [3:0] VGA_G,
    output logic [3:0] VGA_B,
    output logic       VGA_HS,
    output logic       VGA_VS
);

    localparam PIXEL_BITS  = 4;
    localparam CLK_DIV     = 2;
    localparam H_COUNT_MAX = 800;
    localparam V_COUNT_MAX = 525;
    localparam H_BITS = $clog2(H_COUNT_MAX);
    localparam V_BITS = $clog2(V_COUNT_MAX);


    // Clock and  reset
    logic clk;
    logic rst;

    // VGA signals
    logic [PIXEL_BITS-1:0] vga_r;
    logic [PIXEL_BITS-1:0] vga_g;
    logic [PIXEL_BITS-1:0] vga_b;
    logic h_sync;
    logic v_sync;
    // logic [H_BITS-1:0] vga_x;
    // logic [V_BITS-1:0] vga_y;

    // outputs
    assign VGA_R  = vga_r;
    assign VGA_G  = vga_g;
    assign VGA_B  = vga_b;
    assign VGA_HS = h_sync;
    assign VGA_VS = v_sync;

    // inputs
    assign clk    = CLOCK_50;
    assign rst    = ~KEY[0];

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
        .vga_x(),
        .vga_y()
    );

endmodule