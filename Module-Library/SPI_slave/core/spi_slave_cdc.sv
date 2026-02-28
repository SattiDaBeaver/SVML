module spi_slave #(
    parameter WIDTH = 8
) (
    input  logic             clk,      // system clock (50 MHz)
    input  logic             rst,      // active high reset

    // SPI wires
    input  logic             sclk,     // SPI clock (up to 45 MHz)
    input  logic             cs_n,     // chip select (active low)
    input  logic             mosi,     // master out slave in
    output logic             miso,     // master in slave out

    // Data wires
    input  logic [WIDTH-1:0] din,      // data to send to master
    output logic             d_valid,  // pulse in sys clk domain when new data received
    output logic [WIDTH-1:0] dout      // received data (stable in sys clk domain)
);

    //==========================================================================
    // SPI Clock Domain - Shift In (MOSI)
    //==========================================================================
    logic [WIDTH-1:0]       shift_in;
    logic [$clog2(WIDTH):0] bit_count;
    logic [WIDTH-1:0]       captured_data;
    logic                   data_ready_toggle;

    always_ff @(posedge sclk or posedge rst or posedge cs_n) begin
        if (rst || cs_n) begin
            shift_in          <= '0;
            bit_count         <= '0;
            data_ready_toggle <= '0;
            captured_data     <= '0;
        end else begin
            shift_in <= {shift_in[WIDTH-2:0], mosi};
            
            if (bit_count == WIDTH - 1) begin
                captured_data     <= {shift_in[WIDTH-2:0], mosi};
                data_ready_toggle <= ~data_ready_toggle;
                bit_count         <= '0;
            end else begin
                bit_count <= bit_count + 1;
            end
        end
    end

    //==========================================================================
    // SPI Clock Domain - Shift Out (MISO) on falling edge
    //==========================================================================
    logic [WIDTH-1:0] shift_out;
    logic             cs_n_prev;
    
    always_ff @(negedge sclk or posedge rst) begin
        if (rst) begin
            shift_out <= '0;
            cs_n_prev <= 1'b1;
        end else begin
            cs_n_prev <= cs_n;
            
            // Detect falling edge of cs_n (start of transaction)
            if (!cs_n && cs_n_prev) begin
                // Load new data at start of transaction
                shift_out <= din;
            end else if (!cs_n) begin
                // Shift out during transaction
                shift_out <= {shift_out[WIDTH-2:0], 1'b0};
            end
        end
    end

    assign miso = shift_out[WIDTH-1];

    //==========================================================================
    // Clock Domain Crossing - Toggle Synchronizer
    //==========================================================================
    logic toggle_sync1, toggle_sync2, toggle_sync3;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            toggle_sync1 <= '0;
            toggle_sync2 <= '0;
            toggle_sync3 <= '0;
        end else begin
            toggle_sync1 <= data_ready_toggle;
            toggle_sync2 <= toggle_sync1;
            toggle_sync3 <= toggle_sync2;
        end
    end

    //==========================================================================
    // Clock Domain Crossing - Data Synchronization
    //==========================================================================
    logic [WIDTH-1:0] captured_sync1, captured_sync2;
    
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            captured_sync1 <= '0;
            captured_sync2 <= '0;
        end else begin
            captured_sync1 <= captured_data;
            captured_sync2 <= captured_sync1;
        end
    end

    //==========================================================================
    // System Clock Domain - Edge Detection and Output
    //==========================================================================
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            dout    <= '0;
            d_valid <= 1'b0;
        end else begin
            if (toggle_sync2 ^ toggle_sync3) begin
                // New data available
                dout    <= captured_data;
                d_valid <= 1'b1;
            end else begin
                d_valid <= 1'b0;
            end
        end
    end

endmodule
