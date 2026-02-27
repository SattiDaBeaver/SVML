// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_vga_spi.h for the primary calling header

#ifndef VERILATED_VTB_VGA_SPI___024ROOT_H_
#define VERILATED_VTB_VGA_SPI___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_vga_spi__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_vga_spi___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_vga_spi__DOT__clk;
    CData/*0:0*/ tb_vga_spi__DOT__rst;
    CData/*0:0*/ tb_vga_spi__DOT__sclk;
    CData/*0:0*/ tb_vga_spi__DOT__cs_n;
    CData/*0:0*/ tb_vga_spi__DOT__mosi;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__addr_delay;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__d_valid_spi;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__dout_spi;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_in;
    CData/*3:0*/ tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_data;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__SPI__DOT__data_ready_toggle;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync1;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync2;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync3;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_sync1;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_sync2;
    CData/*7:0*/ __Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_in;
    CData/*3:0*/ __Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count;
    CData/*0:0*/ __Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__data_ready_toggle;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vga_spi__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vga_spi__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vga_spi__DOT__sclk__0;
    CData/*0:0*/ __VactContinue;
    IData/*16:0*/ tb_vga_spi__DOT__addr_count;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6ceec637__0;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_vga_spi__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_vga_spi___024root(Vtb_vga_spi__Syms* symsp, const char* v__name);
    ~Vtb_vga_spi___024root();
    VL_UNCOPYABLE(Vtb_vga_spi___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
