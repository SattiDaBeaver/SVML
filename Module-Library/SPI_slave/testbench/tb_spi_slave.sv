`timescale 1ns/100ps

module tb_spi_slave;

    parameter WIDTH = 8;

    logic rst;
    logic sclk;
    logic cs_n;
    logic mosi;
    logic miso;

    logic [WIDTH-1:0] din;
    logic d_valid;
    logic [WIDTH-1:0] dout;

    // DUT
    spi_slave #(.WIDTH(WIDTH)) dut (
        .rst(rst),
        .sclk(sclk),
        .cs_n(cs_n),
        .mosi(mosi),
        .miso(miso),
        .din(din),
        .d_valid(d_valid),
        .dout(dout)
    );

    // 45 MHz clock → period ≈ 22.22ns
    localparam real T = 22.22;

    initial sclk = 0;
    always #(T/2.0) sclk = ~sclk;

    // Task: send one byte (MSB first)
    task spi_send_byte(input [7:0] data);
        integer i;
        begin
            for (i = 7; i >= 0; i--) begin
                mosi = data[i];
                #(T);   // one full clock cycle
            end
        end
    endtask

    initial begin
        $dumpfile("tb_spi_slave.vcd");
        $dumpvars(0, tb_spi_slave);
        // Init
        rst   = 1;
        cs_n  = 1;
        mosi  = 0;
        din   = 8'hA5;  // slave response

        #(5*T);
        rst = 0;

        // Preload TX
        #(T);

        // Start transaction
        cs_n = 0;

        // Send byte 0x3C
        spi_send_byte(8'h3C);
        spi_send_byte(8'h80);
        cs_n = 1;
        #(5*T);
        cs_n = 0;
        spi_send_byte(8'h36);
        spi_send_byte(8'h1B);

        #(T);
        cs_n = 1;

        #(5*T);

        $display("RX dout = %h", dout);
        $finish;
    end

endmodule
