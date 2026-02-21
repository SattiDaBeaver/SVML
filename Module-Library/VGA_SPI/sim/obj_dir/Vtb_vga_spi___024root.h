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
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__d_valid_spi;
    CData/*0:0*/ tb_vga_spi__DOT__mosi;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__din;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__wen;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__swap_buf;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__swap_done;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__addr_delay;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__din_spi;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__dout_spi;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__toggle_spi;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__sync1;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__sync2;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__sync3;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__d_valid_sync;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__curr_buffer;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__swap_latch;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__vga_active;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_a_0;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_b_0;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_a_1;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_b_1;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__mem_d_out_vga;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__vga_en;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_0__DOT__we_b;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_0__DOT__din_b;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_0__DOT____Vlvbound_hc21aa8f5__0;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_0__DOT____Vlvbound_hf1aa6683__0;
    CData/*0:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_1__DOT__we_b;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_1__DOT__din_b;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_1__DOT____Vlvbound_hc21aa8f5__0;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_1__DOT____Vlvbound_hf1aa6683__0;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_in;
    CData/*7:0*/ tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_out;
    CData/*3:0*/ tb_vga_spi__DOT__DUT__DOT__SPI__DOT__count;
    CData/*0:0*/ __Vdly__tb_vga_spi__DOT__DUT__DOT__toggle_spi;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vga_spi__DOT__DUT__DOT__d_valid_spi__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vga_spi__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vga_spi__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vga_spi__DOT__cs_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vga_spi__DOT__sclk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count;
    SData/*9:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count;
    IData/*16:0*/ tb_vga_spi__DOT__addr_count;
    IData/*31:0*/ tb_vga_spi__DOT__spi_send__Vstatic__i;
    IData/*16:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__addr_b;
    IData/*16:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__addr_a_0;
    IData/*16:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__addr_a_1;
    IData/*16:0*/ tb_vga_spi__DOT__DUT__DOT__VGA__DOT__mem_addr_vga;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 76800> tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_0__DOT__mem;
    VlUnpacked<CData/*7:0*/, 76800> tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_1__DOT__mem;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6ceec637__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

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
