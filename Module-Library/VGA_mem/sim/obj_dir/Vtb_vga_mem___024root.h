// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_vga_mem.h for the primary calling header

#ifndef VERILATED_VTB_VGA_MEM___024ROOT_H_
#define VERILATED_VTB_VGA_MEM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_vga_mem__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_vga_mem___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_vga_mem__DOT__clk;
    CData/*0:0*/ tb_vga_mem__DOT__rst;
    CData/*7:0*/ tb_vga_mem__DOT__din;
    CData/*0:0*/ tb_vga_mem__DOT__wen;
    CData/*0:0*/ tb_vga_mem__DOT__dut__DOT__vga_active;
    CData/*7:0*/ tb_vga_mem__DOT__dut__DOT__mem_d_out_vga;
    CData/*0:0*/ tb_vga_mem__DOT__dut__DOT__VGA__DOT__vga_en;
    CData/*0:0*/ tb_vga_mem__DOT__dut__DOT__VGA__DOT__clk_div_count;
    CData/*0:0*/ tb_vga_mem__DOT__dut__DOT__RAM__DOT__we_b;
    CData/*7:0*/ tb_vga_mem__DOT__dut__DOT__RAM__DOT__din_b;
    CData/*7:0*/ tb_vga_mem__DOT__dut__DOT__RAM__DOT____Vlvbound_hc21aa8f5__0;
    CData/*7:0*/ tb_vga_mem__DOT__dut__DOT__RAM__DOT____Vlvbound_hf1aa6683__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vga_mem__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb_vga_mem__DOT__dut__DOT__VGA__DOT__h_count;
    SData/*9:0*/ tb_vga_mem__DOT__dut__DOT__VGA__DOT__v_count;
    IData/*16:0*/ tb_vga_mem__DOT__mem_addr;
    IData/*16:0*/ tb_vga_mem__DOT__dut__DOT__addr_b;
    IData/*16:0*/ tb_vga_mem__DOT__dut__DOT__mem_addr_vga;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 76800> tb_vga_mem__DOT__dut__DOT__RAM__DOT__mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7dfa5db5__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_vga_mem__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_vga_mem___024root(Vtb_vga_mem__Syms* symsp, const char* v__name);
    ~Vtb_vga_mem___024root();
    VL_UNCOPYABLE(Vtb_vga_mem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
