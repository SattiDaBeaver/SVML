// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_vga_spi.h for the primary calling header

#include "Vtb_vga_spi__pch.h"
#include "Vtb_vga_spi___024root.h"

VL_ATTR_COLD void Vtb_vga_spi___024root___eval_static(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_vga_spi___024root___eval_final(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vga_spi___024root___dump_triggers__stl(Vtb_vga_spi___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_vga_spi___024root___eval_phase__stl(Vtb_vga_spi___024root* vlSelf);

VL_ATTR_COLD void Vtb_vga_spi___024root___eval_settle(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval_settle\n"); );
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
            Vtb_vga_spi___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../testbench/tb_vga_spi.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_vga_spi___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vga_spi___024root___dump_triggers__stl(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_vga_spi___024root___stl_sequent__TOP__0(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__curr_buffer) {
        vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__addr_a_0 = 0U;
        vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__addr_a_1 
            = vlSelf->tb_vga_spi__DOT__addr_count;
    } else {
        vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__addr_a_0 
            = vlSelf->tb_vga_spi__DOT__addr_count;
        vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__addr_a_1 = 0U;
    }
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__vga_active 
        = ((0x310U > (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count)) 
           & ((0x8fU < (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count)) 
              & ((0x203U > (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count)) 
                 & (0x22U < (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count)))));
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__addr_b 
        = (0x1ffffU & (((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__vga_active)
                         ? (0x1ffU & (((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count) 
                                       - (IData)(0x90U)) 
                                      >> 1U)) : 0U) 
                       + ((IData)(0x140U) * ((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__vga_active)
                                              ? (0xffU 
                                                 & (((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count) 
                                                     - (IData)(0x23U)) 
                                                    >> 1U))
                                              : 0U))));
}

VL_ATTR_COLD void Vtb_vga_spi___024root___eval_stl(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_vga_spi___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_vga_spi___024root___eval_triggers__stl(Vtb_vga_spi___024root* vlSelf);

VL_ATTR_COLD bool Vtb_vga_spi___024root___eval_phase__stl(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_vga_spi___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_vga_spi___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vga_spi___024root___dump_triggers__act(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_vga_spi.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_vga_spi.cs_n or posedge tb_vga_spi.rst or posedge tb_vga_spi.sclk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_vga_spi.rst or negedge tb_vga_spi.sclk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_vga_spi.clk or posedge tb_vga_spi.rst)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vga_spi___024root___dump_triggers__nba(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_vga_spi.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_vga_spi.cs_n or posedge tb_vga_spi.rst or posedge tb_vga_spi.sclk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_vga_spi.rst or negedge tb_vga_spi.sclk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_vga_spi.clk or posedge tb_vga_spi.rst)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_vga_spi___024root___ctor_var_reset(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_vga_spi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__sclk = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__cs_n = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__mosi = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__addr_count = VL_RAND_RESET_I(17);
    vlSelf->tb_vga_spi__DOT__spi_send__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__din = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__swap_buf = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__swap_done = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__addr_delay = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__d_valid_spi = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__dout_spi = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__curr_buffer = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__swap_latch = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__vga_active = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__addr_b = VL_RAND_RESET_I(17);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__addr_a_0 = VL_RAND_RESET_I(17);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_a_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_b_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__addr_a_1 = VL_RAND_RESET_I(17);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_a_1 = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_b_1 = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__mem_addr_vga = VL_RAND_RESET_I(17);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__mem_d_out_vga = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__vga_en = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count = VL_RAND_RESET_I(10);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count = VL_RAND_RESET_I(10);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_0__DOT__we_b = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_0__DOT__din_b = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 76800; ++__Vi0) {
        vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_0__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_0__DOT____Vlvbound_hc21aa8f5__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_0__DOT____Vlvbound_hf1aa6683__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_1__DOT__we_b = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_1__DOT__din_b = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 76800; ++__Vi0) {
        vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_1__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_1__DOT____Vlvbound_hc21aa8f5__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__RAM_1__DOT____Vlvbound_hf1aa6683__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_in = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count = VL_RAND_RESET_I(4);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_data = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__data_ready_toggle = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_out = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__cs_n_prev = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync1 = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync2 = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync3 = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_sync1 = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_sync2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_in = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__data_ready_toggle = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_vga_spi__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_vga_spi__DOT__cs_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_vga_spi__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_vga_spi__DOT__sclk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
