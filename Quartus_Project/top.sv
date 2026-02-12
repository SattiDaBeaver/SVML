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

	localparam
		RES_X = 320,
		RES_Y = 240,
		MEM_WIDTH = 8;

	// Helper wires
	logic 			clk;
	logic			rst;

	logic [3:0]		vga_r;
	logic [3:0]		vga_g;
	logic [3:0]		vga_b;
	logic			h_sync;
	logic			v_sync;

	logic			wen;
	logic [7:0]		mem_x;
	logic [7:0]		mem_y;
	logic [31:0]	mem_addr;
	logic [7:0]		din;

	// Helper assignments
	assign clk = CLOCK_50;
	assign rst = ~KEY[0];
	assign wen = ~KEY[1];
    assign mem_addr = mem_y * RES_X + mem_x;

	// Assignments
	assign LEDR = SW;
	assign VGA_R = vga_r;
	assign VGA_G = vga_g;
	assign VGA_B = vga_b;
	assign VGA_HS = h_sync;
	assign VGA_VS = v_sync;

	always_ff @(posedge clk) begin
		if (rst) begin
            din   <= 0;
            mem_x <= 0;
            mem_y <= 0;
        end
        else begin
            case (SW[9:8])
                2'b00: din   <= SW[7:0];
                2'b01: mem_x <= SW[7:0];
                2'b10: mem_y <= SW[7:0];
                default: begin
                    din <= SW[7:0];
                end
            endcase
        end
	end


	// Module instantiation
	vga_mem #(
        .RES_X(RES_X),
        .RES_Y(RES_Y),
        .MEM_WIDTH(MEM_WIDTH)
    ) dut (
        .clk(clk),
        .rst(rst),
        .mem_addr(mem_addr),
        .din(din),
        .wen(wen),
        .dout(),
        .vga_r(vga_r),
        .vga_g(vga_g),
        .vga_b(vga_b),
        .h_sync(h_sync),
        .v_sync(v_sync)
    );

endmodule


module vga_mem #(
    parameter RES_X = 320,
    parameter RES_Y = 240,
    parameter RES_DIV = 2,
    parameter MEM_WIDTH = 8,
    parameter MEM_DEPTH = RES_X * RES_Y,
    parameter ADDR_WIDTH = $clog2(MEM_DEPTH),
    parameter PIXEL_WIDTH = 4
) (
    // Default wires
    input  logic                    clk, 
    input  logic                    rst,

    // Memory wires
    input  logic [ADDR_WIDTH-1:0]   mem_addr,
    input  logic [MEM_WIDTH-1:0]    din,
    input  logic                    wen,
    output logic [MEM_WIDTH-1:0]    dout, // unused

    // VGA wires
    output logic [PIXEL_WIDTH-1:0]  vga_r,
    output logic [PIXEL_WIDTH-1:0]  vga_g,
    output logic [PIXEL_WIDTH-1:0]  vga_b,
    output logic                    h_sync,
    output logic                    v_sync
);

    // Local parameters
    localparam 
        CLK_DIV     = 2,
        H_COUNT_MAX = 800,
        V_COUNT_MAX = 525,
        H_BITS      = $clog2(H_COUNT_MAX),
        V_BITS      = $clog2(V_COUNT_MAX);

    // VGA helper wires
    logic [$clog2(RES_X)-1:0]   mem_x;
    logic [$clog2(RES_Y)-1:0]   mem_y;
    logic [H_BITS-1:0]          vga_x;
    logic [V_BITS-1:0]          vga_y;
    logic                       vga_active;

    // Memory helper wires
    // Port A
    logic                       we_a;
    logic [ADDR_WIDTH-1:0]      addr_a;
    logic [MEM_WIDTH-1:0]       din_a;
    logic [MEM_WIDTH-1:0]       dout_a;

    // Port B
    // logic                       we_b;
    logic [ADDR_WIDTH-1:0]      addr_b;
    // logic [MEM_WIDTH-1:0]      din_b;
    logic [MEM_WIDTH-1:0]       dout_b;

    // Internal wires
    logic [ADDR_WIDTH-1:0]      mem_addr_vga;
    logic [MEM_WIDTH-1:0]       mem_d_out_vga;    

    // Wire assignment
    // Memory inputs
    assign addr_a   = mem_addr;
    assign din_a    = din;
    assign we_a     = wen;
    // Memory output
    assign dout     = dout_a;

    // VGA output
    // Using 0b00RRGGBB format
    assign vga_r    = vga_active ? {dout_b[5:4], 2'b00} : 4'b0000;
    assign vga_g    = vga_active ? {dout_b[3:2], 2'b00} : 4'b0000;
    assign vga_b    = vga_active ? {dout_b[1:0], 2'b00} : 4'b0000;

    // VGA memory assignments
    // Assuming smart synthesizer
    assign mem_x    = vga_x / RES_DIV; 
    assign mem_y    = vga_y / RES_DIV;
    assign addr_b   = mem_x + mem_y * RES_X;

    // // Assuming dumb synthesizer
    // assign mem_x    = vga_x >> 1;
    // assign mem_y    = vga_y >> 1;
    // assign addr_b   = mem_x + (vga_y << 6) + (vga_x << 8);   

    // Module instantiation
    vga #(
        .PIXEL_BITS(PIXEL_WIDTH),
        .CLK_DIV(CLK_DIV),
        .H_COUNT_MAX(H_COUNT_MAX),
        .V_COUNT_MAX(V_COUNT_MAX)
    ) VGA (
        .clk(clk),
        .rst(rst),
        .vga_r(),
        .vga_g(),
        .vga_b(),
        .h_sync(h_sync),
        .v_sync(v_sync),
        .vga_x(vga_x),
        .vga_y(vga_y),
        .vga_active(vga_active)
    );

    dp_ram_sync_read #(
        .DATA_WIDTH(MEM_WIDTH),
        .MEM_DEPTH(MEM_DEPTH)
    ) RAM (
        .clk(clk),
        .we_a(we_a),
        .addr_a(addr_a),
        .din_a(din_a),
        .dout_a(dout_a),
        .we_b(),
        .addr_b(addr_b),
        .din_b(),
        .dout_b(dout_b)
    );
    
endmodule

module vga #(
    parameter PIXEL_BITS    = 4,
    parameter CLK_DIV       = 2,
    parameter H_COUNT_MAX   = 800,
    parameter V_COUNT_MAX   = 525,
    parameter H_BITS        = $clog2(H_COUNT_MAX),
    parameter V_BITS        = $clog2(V_COUNT_MAX)

) (
    input  logic                  clk, 
    input  logic                  rst,

    output logic [PIXEL_BITS-1:0] vga_r,
    output logic [PIXEL_BITS-1:0] vga_g,
    output logic [PIXEL_BITS-1:0] vga_b,
    
    output logic                  h_sync,
    output logic                  v_sync,
    output logic [H_BITS-1:0]     vga_x,
    output logic [V_BITS-1:0]     vga_y,
    output logic                  vga_active
);

    // Clock divider (25MHz enable logic)
    localparam CLK_DIV_BITS = $clog2(CLK_DIV);

    logic                       vga_en; // 25 MHz enable
    logic [CLK_DIV_BITS-1:0]    clk_div_count;

    always_ff @(posedge clk) begin
        if (rst) begin
            vga_en          <= 0;
            clk_div_count   <= 0;
        end
        else begin
            if (clk_div_count == CLK_DIV - 1) begin
                vga_en          <= 1;
                clk_div_count   <= 0;
            end
            else begin
                vga_en          <= 0;
                clk_div_count   <= clk_div_count + 1;
            end
        end
    end

    // Horizontal and Vertical Counter
    logic [H_BITS-1:0]  h_count;
    logic [V_BITS-1:0]  v_count;

    always_ff @(posedge clk) begin
        if (rst) begin
            h_count <= 0;
            v_count <= 0;
        end
        else if (vga_en) begin
            // Horizontal Counter
            if (h_count == H_COUNT_MAX - 1) begin
                h_count <= 0;

                // Vertical Counter
                if (v_count == V_COUNT_MAX - 1) begin
                    v_count <= 0;
                end
                else begin
                    v_count <= v_count + 1;
                end
            end
            else begin
                h_count <= h_count + 1;
            end
        end
    end

    // H-Sync and V-Sync signals
    assign h_sync = (h_count < 96) ? 0 : 1; // active low
    assign v_sync = (v_count < 2) ? 0 : 1;  // active low

    // RGB colors
    assign vga_active = (h_count < 784 && h_count > 143) && (v_count < 515 && v_count > 34) ? 1 : 0;

    assign vga_r = vga_active ? {PIXEL_BITS{1'b1}} : 0;
    assign vga_g = vga_active ? {PIXEL_BITS{1'b1}} : 0;
    assign vga_b = vga_active ? {PIXEL_BITS{1'b1}} : 0;

    // X and Y coordinates
    assign vga_x = vga_active ? (h_count - 144) : 0;
    assign vga_y = vga_active ? (v_count - 35) : 0;

endmodule

module dp_ram_sync_read #(
    parameter DATA_WIDTH = 8,
    parameter MEM_DEPTH  = 1024,
    parameter ADDR_WIDTH = $clog2(MEM_DEPTH)  // 2^10 = 1024 entries
) (
    input  logic                    clk,

    // Port A
    input  logic                    we_a,
    input  logic [ADDR_WIDTH-1:0]   addr_a,
    input  logic [DATA_WIDTH-1:0]   din_a,
    output logic [DATA_WIDTH-1:0]   dout_a,

    // Port B
    input  logic                    we_b,
    input  logic [ADDR_WIDTH-1:0]   addr_b,
    input  logic [DATA_WIDTH-1:0]   din_b,
    output logic [DATA_WIDTH-1:0]   dout_b
);

    logic [DATA_WIDTH-1:0] mem [0:MEM_DEPTH-1];

    always_ff @(posedge clk) begin
        if (we_a) begin
            mem[addr_a] <= din_a;
        end
        dout_a <= mem[addr_a];
    end

    always_ff @(posedge clk) begin
        if (we_b) begin
            mem[addr_b] <= din_b;
        end
        dout_b <= mem[addr_b];
    end

endmodule
