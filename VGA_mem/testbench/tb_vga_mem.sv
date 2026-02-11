module tb_vga_mem;

    // ----------------------------------------------------------------
    // Parameters (match DUT)
    // ----------------------------------------------------------------
    localparam RES_X        = 320;
    localparam RES_Y        = 240;
    localparam MEM_WIDTH    = 8;
    localparam MEM_DEPTH    = RES_X * RES_Y;
    localparam ADDR_WIDTH   = $clog2(MEM_DEPTH);
    localparam PIXEL_WIDTH  = 4;

    // ----------------------------------------------------------------
    // DUT signals
    // ----------------------------------------------------------------
    logic clk;
    logic rst;

    logic [ADDR_WIDTH-1:0] mem_addr;
    logic [MEM_WIDTH-1:0]  din;
    logic                  wen;
    logic [MEM_WIDTH-1:0]  dout;

    logic [PIXEL_WIDTH-1:0] vga_r;
    logic [PIXEL_WIDTH-1:0] vga_g;
    logic [PIXEL_WIDTH-1:0] vga_b;
    logic                   h_sync;
    logic                   v_sync;

    // ----------------------------------------------------------------
    // Clock generation (50 MHz → VGA divides internally)
    // ----------------------------------------------------------------
    always #10 clk = ~clk;   // 20ns period = 50MHz

    // ----------------------------------------------------------------
    // DUT instantiation
    // ----------------------------------------------------------------
    vga_mem #(
        .RES_X(RES_X),
        .RES_Y(RES_Y),
        .MEM_WIDTH(MEM_WIDTH),
        .MEM_DEPTH(MEM_DEPTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .PIXEL_WIDTH(PIXEL_WIDTH)
    ) dut (
        .clk(clk),
        .rst(rst),
        .mem_addr(mem_addr),
        .din(din),
        .wen(wen),
        .dout(dout),
        .vga_r(vga_r),
        .vga_g(vga_g),
        .vga_b(vga_b),
        .h_sync(h_sync),
        .v_sync(v_sync)
    );

    // ----------------------------------------------------------------
    // Test sequence
    // ----------------------------------------------------------------
    initial begin
        // Init
        clk      = 0;
        rst      = 1;
        wen      = 0;
        mem_addr = 0;
        din      = 0;

        // Reset
        #100;
        rst = 0;

        // ------------------------------------------------------------
        // Write some test pixels
        // ------------------------------------------------------------
        // Top-left pixel (red-ish)
        write_pixel(0, 8'b0011_0000);

        // Pixel at (10,10)
        write_pixel(10 + 10*RES_X, 8'b0000_1100);

        // Pixel at (100,50)
        write_pixel(100 + 50*RES_X, 8'b0000_0011);

        // ------------------------------------------------------------
        // Let VGA run
        // ------------------------------------------------------------
        #5_000_000;   // ~5ms of sim time

        $finish;
    end

    // ----------------------------------------------------------------
    // Simple write task
    // ----------------------------------------------------------------
    task write_pixel(input [ADDR_WIDTH-1:0] addr,
                     input [MEM_WIDTH-1:0]  value);
        begin
            @(posedge clk);
            mem_addr <= addr;
            din      <= value;
            wen      <= 1'b1;
            @(posedge clk);
            wen      <= 1'b0;
        end
    endtask

    // ----------------------------------------------------------------
    // VCD dumping
    // ----------------------------------------------------------------
    initial begin
        $dumpfile("vga_mem.vcd");
        $dumpvars(0, tb_VGA_mem);
    end

endmodule