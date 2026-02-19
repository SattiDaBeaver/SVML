// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_vga_double_buf.h for the primary calling header

#include "Vtb_vga_double_buf__pch.h"
#include "Vtb_vga_double_buf___024root.h"

VlCoroutine Vtb_vga_double_buf___024root___eval_initial__TOP__Vtiming__0(Vtb_vga_double_buf___024root* vlSelf);
VlCoroutine Vtb_vga_double_buf___024root___eval_initial__TOP__Vtiming__1(Vtb_vga_double_buf___024root* vlSelf);

void Vtb_vga_double_buf___024root___eval_initial(Vtb_vga_double_buf___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_vga_double_buf___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_vga_double_buf___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_vga_double_buf__DOT__clk__0 
        = vlSelf->tb_vga_double_buf__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_vga_double_buf___024root___eval_initial__TOP__Vtiming__1(Vtb_vga_double_buf___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "../testbench/tb_vga_double_buf.sv", 
                                           25);
        vlSelf->tb_vga_double_buf__DOT__clk = (1U & 
                                               (~ (IData)(vlSelf->tb_vga_double_buf__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_vga_double_buf___024root___act_sequent__TOP__0(Vtb_vga_double_buf___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root___act_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer) {
        vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_0 = 0U;
        vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_1 
            = vlSelf->tb_vga_double_buf__DOT__mem_addr;
    } else {
        vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_0 
            = vlSelf->tb_vga_double_buf__DOT__mem_addr;
        vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_1 = 0U;
    }
}

void Vtb_vga_double_buf___024root___eval_act(Vtb_vga_double_buf___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_vga_double_buf___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_vga_double_buf___024root___nba_sequent__TOP__0(Vtb_vga_double_buf___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__tb_vga_double_buf__DOT__DUT__DOT__swap_latch;
    __Vdly__tb_vga_double_buf__DOT__DUT__DOT__swap_latch = 0;
    CData/*0:0*/ __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__clk_div_count;
    __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__clk_div_count = 0;
    SData/*9:0*/ __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count;
    __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count = 0;
    SData/*9:0*/ __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count;
    __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count = 0;
    IData/*16:0*/ __Vdlyvdim0__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v0;
    __Vdlyvdim0__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v0;
    __Vdlyvval__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v0;
    __Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v0 = 0;
    IData/*16:0*/ __Vdlyvdim0__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v1;
    __Vdlyvdim0__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v1;
    __Vdlyvval__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v1;
    __Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v1 = 0;
    IData/*16:0*/ __Vdlyvdim0__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v0;
    __Vdlyvdim0__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v0;
    __Vdlyvval__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v0;
    __Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v0 = 0;
    IData/*16:0*/ __Vdlyvdim0__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v1;
    __Vdlyvdim0__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v1;
    __Vdlyvval__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v1;
    __Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v1 = 0;
    // Body
    __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__clk_div_count 
        = vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__clk_div_count;
    __Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v1 = 0U;
    __Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v1 = 0U;
    __Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v0 = 0U;
    __Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v0 = 0U;
    __Vdly__tb_vga_double_buf__DOT__DUT__DOT__swap_latch 
        = vlSelf->tb_vga_double_buf__DOT__DUT__DOT__swap_latch;
    __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count 
        = vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count;
    __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count 
        = vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count;
    if (vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__we_b) {
        vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT____Vlvbound_hf1aa6683__0 
            = vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__din_b;
        if ((0x12bffU >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)) {
            __Vdlyvval__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v1 
                = vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT____Vlvbound_hf1aa6683__0;
            __Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v1 = 1U;
            __Vdlyvdim0__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v1 
                = vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b;
        }
    }
    if (vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__we_b) {
        vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT____Vlvbound_hf1aa6683__0 
            = vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__din_b;
        if ((0x12bffU >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)) {
            __Vdlyvval__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v1 
                = vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT____Vlvbound_hf1aa6683__0;
            __Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v1 = 1U;
            __Vdlyvdim0__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v1 
                = vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b;
        }
    }
    if (((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer) 
         & (IData)(vlSelf->tb_vga_double_buf__DOT__wen))) {
        vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT____Vlvbound_hc21aa8f5__0 
            = ((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)
                ? (IData)(vlSelf->tb_vga_double_buf__DOT__din)
                : 0U);
        if ((0x12bffU >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_1)) {
            __Vdlyvval__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v0 
                = vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT____Vlvbound_hc21aa8f5__0;
            __Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v0 = 1U;
            __Vdlyvdim0__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v0 
                = vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_1;
        }
    }
    if (((~ (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)) 
         & (IData)(vlSelf->tb_vga_double_buf__DOT__wen))) {
        vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT____Vlvbound_hc21aa8f5__0 
            = ((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)
                ? 0U : (IData)(vlSelf->tb_vga_double_buf__DOT__din));
        if ((0x12bffU >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_0)) {
            __Vdlyvval__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v0 
                = vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT____Vlvbound_hc21aa8f5__0;
            __Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v0 = 1U;
            __Vdlyvdim0__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v0 
                = vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_0;
        }
    }
    if (vlSelf->tb_vga_double_buf__DOT__rst) {
        __Vdly__tb_vga_double_buf__DOT__DUT__DOT__swap_latch = 0U;
        __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count = 0U;
        __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count = 0U;
        vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__vga_en = 0U;
        __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__clk_div_count = 0U;
    } else {
        if (vlSelf->tb_vga_double_buf__DOT__swap_buf) {
            __Vdly__tb_vga_double_buf__DOT__DUT__DOT__swap_latch = 1U;
        }
        if (((0U == (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count)) 
             & (0U == (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count)))) {
            if (vlSelf->tb_vga_double_buf__DOT__DUT__DOT__swap_latch) {
                vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer 
                    = (1U & (~ (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)));
                __Vdly__tb_vga_double_buf__DOT__DUT__DOT__swap_latch = 0U;
            }
        }
        if (vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__vga_en) {
            if ((0x31fU == (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count))) {
                __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count 
                    = ((0x20cU == (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count))
                        ? 0U : (0x3ffU & ((IData)(1U) 
                                          + (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count))));
                __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count = 0U;
            } else {
                __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count)));
            }
        }
        if (vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__clk_div_count) {
            vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__vga_en = 1U;
            __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__clk_div_count = 0U;
        } else {
            __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__clk_div_count 
                = (1U & ((IData)(1U) + (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__clk_div_count)));
            vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__vga_en = 0U;
        }
    }
    if (__Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v0) {
        vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem[__Vdlyvdim0__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v0] 
            = __Vdlyvval__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v0;
    }
    if (__Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v1) {
        vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem[__Vdlyvdim0__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v1] 
            = __Vdlyvval__tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem__v1;
    }
    if (__Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v0) {
        vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem[__Vdlyvdim0__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v0] 
            = __Vdlyvval__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v0;
    }
    if (__Vdlyvset__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v1) {
        vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem[__Vdlyvdim0__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v1] 
            = __Vdlyvval__tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem__v1;
    }
    vlSelf->tb_vga_double_buf__DOT__DUT__DOT__swap_latch 
        = __Vdly__tb_vga_double_buf__DOT__DUT__DOT__swap_latch;
    vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count 
        = __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count;
    vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count 
        = __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count;
    vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active 
        = ((0x310U > (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count)) 
           & ((0x8fU < (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count)) 
              & ((0x203U > (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count)) 
                 & (0x22U < (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count)))));
    vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b 
        = (0x1ffffU & (((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                         ? (0x1ffU & (((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count) 
                                       - (IData)(0x90U)) 
                                      >> 1U)) : 0U) 
                       + ((IData)(0x140U) * ((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                                              ? (0xffU 
                                                 & (((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count) 
                                                     - (IData)(0x23U)) 
                                                    >> 1U))
                                              : 0U))));
    vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__clk_div_count 
        = __Vdly__tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__clk_div_count;
}

void Vtb_vga_double_buf___024root___eval_nba(Vtb_vga_double_buf___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vga_double_buf___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vga_double_buf___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_vga_double_buf___024root___timing_resume(Vtb_vga_double_buf___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_vga_double_buf___024root___eval_triggers__act(Vtb_vga_double_buf___024root* vlSelf);

bool Vtb_vga_double_buf___024root___eval_phase__act(Vtb_vga_double_buf___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_vga_double_buf___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_vga_double_buf___024root___timing_resume(vlSelf);
        Vtb_vga_double_buf___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_vga_double_buf___024root___eval_phase__nba(Vtb_vga_double_buf___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_vga_double_buf___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vga_double_buf___024root___dump_triggers__nba(Vtb_vga_double_buf___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vga_double_buf___024root___dump_triggers__act(Vtb_vga_double_buf___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_vga_double_buf___024root___eval(Vtb_vga_double_buf___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_vga_double_buf___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../testbench/tb_vga_double_buf.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_vga_double_buf___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../testbench/tb_vga_double_buf.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_vga_double_buf___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_vga_double_buf___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_vga_double_buf___024root___eval_debug_assertions(Vtb_vga_double_buf___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
