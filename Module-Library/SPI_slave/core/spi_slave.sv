module spi_slave #(
    parameter WIDTH = 8
) (
    input  logic             clk,      // system clock (added)
    input  logic             rst,

    // SPI wires
    input  logic             sclk,
    input  logic             cs_n,
    input  logic             mosi,
    output logic             miso,

    // Data wires
    input  logic [WIDTH-1:0] din,
    output logic             d_valid,  // pulse in sys clk domain
    output logic [WIDTH-1:0] dout      // stable in sys clk domain
);

    // SPI domain 
    logic [WIDTH-1:0]       shift_in;
    logic [$clog2(WIDTH):0] count;
    logic [WIDTH-1:0]       captured;
    logic                   toggle;

    always_ff @(posedge sclk or posedge rst or posedge cs_n) begin
        if (rst || cs_n) begin
            shift_in <= '0;
            count    <= '0;
            toggle   <= '0;
            captured <= '0;
        end else begin
            shift_in <= {shift_in[WIDTH-2:0], mosi};
            if (count == WIDTH - 1) begin
                captured <= {shift_in[WIDTH-2:0], mosi};  // latch stable data
                toggle   <= ~toggle;                       // signal new data
                count    <= '0;
            end else begin
                count <= count + 1;
            end
        end
    end

    // MISO (shift out on falling edge) 
    logic [WIDTH-1:0] shift_out;

    always_ff @(negedge sclk or posedge rst) begin
        if (rst)       shift_out <= '0;
        else if (!cs_n) shift_out <= {shift_out[WIDTH-2:0], 1'b0};
        else            shift_out <= din;
    end

    assign miso = shift_out[WIDTH-1];

    // CDC: toggle sync into sys clk domain 
    logic sync1, sync2, sync3;

    always_ff @(posedge clk) begin
        sync1 <= toggle;
        sync2 <= sync1;
        sync3 <= sync2;
    end

    // Edge detect -> d_valid pulse, latch data at same time
    always_ff @(posedge clk) begin
        if (sync2 ^ sync3) begin
            dout    <= captured;
            d_valid <= 1'b1;
        end else begin
            d_valid <= 1'b0;
        end
    end

endmodule
