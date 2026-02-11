// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dp_ram.h for the primary calling header

#include "Vtb_dp_ram__pch.h"
#include "Vtb_dp_ram___024root.h"

VlCoroutine Vtb_dp_ram___024root___eval_initial__TOP__Vtiming__0(Vtb_dp_ram___024root* vlSelf);
VlCoroutine Vtb_dp_ram___024root___eval_initial__TOP__Vtiming__1(Vtb_dp_ram___024root* vlSelf);

void Vtb_dp_ram___024root___eval_initial(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_dp_ram___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_dp_ram___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_dp_ram__DOT__clk__0 
        = vlSelf->tb_dp_ram__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_dp_ram___024root___eval_initial__TOP__Vtiming__1(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "../testbench/tb_dp_ram.sv", 
                                           22);
        vlSelf->tb_dp_ram__DOT__clk = (1U & (~ (IData)(vlSelf->tb_dp_ram__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_dp_ram___024root___act_comb__TOP__0(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_dp_ram__DOT__dout_a = ((0x3e7U >= (IData)(vlSelf->tb_dp_ram__DOT__addr_a))
                                       ? vlSelf->tb_dp_ram__DOT__dut__DOT__mem
                                      [vlSelf->tb_dp_ram__DOT__addr_a]
                                       : 0U);
    vlSelf->tb_dp_ram__DOT__dout_b = ((0x3e7U >= (IData)(vlSelf->tb_dp_ram__DOT__addr_b))
                                       ? vlSelf->tb_dp_ram__DOT__dut__DOT__mem
                                      [vlSelf->tb_dp_ram__DOT__addr_b]
                                       : 0U);
}

void Vtb_dp_ram___024root___eval_act(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_dp_ram___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_dp_ram___024root___nba_sequent__TOP__0(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__tb_dp_ram__DOT__dut__DOT__mem__v0;
    __Vdlyvdim0__tb_dp_ram__DOT__dut__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_dp_ram__DOT__dut__DOT__mem__v0;
    __Vdlyvval__tb_dp_ram__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_dp_ram__DOT__dut__DOT__mem__v0;
    __Vdlyvset__tb_dp_ram__DOT__dut__DOT__mem__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__tb_dp_ram__DOT__dut__DOT__mem__v1;
    __Vdlyvdim0__tb_dp_ram__DOT__dut__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_dp_ram__DOT__dut__DOT__mem__v1;
    __Vdlyvval__tb_dp_ram__DOT__dut__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_dp_ram__DOT__dut__DOT__mem__v1;
    __Vdlyvset__tb_dp_ram__DOT__dut__DOT__mem__v1 = 0;
    // Body
    __Vdlyvset__tb_dp_ram__DOT__dut__DOT__mem__v0 = 0U;
    __Vdlyvset__tb_dp_ram__DOT__dut__DOT__mem__v1 = 0U;
    if (vlSelf->tb_dp_ram__DOT__we_a) {
        vlSelf->tb_dp_ram__DOT__dut__DOT____Vlvbound_hfaabf0d1__0 
            = vlSelf->tb_dp_ram__DOT__din_a;
        if ((0x3e7U >= (IData)(vlSelf->tb_dp_ram__DOT__addr_a))) {
            __Vdlyvval__tb_dp_ram__DOT__dut__DOT__mem__v0 
                = vlSelf->tb_dp_ram__DOT__dut__DOT____Vlvbound_hfaabf0d1__0;
            __Vdlyvset__tb_dp_ram__DOT__dut__DOT__mem__v0 = 1U;
            __Vdlyvdim0__tb_dp_ram__DOT__dut__DOT__mem__v0 
                = vlSelf->tb_dp_ram__DOT__addr_a;
        }
    }
    if (vlSelf->tb_dp_ram__DOT__we_b) {
        vlSelf->tb_dp_ram__DOT__dut__DOT____Vlvbound_h0c8b2832__0 
            = vlSelf->tb_dp_ram__DOT__din_b;
        if ((0x3e7U >= (IData)(vlSelf->tb_dp_ram__DOT__addr_b))) {
            __Vdlyvval__tb_dp_ram__DOT__dut__DOT__mem__v1 
                = vlSelf->tb_dp_ram__DOT__dut__DOT____Vlvbound_h0c8b2832__0;
            __Vdlyvset__tb_dp_ram__DOT__dut__DOT__mem__v1 = 1U;
            __Vdlyvdim0__tb_dp_ram__DOT__dut__DOT__mem__v1 
                = vlSelf->tb_dp_ram__DOT__addr_b;
        }
    }
    if (__Vdlyvset__tb_dp_ram__DOT__dut__DOT__mem__v0) {
        vlSelf->tb_dp_ram__DOT__dut__DOT__mem[__Vdlyvdim0__tb_dp_ram__DOT__dut__DOT__mem__v0] 
            = __Vdlyvval__tb_dp_ram__DOT__dut__DOT__mem__v0;
    }
    if (__Vdlyvset__tb_dp_ram__DOT__dut__DOT__mem__v1) {
        vlSelf->tb_dp_ram__DOT__dut__DOT__mem[__Vdlyvdim0__tb_dp_ram__DOT__dut__DOT__mem__v1] 
            = __Vdlyvval__tb_dp_ram__DOT__dut__DOT__mem__v1;
    }
}

void Vtb_dp_ram___024root___eval_nba(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_dp_ram___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_dp_ram___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_dp_ram___024root___timing_commit(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hb0a1eb2a__0.commit("@(posedge tb_dp_ram.clk)");
    }
}

void Vtb_dp_ram___024root___timing_resume(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hb0a1eb2a__0.resume("@(posedge tb_dp_ram.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_dp_ram___024root___eval_triggers__act(Vtb_dp_ram___024root* vlSelf);

bool Vtb_dp_ram___024root___eval_phase__act(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_dp_ram___024root___eval_triggers__act(vlSelf);
    Vtb_dp_ram___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_dp_ram___024root___timing_resume(vlSelf);
        Vtb_dp_ram___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_dp_ram___024root___eval_phase__nba(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_dp_ram___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dp_ram___024root___dump_triggers__nba(Vtb_dp_ram___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dp_ram___024root___dump_triggers__act(Vtb_dp_ram___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_dp_ram___024root___eval(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_dp_ram___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../testbench/tb_dp_ram.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_dp_ram___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../testbench/tb_dp_ram.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_dp_ram___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_dp_ram___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_dp_ram___024root___eval_debug_assertions(Vtb_dp_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
