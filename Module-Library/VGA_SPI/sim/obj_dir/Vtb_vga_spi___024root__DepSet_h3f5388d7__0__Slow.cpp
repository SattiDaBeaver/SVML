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

VL_ATTR_COLD void Vtb_vga_spi___024root___eval_settle(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval_settle\n"); );
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
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_vga_spi.rst or posedge tb_vga_spi.sclk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_vga_spi.clk or posedge tb_vga_spi.rst)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_vga_spi.rst or posedge tb_vga_spi.sclk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_vga_spi.clk or posedge tb_vga_spi.rst)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
    vlSelf->tb_vga_spi__DOT__DUT__DOT__addr_delay = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__d_valid_spi = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__dout_spi = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_in = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count = VL_RAND_RESET_I(4);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_data = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__data_ready_toggle = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync1 = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync2 = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync3 = VL_RAND_RESET_I(1);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_sync1 = VL_RAND_RESET_I(8);
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_sync2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_in = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__data_ready_toggle = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_vga_spi__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_vga_spi__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_vga_spi__DOT__sclk__0 = VL_RAND_RESET_I(1);
}
