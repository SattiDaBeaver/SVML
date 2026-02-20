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
    output logic       VGA_VS,

    inout  logic [15:0] ARDUINO_IO
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

	logic			rx;
    logic [31:0]    addr_count;

	// Helper assignments
	assign clk = CLOCK_50;
	assign rst = ~KEY[0];

	// Assignments
	assign LEDR = addr_count[9:0];
	assign VGA_R = vga_r;
	assign VGA_G = vga_g;
	assign VGA_B = vga_b;
	assign VGA_HS = h_sync;
	assign VGA_VS = v_sync;
    assign rx     = ARDUINO_IO[0];

	// Module instantiation
	vga_uart #(
        .RES_X(RES_X),
        .RES_Y(RES_Y),
        .MEM_WIDTH(MEM_WIDTH)
    ) VGA_UART (
        .clk(clk),
        .rst(rst),
        .rx(rx),
        .tx(),
        .vga_r(vga_r),
        .vga_g(vga_g),
        .vga_b(vga_b),
        .h_sync(h_sync),
        .v_sync(v_sync),
        .addr_count(addr_count)
    );

endmodule

module vga_uart #(
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

    // UART wires
    input  logic                    rx,
    output logic                    tx,

    // VGA wires
    output logic [PIXEL_WIDTH-1:0]  vga_r,
    output logic [PIXEL_WIDTH-1:0]  vga_g,
    output logic [PIXEL_WIDTH-1:0]  vga_b,
    output logic                    h_sync,
    output logic                    v_sync,

    // Debug memory wires
    output logic [ADDR_WIDTH-1:0]   addr_count
);

    // Local parameters
    localparam 
        CLK_DIV     = 2,
        H_COUNT_MAX = 800,
        V_COUNT_MAX = 525,
        H_BITS      = $clog2(H_COUNT_MAX),
        V_BITS      = $clog2(V_COUNT_MAX),
        CLK_PER_BIT = 50,
        CLK_BITS    = 8,
        DATA_WIDTH  = MEM_WIDTH,
        PARITY_BITS = 0,
        STOP_BITS   = 1;

    // Helper wires
    // Memory helper wires
    logic [ADDR_WIDTH-1:0]  mem_addr;
    logic [MEM_WIDTH-1:0]   din;
    logic                   wen;
    logic                   swap_buf;
    logic [MEM_WIDTH-1:0]   dout; // unused
    logic                   addr_delay;

    // UART helper wires
    logic                   rx_din;
    logic [MEM_WIDTH-1:0]   rx_dout;
    logic                   rx_done;

    // Helper assignments
    assign rx_din   = rx;
    assign mem_addr = addr_count;

    // Memory counter wires
    
    always_ff @(posedge clk) begin
        if (rst) begin
            addr_count <= 0;
            wen        <= 1'b0;
            addr_delay <= 1'b0;
            swap_buf   <= 1'b0;
        end
        else begin
            wen        <= 1'b0;
            swap_buf   <= 1'b0;
            if (rx_done) begin
                if (rx_dout[7] == 1'b1) begin   // control bit
                    case (rx_dout[6:0])
                        7'h00: begin
                            addr_count  <= 0;
                            wen         <= 1'b0;
                            addr_delay  <= 1'b0;
                        end
                        7'h01: begin
                            swap_buf    <= 1'b1;
                        end 
                        default: begin
                            addr_count  <= 0;
                            wen         <= 1'b0;
                            addr_delay  <= 1'b0;
                            swap_buf    <= 1'b0;
                        end
                    endcase
                end
                else begin
                    din         <= rx_dout;
                    wen         <= 1'b1;
                    if (addr_count >= MEM_DEPTH - 1) begin
                        addr_count  <= 0;
                    end
                    else begin
                        if (addr_delay == 1'b1) begin
                            addr_count  <= addr_count + 1;
                            // addr_delay  <= 1'b0;
                        end
                        else begin
                            addr_delay  <= 1'b1;
                        end
                    end
                end
            end
        end
    end

    // Module instantiation
	vga_double_buf #(
        .RES_X(RES_X),
        .RES_Y(RES_Y),
        .MEM_WIDTH(MEM_WIDTH)
    ) VGA (
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

    uart_wrapper #(
        .CLK_BITS(CLK_BITS),
        .DATA_WIDTH(DATA_WIDTH),
        .PARITY_BITS(PARITY_BITS),
        .STOP_BITS(STOP_BITS)
    ) UART (
        .clk(clk),
        .rst(rst),
        .clk_per_bit(CLK_PER_BIT),

        .TX_dataIn(),
        .TX_en(),

        .TX_out(),
        .TX_done(),
        .TX_busy(),

        .RX_dataIn(rx_din),

        .RX_dataOut(rx_dout),
        .RX_done(rx_done),
        .RX_parityError()
    );
    
endmodule

module vga_double_buf #(
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
    input  logic                    swap_buf,
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

    // Double buffer helper wires
    logic                       curr_buffer;
    logic                       swap_latch;

    // VGA helper wires
    logic [$clog2(RES_X)-1:0]   mem_x;
    logic [$clog2(RES_Y)-1:0]   mem_y;
    logic [H_BITS-1:0]          vga_x;
    logic [V_BITS-1:0]          vga_y;
    logic                       vga_active;
    logic                       frame_start;

    // Memory helper wires
    // Memory assignment helpers
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

    // Memory 0
    // Port A
    logic                       we_a_0;
    logic [ADDR_WIDTH-1:0]      addr_a_0;
    logic [MEM_WIDTH-1:0]       din_a_0;
    logic [MEM_WIDTH-1:0]       dout_a_0;

    // Port B
    // logic                       we_b_0;
    logic [ADDR_WIDTH-1:0]      addr_b_0;
    // logic [MEM_WIDTH-1:0]      din_b_0;
    logic [MEM_WIDTH-1:0]       dout_b_0;

    // Memory 1
    // Port A
    logic                       we_a_1;
    logic [ADDR_WIDTH-1:0]      addr_a_1;
    logic [MEM_WIDTH-1:0]       din_a_1;
    logic [MEM_WIDTH-1:0]       dout_a_1;

    // Port B
    // logic                       we_b_1;
    logic [ADDR_WIDTH-1:0]      addr_b_1;
    // logic [MEM_WIDTH-1:0]      din_b_1;
    logic [MEM_WIDTH-1:0]       dout_b_1;

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

    // Double Buffer MUX
    // Read mux (combinational)
    assign dout_a = (curr_buffer == 0) ? dout_a_1 : dout_a_0;
    assign dout_b = (curr_buffer == 0) ? dout_b_1 : dout_b_0;

    // Write mux (controlled)
    assign we_a_0   = (curr_buffer == 0) ? we_a : 0;
    assign din_a_0  = (curr_buffer == 0) ? din_a : 0;
    assign addr_a_0 = (curr_buffer == 0) ? addr_a : 0;

    assign we_a_1   = (curr_buffer == 1) ? we_a : 0;
    assign din_a_1  = (curr_buffer == 1) ? din_a : 0;
    assign addr_a_1 = (curr_buffer == 1) ? addr_a : 0;

    // Port B is always VGA read
    assign addr_b_0 = addr_b;
    assign addr_b_1 = addr_b;

    // Swap buffer logic
    always_ff @(posedge clk) begin
        if (rst) begin
            swap_latch  <= 1'b0;
            curr_buffer <= 1'b0;
        end
        else begin
            if (swap_buf) begin
                swap_latch  <= 1'b1;
            end
            if (frame_start) begin
                if (swap_latch) begin
                    curr_buffer <= curr_buffer ^ 1; // toggle current bugger
                    swap_latch  <= 1'b0;
                end
            end 
        end
    end

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
        .vga_active(vga_active),
        .frame_start(frame_start)
    );

    dp_ram_sync_read #(
        .DATA_WIDTH(MEM_WIDTH),
        .MEM_DEPTH(MEM_DEPTH)
    ) RAM_0 (
        .clk(clk),
        .we_a(we_a_0),
        .addr_a(addr_a_0),
        .din_a(din_a_0),
        .dout_a(dout_a_0),
        .we_b(),
        .addr_b(addr_b_0),
        .din_b(),
        .dout_b(dout_b_0)
    );

    dp_ram_sync_read #(
        .DATA_WIDTH(MEM_WIDTH),
        .MEM_DEPTH(MEM_DEPTH)
    ) RAM_1 (
        .clk(clk),
        .we_a(we_a_1),
        .addr_a(addr_a_1),
        .din_a(din_a_1),
        .dout_a(dout_a_1),
        .we_b(),
        .addr_b(addr_b_1),
        .din_b(),
        .dout_b(dout_b_1)
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
    output logic                  vga_active,
    output logic                  frame_start
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

    assign frame_start = ((h_count == 0) && (v_count == 0));
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

module uart_wrapper #(
    parameter CLK_BITS     = 8, // bits for adjustable BAUD rate, min BAUD = F_CLK / (2^CLK_BITS)
    parameter DATA_WIDTH   = 8,
    parameter PARITY_BITS  = 0,
    parameter STOP_BITS    = 1
) (
    input  logic                    clk,
    input  logic                    rst,

    input  logic   [CLK_BITS-1:0]   clk_per_bit,

    input  logic   [DATA_WIDTH-1:0] TX_dataIn,
    input  logic                    TX_en,

    input  logic                    RX_dataIn,

    output logic                    TX_out,
    output logic                    TX_done,
    output logic                    TX_busy,

    output logic   [DATA_WIDTH-1:0] RX_dataOut,
    output logic                    RX_done,
    output logic                    RX_parityError
);
    // UART Transmitter Module
    UART_TX #(
        .CLK_BITS(CLK_BITS),
        .DATA_WIDTH(DATA_WIDTH),
        .PARITY_BITS(PARITY_BITS),
        .STOP_BITS(STOP_BITS)
        ) 
        UART_TX1 ( 
        .clk(clk),
        .rst(rst),

        .clk_per_bit(clk_per_bit),
        .dataIn(TX_dataIn),
        .TXen(TX_en),

        .TXout(TX_out),
        .TXdone(TX_done),
        .busy(TX_busy)
    );

    // UART Receiver Module
    UART_RX #(
        .CLK_BITS(CLK_BITS),
        .DATA_WIDTH(DATA_WIDTH),
        .PARITY_BITS(PARITY_BITS),
        .STOP_BITS(STOP_BITS)
        )
        UART_RX1 (
        .clk(clk),
        .rst(rst),

        .clk_per_bit(clk_per_bit),
        .dataIn(RX_dataIn),

        .RXout(RX_dataOut),
        .RXdone(RX_done),
        .parityError(RX_parityError)
    );
endmodule

module UART_RX #(
    parameter CLK_BITS = 8,   // bits for adjustable BAUD rate, min BAUD = F_CLK / (2^CLK_BITS)
    parameter DATA_WIDTH = 8,
    parameter STOP_BITS = 2,  // either 1 or 2 stop bits
    parameter PARITY_BITS = 1,
    parameter PACKET_SIZE = DATA_WIDTH + STOP_BITS + PARITY_BITS + 1
    // Total Packet Size = DATA_WIDTH + STOP_BITS + 1 Start Bit + 1 Parity Bit
) ( 
    input  logic                                clk,
    input  logic                                rst,

    input  logic    [CLK_BITS - 1 : 0]          clk_per_bit,
    input  logic                                dataIn,

    output logic    [DATA_WIDTH - 1 : 0]         RXout,
    output logic                                RXdone,
    output logic                                parityError
);

    localparam indexBits = $clog2(PACKET_SIZE);

    logic   [indexBits - 1 : 0]     index;
    logic   [CLK_BITS - 1 : 0]      clkCount;

    logic                           regInMeta;
    logic                           regIn;
    logic                           parity;

    logic    [DATA_WIDTH - 1 : 0]    dataOut;
    logic                           dataDone;

    // Remove Problems due to Metastability
    always_ff @(posedge clk) begin
        regInMeta <= dataIn;
        regIn <= regInMeta;
    end



    typedef enum logic [1:0] {
        IDLE,
        START,
        RECEIVE,
        DONE
    } 
    state_t;

    state_t state;

    always_ff @(posedge clk) begin
        if (rst) begin
            dataOut <= 0;
            state <= IDLE;
            index <= 1'b0;
            clkCount <= 0;
            dataDone <= 0;
        end
        else begin
            case (state)
                IDLE: begin
                    clkCount <= 0;
                    index <= 0;
                    dataOut <= 0;
                    dataDone <= 0;

                    if (regIn == 1'b0) begin    // Start Condition
                        state <= START;
                    end
                    else begin
                        state <= IDLE;
                    end
                end

                START: begin
                    if (clkCount == ((clk_per_bit - 1) >> 1)) begin
                        clkCount <= 0;
                        state <= RECEIVE;
                    end
                    else begin
                        clkCount <= clkCount + 1;
                        state <= START;
                    end

                end

                RECEIVE: begin

                    if (clkCount < clk_per_bit - 1) begin
                        clkCount <= clkCount + 1;
                        state <= RECEIVE;
                    end

                    else begin
                        clkCount <= 0;
                        if (index < DATA_WIDTH) begin
                            dataOut[index] <= regIn;
                            index <= index + 1;
                            state <= RECEIVE;
                        end
                        else if (index == DATA_WIDTH && PARITY_BITS > 0) begin
                            parity <= regIn;
                            state <= DONE;
                        end
                        else begin
                            state <= DONE;
                        end
                    end
                end

                DONE: begin
                    if (clkCount < clk_per_bit - 1) begin
                        clkCount <= clkCount + 1;
                        state <= DONE;
                    end
                    else begin
                        clkCount <= 0;
                        state <= IDLE;
                        dataDone <= 1'b1;
                        index <= 0;
                        RXout <= dataOut;
                    end
                end

                default: begin
                    state <= IDLE;
                end
                
            endcase
        end 
    end

    always_comb begin
        RXdone = dataDone;
        if (PARITY_BITS > 0) begin
            parityError = (^RXout) ^ parity;
        end
        else begin
            parityError = 0;
        end
    end
endmodule

module UART_TX #(
    parameter CLK_BITS = 8,         // bits for adjustable BAUD rate, min BAUD = F_CLK / (2^CLK_BITS)
    parameter DATA_WIDTH = 8,
    parameter STOP_BITS = 1,        // either 1 or 2 stop bits
    parameter PARITY_BITS = 1,      // can be set to 0
    parameter PACKET_SIZE = DATA_WIDTH + STOP_BITS + PARITY_BITS + 1 
    // Total Packet Size = DATA_WIDTH + STOP_BITS + 1 Start Bit + 1 Parity Bit
) ( 
    input  logic                                clk,
    input  logic                                rst,

    input  logic      [CLK_BITS - 1 : 0]        clk_per_bit,
    input  logic      [DATA_WIDTH - 1 : 0]      dataIn,
    input  logic                                TXen,

    output logic                                TXout,
    output logic                                TXdone,
    output logic                                busy
);

    localparam indexBits = $clog2(PACKET_SIZE);

    logic   [PACKET_SIZE - 1 : 0]       packet;
    logic                               parityBit;
    logic   [indexBits - 1 : 0]         index;
    logic   [CLK_BITS - 1 : 0]          clkCount;

    typedef enum logic [1:0] {
        IDLE,
        TRANSMIT,
        DONE
    } 
    state_t;

    state_t state;

    always_comb begin
        parityBit = ^dataIn;    // 0 for even number of 1's, 1 for odd number of 1's
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            TXout       <= 1'b1;
            state       <= IDLE;
            busy        <= 1'b0;
            index       <= 1'b0;
            clkCount    <= 0;
            TXdone      <= 0;
        end
        else begin
            case (state)
                IDLE: begin
                    TXout       <= 1'b1;
                    index       <= 1'b0;
                    clkCount    <= 0;
                    TXdone      <= 0;

                    if (TXen) begin
                        if (PARITY_BITS > 0) begin
                            packet <= {{STOP_BITS{1'b1}}, parityBit, dataIn, 1'b0};
                        end 
                        else begin
                            packet <= {{STOP_BITS{1'b1}}, dataIn, 1'b0};
                        end
                        //                ^                         ^
                        //                |                         |
                        //              Stop                      Start
                        busy <= 1'b1;
                        state <= TRANSMIT;
                    end
                    else begin
                        state <= IDLE;
                    end
                end

                TRANSMIT: begin
                    TXout <= packet[index];

                    if (clkCount < clk_per_bit - 1) begin
                        clkCount <= clkCount + 1;
                        state <= TRANSMIT;
                    end

                    else begin
                        clkCount <= 0;
                        if (index == PACKET_SIZE - 1) begin
                            state <= DONE;
                        end
                        else begin
                            index <= index + 1;
                            state <= TRANSMIT;
                        end
                    end
                end

                DONE: begin
                    state       <= IDLE;
                    busy        <= 1'b0;
                    TXdone      <= 1'b1;
                    index       <= 1'b0;
                    clkCount    <= 0;
                end

                default: begin
                    state <= IDLE;
                end
            endcase
        end 
    end
endmodule


