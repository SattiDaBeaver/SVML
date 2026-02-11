// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_vga.h for the primary calling header

#ifndef VERILATED_VTB_VGA___024ROOT_H_
#define VERILATED_VTB_VGA___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_vga__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_vga___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_vga__DOT__clk;
    CData/*0:0*/ tb_vga__DOT__rst;
    CData/*0:0*/ tb_vga__DOT__dut__DOT__vga_en;
    CData/*0:0*/ tb_vga__DOT__dut__DOT__clk_div_count;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vga__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb_vga__DOT__dut__DOT__h_count;
    SData/*9:0*/ tb_vga__DOT__dut__DOT__v_count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_vga__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_vga___024root(Vtb_vga__Syms* symsp, const char* v__name);
    ~Vtb_vga___024root();
    VL_UNCOPYABLE(Vtb_vga___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
