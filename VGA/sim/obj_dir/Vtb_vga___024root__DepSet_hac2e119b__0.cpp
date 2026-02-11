// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_vga.h for the primary calling header

#include "Vtb_vga__pch.h"
#include "Vtb_vga___024root.h"

VL_ATTR_COLD void Vtb_vga___024root___eval_initial__TOP(Vtb_vga___024root* vlSelf);
VlCoroutine Vtb_vga___024root___eval_initial__TOP__Vtiming__0(Vtb_vga___024root* vlSelf);
VlCoroutine Vtb_vga___024root___eval_initial__TOP__Vtiming__1(Vtb_vga___024root* vlSelf);

void Vtb_vga___024root___eval_initial(Vtb_vga___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root___eval_initial\n"); );
    // Body
    Vtb_vga___024root___eval_initial__TOP(vlSelf);
    Vtb_vga___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_vga___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_vga__DOT__clk__0 
        = vlSelf->tb_vga__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_vga___024root___eval_initial__TOP__Vtiming__0(Vtb_vga___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_vga__DOT__rst = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "../testbench/tb_vga.sv", 
                                       51);
    vlSelf->tb_vga__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga.sv", 
                                       53);
    VL_FINISH_MT("../testbench/tb_vga.sv", 54, "");
}

VL_INLINE_OPT VlCoroutine Vtb_vga___024root___eval_initial__TOP__Vtiming__1(Vtb_vga___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "../testbench/tb_vga.sv", 
                                           46);
        vlSelf->tb_vga__DOT__clk = (1U & (~ (IData)(vlSelf->tb_vga__DOT__clk)));
    }
}

void Vtb_vga___024root___eval_act(Vtb_vga___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_vga___024root___nba_sequent__TOP__0(Vtb_vga___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__tb_vga__DOT__dut__DOT__clk_div_count;
    __Vdly__tb_vga__DOT__dut__DOT__clk_div_count = 0;
    SData/*9:0*/ __Vdly__tb_vga__DOT__dut__DOT__h_count;
    __Vdly__tb_vga__DOT__dut__DOT__h_count = 0;
    SData/*9:0*/ __Vdly__tb_vga__DOT__dut__DOT__v_count;
    __Vdly__tb_vga__DOT__dut__DOT__v_count = 0;
    // Body
    __Vdly__tb_vga__DOT__dut__DOT__clk_div_count = vlSelf->tb_vga__DOT__dut__DOT__clk_div_count;
    __Vdly__tb_vga__DOT__dut__DOT__v_count = vlSelf->tb_vga__DOT__dut__DOT__v_count;
    __Vdly__tb_vga__DOT__dut__DOT__h_count = vlSelf->tb_vga__DOT__dut__DOT__h_count;
    if (vlSelf->tb_vga__DOT__rst) {
        __Vdly__tb_vga__DOT__dut__DOT__h_count = 0U;
        __Vdly__tb_vga__DOT__dut__DOT__v_count = 0U;
        vlSelf->tb_vga__DOT__dut__DOT__vga_en = 0U;
        __Vdly__tb_vga__DOT__dut__DOT__clk_div_count = 0U;
    } else {
        if (vlSelf->tb_vga__DOT__dut__DOT__vga_en) {
            if ((0x31fU == (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count))) {
                __Vdly__tb_vga__DOT__dut__DOT__v_count 
                    = ((0x20cU == (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count))
                        ? 0U : (0x3ffU & ((IData)(1U) 
                                          + (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count))));
                __Vdly__tb_vga__DOT__dut__DOT__h_count = 0U;
            } else {
                __Vdly__tb_vga__DOT__dut__DOT__h_count 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)));
            }
        }
        if (vlSelf->tb_vga__DOT__dut__DOT__clk_div_count) {
            vlSelf->tb_vga__DOT__dut__DOT__vga_en = 1U;
            __Vdly__tb_vga__DOT__dut__DOT__clk_div_count = 0U;
        } else {
            __Vdly__tb_vga__DOT__dut__DOT__clk_div_count 
                = (1U & ((IData)(1U) + (IData)(vlSelf->tb_vga__DOT__dut__DOT__clk_div_count)));
            vlSelf->tb_vga__DOT__dut__DOT__vga_en = 0U;
        }
    }
    vlSelf->tb_vga__DOT__dut__DOT__h_count = __Vdly__tb_vga__DOT__dut__DOT__h_count;
    vlSelf->tb_vga__DOT__dut__DOT__v_count = __Vdly__tb_vga__DOT__dut__DOT__v_count;
    vlSelf->tb_vga__DOT__dut__DOT__clk_div_count = __Vdly__tb_vga__DOT__dut__DOT__clk_div_count;
}

void Vtb_vga___024root___eval_nba(Vtb_vga___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vga___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtb_vga___024root___timing_resume(Vtb_vga___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_vga___024root___eval_triggers__act(Vtb_vga___024root* vlSelf);

bool Vtb_vga___024root___eval_phase__act(Vtb_vga___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_vga___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_vga___024root___timing_resume(vlSelf);
        Vtb_vga___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_vga___024root___eval_phase__nba(Vtb_vga___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_vga___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vga___024root___dump_triggers__nba(Vtb_vga___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vga___024root___dump_triggers__act(Vtb_vga___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_vga___024root___eval(Vtb_vga___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_vga___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../testbench/tb_vga.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_vga___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../testbench/tb_vga.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_vga___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_vga___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_vga___024root___eval_debug_assertions(Vtb_vga___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
