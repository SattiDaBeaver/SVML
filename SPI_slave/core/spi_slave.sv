module spi_slave #(
    parameter WIDTH = 8
) (
    input  logic                rst,

    // SPI wires
    input  logic                sclk,
    input  logic                cs_n,
    input  logic                mosi,
    output logic                miso,

    // Data wires
    input  logic                load,
    input  logic [WIDTH-1:0]    din,
    
    output logic                d_valid,
    output logic [WIDTH-1:0]    dout
);
    logic [WIDTH-1:0]       shift_in;
    logic [WIDTH-1:0]       shift_out;
    logic [$clog2(WIDTH):0] count;

    // Sample MOSI on rising edge
    always_ff @(posedge sclk or posedge rst) begin
        if (rst) begin
            shift_in    <= 0;
            d_valid     <= 1'b0;
            count       <= 0;
        end
        else if (!cs_n) begin
            shift_in    <= {shift_in[WIDTH-2:0], mosi};

            if (count == WIDTH - 1) begin
                dout        <= {shift_in[WIDTH-2:0], mosi};
                d_valid     <= 1'b1;
                count       <= 0;
            end
            else begin
                d_valid     <= 1'b0;
                count       <= count + 1;
            end
        end
        else begin
            count   <= 0;
            d_valid <= 1'b0;
        end
    end
  
    // Shift out on falling edge
    always_ff @(negedge sclk or posedge rst) begin
        if (rst) begin
            shift_out   <= 0;
        end
        else if (!cs_n) begin
            shift_out   <= {shift_out[WIDTH-2:0], 1'b0};
        end
        else begin
            if (load) begin
                shift_out   <= din;
            end
        end
    end

    assign miso = shift_out[WIDTH-1];
    
endmodule