// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_vga_double_buf.h for the primary calling header

#ifndef VERILATED_VTB_VGA_DOUBLE_BUF___024ROOT_H_
#define VERILATED_VTB_VGA_DOUBLE_BUF___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_vga_double_buf__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_vga_double_buf___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_vga_double_buf__DOT__clk;
    CData/*0:0*/ tb_vga_double_buf__DOT__rst;
    CData/*7:0*/ tb_vga_double_buf__DOT__din;
    CData/*0:0*/ tb_vga_double_buf__DOT__wen;
    CData/*0:0*/ tb_vga_double_buf__DOT__swap_buf;
    CData/*0:0*/ tb_vga_double_buf__DOT__DUT__DOT__curr_buffer;
    CData/*0:0*/ tb_vga_double_buf__DOT__DUT__DOT__swap_latch;
    CData/*0:0*/ tb_vga_double_buf__DOT__DUT__DOT__vga_active;
    CData/*7:0*/ tb_vga_double_buf__DOT__DUT__DOT__mem_d_out_vga;
    CData/*0:0*/ tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__vga_en;
    CData/*0:0*/ tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__clk_div_count;
    CData/*0:0*/ tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__we_b;
    CData/*7:0*/ tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__din_b;
    CData/*7:0*/ tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT____Vlvbound_hc21aa8f5__0;
    CData/*7:0*/ tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT____Vlvbound_hf1aa6683__0;
    CData/*0:0*/ tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__we_b;
    CData/*7:0*/ tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__din_b;
    CData/*7:0*/ tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT____Vlvbound_hc21aa8f5__0;
    CData/*7:0*/ tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT____Vlvbound_hf1aa6683__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vga_double_buf__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count;
    SData/*9:0*/ tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count;
    IData/*16:0*/ tb_vga_double_buf__DOT__mem_addr;
    IData/*16:0*/ tb_vga_double_buf__DOT__DUT__DOT__addr_b;
    IData/*16:0*/ tb_vga_double_buf__DOT__DUT__DOT__addr_a_0;
    IData/*16:0*/ tb_vga_double_buf__DOT__DUT__DOT__addr_a_1;
    IData/*16:0*/ tb_vga_double_buf__DOT__DUT__DOT__mem_addr_vga;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 76800> tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem;
    VlUnpacked<CData/*7:0*/, 76800> tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_vga_double_buf__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_vga_double_buf___024root(Vtb_vga_double_buf__Syms* symsp, const char* v__name);
    ~Vtb_vga_double_buf___024root();
    VL_UNCOPYABLE(Vtb_vga_double_buf___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
