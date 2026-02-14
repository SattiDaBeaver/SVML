// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dp_ram.h for the primary calling header

#include "Vtb_dp_ram__pch.h"
#include "Vtb_dp_ram___024root.h"

VL_ATTR_COLD void Vtb_dp_ram___024root___eval_static__TOP(Vtb_dp_ram___024root* vlSelf);

VL_ATTR_COLD void Vtb_dp_ram___024root___eval_static(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___eval_static\n"); );
    // Body
    Vtb_dp_ram___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_dp_ram___024root___eval_static__TOP(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_dp_ram__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_dp_ram___024root___eval_final(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dp_ram___024root___dump_triggers__stl(Vtb_dp_ram___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_dp_ram___024root___eval_phase__stl(Vtb_dp_ram___024root* vlSelf);

VL_ATTR_COLD void Vtb_dp_ram___024root___eval_settle(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_dp_ram___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../testbench/tb_dp_ram.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_dp_ram___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dp_ram___024root___dump_triggers__stl(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_dp_ram___024root___act_comb__TOP__0(Vtb_dp_ram___024root* vlSelf);

VL_ATTR_COLD void Vtb_dp_ram___024root___eval_stl(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_dp_ram___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_dp_ram___024root___eval_triggers__stl(Vtb_dp_ram___024root* vlSelf);

VL_ATTR_COLD bool Vtb_dp_ram___024root___eval_phase__stl(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_dp_ram___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_dp_ram___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dp_ram___024root___dump_triggers__act(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_dp_ram.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dp_ram___024root___dump_triggers__nba(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_dp_ram.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_dp_ram___024root___ctor_var_reset(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_dp_ram__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_dp_ram__DOT__we_a = VL_RAND_RESET_I(1);
    vlSelf->tb_dp_ram__DOT__addr_a = VL_RAND_RESET_I(10);
    vlSelf->tb_dp_ram__DOT__din_a = VL_RAND_RESET_I(8);
    vlSelf->tb_dp_ram__DOT__dout_a = VL_RAND_RESET_I(8);
    vlSelf->tb_dp_ram__DOT__we_b = VL_RAND_RESET_I(1);
    vlSelf->tb_dp_ram__DOT__addr_b = VL_RAND_RESET_I(10);
    vlSelf->tb_dp_ram__DOT__din_b = VL_RAND_RESET_I(8);
    vlSelf->tb_dp_ram__DOT__dout_b = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 1000; ++__Vi0) {
        vlSelf->tb_dp_ram__DOT__dut__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_dp_ram__DOT__dut__DOT____Vlvbound_hfaabf0d1__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_dp_ram__DOT__dut__DOT____Vlvbound_h0c8b2832__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_dp_ram__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
