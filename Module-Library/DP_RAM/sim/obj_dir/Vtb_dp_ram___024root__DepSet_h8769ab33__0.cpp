// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dp_ram.h for the primary calling header

#include "Vtb_dp_ram__pch.h"
#include "Vtb_dp_ram__Syms.h"
#include "Vtb_dp_ram___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_dp_ram___024root___eval_initial__TOP__Vtiming__0(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f72616dU;
    __Vtemp_1[2U] = 0x625f6470U;
    __Vtemp_1[3U] = 0x74U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("Starting DP RAM test...\n");
    vlSelf->tb_dp_ram__DOT__we_a = 0U;
    vlSelf->tb_dp_ram__DOT__addr_a = 0U;
    vlSelf->tb_dp_ram__DOT__din_a = 0U;
    vlSelf->tb_dp_ram__DOT__we_b = 0U;
    vlSelf->tb_dp_ram__DOT__addr_b = 0U;
    vlSelf->tb_dp_ram__DOT__din_b = 0U;
    co_await vlSelf->__VtrigSched_hb0a1eb2a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dp_ram.clk)", 
                                                       "../testbench/tb_dp_ram.sv", 
                                                       50);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dp_ram__DOT__we_a = 1U;
    vlSelf->tb_dp_ram__DOT__we_b = 1U;
    vlSelf->tb_dp_ram__DOT__addr_a = 1U;
    vlSelf->tb_dp_ram__DOT__addr_b = 2U;
    vlSelf->tb_dp_ram__DOT__din_a = 0xaaU;
    vlSelf->tb_dp_ram__DOT__din_b = 0xbbU;
    co_await vlSelf->__VtrigSched_hb0a1eb2a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dp_ram.clk)", 
                                                       "../testbench/tb_dp_ram.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dp_ram__DOT__we_a = 0U;
    vlSelf->tb_dp_ram__DOT__we_b = 1U;
    vlSelf->tb_dp_ram__DOT__addr_b = 2U;
    vlSelf->tb_dp_ram__DOT__din_b = 0xbbU;
    co_await vlSelf->__VtrigSched_hb0a1eb2a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dp_ram.clk)", 
                                                       "../testbench/tb_dp_ram.sv", 
                                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dp_ram__DOT__we_b = 0U;
    vlSelf->tb_dp_ram__DOT__addr_a = 1U;
    vlSelf->tb_dp_ram__DOT__addr_b = 2U;
    co_await vlSelf->__VtrigSched_hb0a1eb2a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dp_ram.clk)", 
                                                       "../testbench/tb_dp_ram.sv", 
                                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Read A: %x (Expected AA), Read B: %x (Expected BB)\n",
              8,vlSelf->tb_dp_ram__DOT__dout_a,8,(IData)(vlSelf->tb_dp_ram__DOT__dout_b));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "../testbench/tb_dp_ram.sv", 
                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dp_ram__DOT__addr_a = 3U;
    vlSelf->tb_dp_ram__DOT__din_a = 0x11U;
    vlSelf->tb_dp_ram__DOT__we_a = 1U;
    vlSelf->tb_dp_ram__DOT__addr_b = 4U;
    vlSelf->tb_dp_ram__DOT__din_b = 0x22U;
    vlSelf->tb_dp_ram__DOT__we_b = 1U;
    co_await vlSelf->__VtrigSched_hb0a1eb2a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dp_ram.clk)", 
                                                       "../testbench/tb_dp_ram.sv", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb0a1eb2a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dp_ram.clk)", 
                                                       "../testbench/tb_dp_ram.sv", 
                                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dp_ram__DOT__we_a = 0U;
    vlSelf->tb_dp_ram__DOT__we_b = 0U;
    vlSelf->tb_dp_ram__DOT__addr_a = 3U;
    vlSelf->tb_dp_ram__DOT__addr_b = 4U;
    co_await vlSelf->__VtrigSched_hb0a1eb2a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dp_ram.clk)", 
                                                       "../testbench/tb_dp_ram.sv", 
                                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Read A: %x (Expected 11), Read B: %x (Expected 22)\nTest finished.\n",
              8,vlSelf->tb_dp_ram__DOT__dout_a,8,(IData)(vlSelf->tb_dp_ram__DOT__dout_b));
    VL_FINISH_MT("../testbench/tb_dp_ram.sv", 90, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dp_ram___024root___dump_triggers__act(Vtb_dp_ram___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_dp_ram___024root___eval_triggers__act(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_dp_ram__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_dp_ram__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_dp_ram__DOT__clk__0 
        = vlSelf->tb_dp_ram__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_dp_ram___024root___dump_triggers__act(vlSelf);
    }
#endif
}
