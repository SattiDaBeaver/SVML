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
    logic vga_active;
    logic [H_BITS-1:0] vga_x;
    logic [V_BITS-1:0] vga_y;

    // outputs
    // assign VGA_R  = vga_active ? {SW[2:0], 1'b0} : 0;
    // assign VGA_G  = vga_active ? {SW[5:3], 1'b0} : 0;
    // assign VGA_B  = vga_active ? {SW[8:6], 1'b0} : 0;
    assign VGA_HS = h_sync;
    assign VGA_VS = v_sync;
    assign LEDR[8:0] = count;

    // inputs
    assign clk    = CLOCK_50;
    assign rst    = ~KEY[0];

    // smth
    logic [V_BITS-1:0] count;
    logic frame_edge;

    always_ff @(posedge clk) begin
        if (rst) begin
            count      <= 0;
            frame_edge <= 0;
        end
        else begin
            // Detect start of new frame
            if (vga_active && vga_y == 0 && !frame_edge) begin
                count <= (count + 1) % 480;  // move pixel down
            end
            frame_edge <= (vga_active && vga_y == 0);
        end
    end


    always_comb begin
        VGA_R  = vga_active ? {SW[2:0], 1'b0} : 0;
        VGA_G  = vga_active ? {SW[5:3], 1'b0} : 0;
        VGA_B  = vga_active ? {SW[8:6], 1'b0} : 0;
        if (vga_active && vga_x == 320 && vga_y == count) begin
            VGA_R  = 4'hF;
            VGA_G  = 4'hF;
            VGA_B  = 4'hF;
        end
    end

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

endmodule