// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_dp_ram.h for the primary calling header

#ifndef VERILATED_VTB_DP_RAM___024ROOT_H_
#define VERILATED_VTB_DP_RAM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_dp_ram__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_dp_ram___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_dp_ram__DOT__clk;
    CData/*0:0*/ tb_dp_ram__DOT__we_a;
    CData/*7:0*/ tb_dp_ram__DOT__din_a;
    CData/*7:0*/ tb_dp_ram__DOT__dout_a;
    CData/*0:0*/ tb_dp_ram__DOT__we_b;
    CData/*7:0*/ tb_dp_ram__DOT__din_b;
    CData/*7:0*/ tb_dp_ram__DOT__dout_b;
    CData/*7:0*/ tb_dp_ram__DOT__dut__DOT____Vlvbound_hfaabf0d1__0;
    CData/*7:0*/ tb_dp_ram__DOT__dut__DOT____Vlvbound_h0c8b2832__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_dp_ram__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb_dp_ram__DOT__addr_a;
    SData/*9:0*/ tb_dp_ram__DOT__addr_b;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 1000> tb_dp_ram__DOT__dut__DOT__mem;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb0a1eb2a__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_dp_ram__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_dp_ram___024root(Vtb_dp_ram__Syms* symsp, const char* v__name);
    ~Vtb_dp_ram___024root();
    VL_UNCOPYABLE(Vtb_dp_ram___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
