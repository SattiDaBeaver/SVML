// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_vga_uart.h for the primary calling header

#ifndef VERILATED_VTB_VGA_UART___024ROOT_H_
#define VERILATED_VTB_VGA_UART___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_vga_uart__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_vga_uart___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_vga_uart__DOT__clk;
    CData/*0:0*/ tb_vga_uart__DOT__rst;
    CData/*0:0*/ tb_vga_uart__DOT__rx;
    CData/*0:0*/ tb_vga_uart__DOT__tx;
    CData/*7:0*/ tb_vga_uart__DOT__rx_din;
    CData/*7:0*/ tb_vga_uart__DOT__DUT__DOT__din;
    CData/*0:0*/ tb_vga_uart__DOT__DUT__DOT__wen;
    CData/*7:0*/ tb_vga_uart__DOT__DUT__DOT__rx_dout;
    CData/*0:0*/ tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active;
    CData/*7:0*/ tb_vga_uart__DOT__DUT__DOT__VGA__DOT__mem_d_out_vga;
    CData/*0:0*/ tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__vga_en;
    CData/*0:0*/ tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count;
    CData/*0:0*/ tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__we_b;
    CData/*7:0*/ tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__din_b;
    CData/*7:0*/ tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT____Vlvbound_hc21aa8f5__0;
    CData/*7:0*/ tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT____Vlvbound_hf1aa6683__0;
    CData/*7:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_dataIn;
    CData/*0:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_en;
    CData/*0:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_out;
    CData/*0:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_done;
    CData/*0:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_busy;
    CData/*3:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index;
    CData/*7:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__clkCount;
    CData/*1:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state;
    CData/*3:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index;
    CData/*7:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount;
    CData/*0:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__regInMeta;
    CData/*0:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__regIn;
    CData/*0:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__parity;
    CData/*7:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataOut;
    CData/*0:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataDone;
    CData/*1:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vga_uart__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count;
    SData/*9:0*/ tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count;
    SData/*9:0*/ tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__packet;
    IData/*16:0*/ tb_vga_uart__DOT__addr_count;
    IData/*31:0*/ tb_vga_uart__DOT__uart_send_byte__Vstatic__i;
    IData/*16:0*/ tb_vga_uart__DOT__DUT__DOT__VGA__DOT__addr_b;
    IData/*16:0*/ tb_vga_uart__DOT__DUT__DOT__VGA__DOT__mem_addr_vga;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 76800> tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_vga_uart__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_vga_uart___024root(Vtb_vga_uart__Syms* symsp, const char* v__name);
    ~Vtb_vga_uart___024root();
    VL_UNCOPYABLE(Vtb_vga_uart___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
