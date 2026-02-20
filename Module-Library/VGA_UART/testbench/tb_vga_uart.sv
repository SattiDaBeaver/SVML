`timescale 1ns/1ns

module tb_vga_uart;

    // Match DUT settings
    localparam CLK_PERIOD  = 20;     // 50 MHz clock
    localparam CLK_PER_BIT = 50;     // same as DUT
    localparam BIT_TIME    = CLK_PERIOD * CLK_PER_BIT;

    logic clk = 0;
    logic rst = 1;
    logic rx;
    logic tx;

    logic [3:0] vga_r, vga_g, vga_b;
    logic [7:0] rx_din;
    logic h_sync, v_sync;
    logic [16:0] addr_count;  // big enough for 320*240

    // Clock
    always #(CLK_PERIOD/2) clk = ~clk;

    // DUT
    vga_uart DUT (
        .clk(clk),
        .rst(rst),
        .rx(rx),
        .tx(tx),
        .vga_r(vga_r),
        .vga_g(vga_g),
        .vga_b(vga_b),
        .h_sync(h_sync),
        .v_sync(v_sync),
        .addr_count(addr_count)
    );

    // UART send task
    task uart_send_byte(input [7:0] data);
        integer i;
        begin
            // Start bit
            rx = 0;
            #(BIT_TIME);

            // Data bits (LSB first)
            for (i = 0; i < 8; i++) begin
                rx = data[i];
                #(BIT_TIME);
            end

            // Stop bit
            rx = 1;
            #(BIT_TIME);
            #(BIT_TIME);
        end
    endtask

    initial begin
        rx = 1;   // idle high

        // Reset
        #(100);
        rst = 0;

        #(1000);

        // Send sync (MSB=1 resets addr)
        rx_din = 8'h80;
        uart_send_byte(rx_din);

        // Send some pixels
        rx_din = 8'h12;
        uart_send_byte(rx_din);
        rx_din = 8'h34;
        uart_send_byte(rx_din);
        rx_din = 8'h56;
        uart_send_byte(rx_din);
        rx_din = 8'h78;
        uart_send_byte(rx_din);

        // Send swap 
        rx_din = 8'h81;
        uart_send_byte(rx_din);

        // Send sync (MSB=1 resets addr)
        rx_din = 8'h80;
        uart_send_byte(rx_din);

        // Send some pixels
        rx_din = 8'h3F;
        uart_send_byte(rx_din);
        rx_din = 8'h30;
        uart_send_byte(rx_din);
        rx_din = 8'h0C;
        uart_send_byte(rx_din);
        rx_din = 8'h03;
        uart_send_byte(rx_din);

        #(10000);
        rx_din = 8'h80;
        uart_send_byte(rx_din);

        #(5000000);

        $finish;
    end

    // ----------------------------------------------------------------
    // VCD dumping
    // ----------------------------------------------------------------
    initial begin
        $dumpfile("tb_vga_uart.vcd");
        $dumpvars(0, tb_vga_uart);
    end

endmodule