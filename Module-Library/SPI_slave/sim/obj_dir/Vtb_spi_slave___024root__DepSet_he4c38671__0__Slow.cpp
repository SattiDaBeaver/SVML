// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_slave.h for the primary calling header

#include "Vtb_spi_slave__pch.h"
#include "Vtb_spi_slave___024root.h"

VL_ATTR_COLD void Vtb_spi_slave___024root___eval_static(Vtb_spi_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spi_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_slave___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_spi_slave___024root___eval_initial__TOP(Vtb_spi_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spi_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_slave___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb_spi_slave__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_spi_slave___024root___eval_final(Vtb_spi_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spi_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_slave___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_spi_slave___024root___eval_settle(Vtb_spi_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spi_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_slave___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_slave___024root___dump_triggers__act(Vtb_spi_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spi_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_slave___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_spi_slave.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_spi_slave.cs_n or posedge tb_spi_slave.rst or posedge tb_spi_slave.sclk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_spi_slave.rst or negedge tb_spi_slave.sclk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_spi_slave.clk or posedge tb_spi_slave.rst)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_slave___024root___dump_triggers__nba(Vtb_spi_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spi_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_slave___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_spi_slave.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_spi_slave.cs_n or posedge tb_spi_slave.rst or posedge tb_spi_slave.sclk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_spi_slave.rst or negedge tb_spi_slave.sclk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_spi_slave.clk or posedge tb_spi_slave.rst)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_spi_slave___024root___ctor_var_reset(Vtb_spi_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spi_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_slave___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_spi_slave__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_slave__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_slave__DOT__sclk = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_slave__DOT__cs_n = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_slave__DOT__mosi = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_slave__DOT__din = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_slave__DOT__d_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_slave__DOT__dout = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_slave__DOT__dut__DOT__shift_in = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_slave__DOT__dut__DOT__bit_count = VL_RAND_RESET_I(4);
    vlSelf->tb_spi_slave__DOT__dut__DOT__captured_data = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_slave__DOT__dut__DOT__data_ready_toggle = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_slave__DOT__dut__DOT__shift_out = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_slave__DOT__dut__DOT__cs_n_prev = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_slave__DOT__dut__DOT__toggle_sync1 = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_slave__DOT__dut__DOT__toggle_sync2 = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_slave__DOT__dut__DOT__toggle_sync3 = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_slave__DOT__dut__DOT__captured_sync1 = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_slave__DOT__dut__DOT__captured_sync2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_spi_slave__DOT__dut__DOT__shift_in = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_spi_slave__DOT__dut__DOT__bit_count = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_spi_slave__DOT__dut__DOT__data_ready_toggle = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_slave__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_slave__DOT__cs_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_slave__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_slave__DOT__sclk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
