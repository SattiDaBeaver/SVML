// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_vga_spi.h for the primary calling header

#include "Vtb_vga_spi__pch.h"
#include "Vtb_vga_spi___024root.h"

VL_ATTR_COLD void Vtb_vga_spi___024root___eval_initial__TOP(Vtb_vga_spi___024root* vlSelf);
VlCoroutine Vtb_vga_spi___024root___eval_initial__TOP__Vtiming__0(Vtb_vga_spi___024root* vlSelf);
VlCoroutine Vtb_vga_spi___024root___eval_initial__TOP__Vtiming__1(Vtb_vga_spi___024root* vlSelf);
VlCoroutine Vtb_vga_spi___024root___eval_initial__TOP__Vtiming__2(Vtb_vga_spi___024root* vlSelf);

void Vtb_vga_spi___024root___eval_initial(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval_initial\n"); );
    // Body
    Vtb_vga_spi___024root___eval_initial__TOP(vlSelf);
    Vtb_vga_spi___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_vga_spi___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_vga_spi___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_vga_spi__DOT__clk__0 
        = vlSelf->tb_vga_spi__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_vga_spi__DOT__rst__0 
        = vlSelf->tb_vga_spi__DOT__rst;
    vlSelf->__Vtrigprevexpr___TOP__tb_vga_spi__DOT__sclk__0 
        = vlSelf->tb_vga_spi__DOT__sclk;
}

VL_INLINE_OPT VlCoroutine Vtb_vga_spi___024root___eval_initial__TOP__Vtiming__0(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*7:0*/ __Vtask_tb_vga_spi__DOT__spi_send__0__data;
    __Vtask_tb_vga_spi__DOT__spi_send__0__data = 0;
    CData/*7:0*/ __Vtask_tb_vga_spi__DOT__spi_send__1__data;
    __Vtask_tb_vga_spi__DOT__spi_send__1__data = 0;
    CData/*7:0*/ __Vtask_tb_vga_spi__DOT__spi_send__2__data;
    __Vtask_tb_vga_spi__DOT__spi_send__2__data = 0;
    CData/*7:0*/ __Vtask_tb_vga_spi__DOT__spi_send__3__data;
    __Vtask_tb_vga_spi__DOT__spi_send__3__data = 0;
    CData/*7:0*/ __Vtask_tb_vga_spi__DOT__spi_send__4__data;
    __Vtask_tb_vga_spi__DOT__spi_send__4__data = 0;
    CData/*7:0*/ __Vtask_tb_vga_spi__DOT__spi_send__5__data;
    __Vtask_tb_vga_spi__DOT__spi_send__5__data = 0;
    CData/*7:0*/ __Vtask_tb_vga_spi__DOT__spi_send__6__data;
    __Vtask_tb_vga_spi__DOT__spi_send__6__data = 0;
    CData/*7:0*/ __Vtask_tb_vga_spi__DOT__spi_send__7__data;
    __Vtask_tb_vga_spi__DOT__spi_send__7__data = 0;
    // Body
    vlSelf->tb_vga_spi__DOT__rst = 1U;
    vlSelf->tb_vga_spi__DOT__cs_n = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = 0U;
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       81);
    vlSelf->tb_vga_spi__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       83);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       83);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       83);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       83);
    VL_WRITEF("=== Test 1: Control byte - align reset ===\n");
    __Vtask_tb_vga_spi__DOT__spi_send__0__data = 0x80U;
    vlSelf->tb_vga_spi__DOT__cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       60);
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__0__data) 
                                           >> 7U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__0__data) 
                                           >> 6U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__0__data) 
                                           >> 5U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__0__data) 
                                           >> 4U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__0__data) 
                                           >> 3U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__0__data) 
                                           >> 2U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__0__data) 
                                           >> 1U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & (IData)(__Vtask_tb_vga_spi__DOT__spi_send__0__data));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       68);
    vlSelf->tb_vga_spi__DOT__cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "../testbench/tb_vga_spi.sv", 
                                       70);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       88);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       88);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       88);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       88);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       88);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       88);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       88);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       88);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       88);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       88);
    if ((0U == vlSelf->tb_vga_spi__DOT__addr_count)) {
        VL_WRITEF("PASS: addr_count reset to 0\n");
    } else {
        VL_WRITEF("FAIL: addr_count = %0#\n",17,vlSelf->tb_vga_spi__DOT__addr_count);
    }
    VL_WRITEF("=== Test 2: Pixel bytes, addr_count increment ===\n");
    __Vtask_tb_vga_spi__DOT__spi_send__1__data = 0x1bU;
    vlSelf->tb_vga_spi__DOT__cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       60);
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__1__data) 
                                           >> 7U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__1__data) 
                                           >> 6U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__1__data) 
                                           >> 5U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__1__data) 
                                           >> 4U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__1__data) 
                                           >> 3U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__1__data) 
                                           >> 2U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__1__data) 
                                           >> 1U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & (IData)(__Vtask_tb_vga_spi__DOT__spi_send__1__data));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       68);
    vlSelf->tb_vga_spi__DOT__cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "../testbench/tb_vga_spi.sv", 
                                       70);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       98);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       98);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       98);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       98);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       98);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       98);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       98);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       98);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       98);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       98);
    VL_WRITEF("After byte 1: addr_count = %0# (expect 0, addr_delay set)\n",
              17,vlSelf->tb_vga_spi__DOT__addr_count);
    __Vtask_tb_vga_spi__DOT__spi_send__2__data = 0x1bU;
    vlSelf->tb_vga_spi__DOT__cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       60);
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__2__data) 
                                           >> 7U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__2__data) 
                                           >> 6U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__2__data) 
                                           >> 5U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__2__data) 
                                           >> 4U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__2__data) 
                                           >> 3U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__2__data) 
                                           >> 2U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__2__data) 
                                           >> 1U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & (IData)(__Vtask_tb_vga_spi__DOT__spi_send__2__data));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       68);
    vlSelf->tb_vga_spi__DOT__cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "../testbench/tb_vga_spi.sv", 
                                       70);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       102);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       102);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       102);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       102);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       102);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       102);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       102);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       102);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       102);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       102);
    VL_WRITEF("After byte 2: addr_count = %0# (expect 1)\n",
              17,vlSelf->tb_vga_spi__DOT__addr_count);
    __Vtask_tb_vga_spi__DOT__spi_send__3__data = 0x3fU;
    vlSelf->tb_vga_spi__DOT__cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       60);
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__3__data) 
                                           >> 7U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__3__data) 
                                           >> 6U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__3__data) 
                                           >> 5U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__3__data) 
                                           >> 4U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__3__data) 
                                           >> 3U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__3__data) 
                                           >> 2U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__3__data) 
                                           >> 1U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & (IData)(__Vtask_tb_vga_spi__DOT__spi_send__3__data));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       68);
    vlSelf->tb_vga_spi__DOT__cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "../testbench/tb_vga_spi.sv", 
                                       70);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       106);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       106);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       106);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       106);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       106);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       106);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       106);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       106);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       106);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       106);
    VL_WRITEF("After byte 3: addr_count = %0# (expect 2)\n=== Test 3: Swap buffer command ===\n",
              17,vlSelf->tb_vga_spi__DOT__addr_count);
    __Vtask_tb_vga_spi__DOT__spi_send__4__data = 0x81U;
    vlSelf->tb_vga_spi__DOT__cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       60);
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__4__data) 
                                           >> 7U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__4__data) 
                                           >> 6U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__4__data) 
                                           >> 5U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__4__data) 
                                           >> 4U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__4__data) 
                                           >> 3U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__4__data) 
                                           >> 2U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__4__data) 
                                           >> 1U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & (IData)(__Vtask_tb_vga_spi__DOT__spi_send__4__data));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       68);
    vlSelf->tb_vga_spi__DOT__cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "../testbench/tb_vga_spi.sv", 
                                       70);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       112);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       112);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       112);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       112);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       112);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       112);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       112);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       112);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       112);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       112);
    VL_WRITEF("Swap sent (check swap_buf pulse in waves)\n=== Test 4: Re-align mid stream ===\n");
    __Vtask_tb_vga_spi__DOT__spi_send__5__data = 0x80U;
    vlSelf->tb_vga_spi__DOT__cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       60);
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__5__data) 
                                           >> 7U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__5__data) 
                                           >> 6U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__5__data) 
                                           >> 5U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__5__data) 
                                           >> 4U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__5__data) 
                                           >> 3U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__5__data) 
                                           >> 2U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__5__data) 
                                           >> 1U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & (IData)(__Vtask_tb_vga_spi__DOT__spi_send__5__data));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       68);
    vlSelf->tb_vga_spi__DOT__cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "../testbench/tb_vga_spi.sv", 
                                       70);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       118);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       118);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       118);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       118);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       118);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       118);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       118);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       118);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       118);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       118);
    if ((0U == vlSelf->tb_vga_spi__DOT__addr_count)) {
        VL_WRITEF("PASS: addr_count reset\n");
    } else {
        VL_WRITEF("FAIL: addr_count = %0#\n",17,vlSelf->tb_vga_spi__DOT__addr_count);
    }
    VL_WRITEF("=== Test 5: Rapid fire pixels ===\n");
    __Vtask_tb_vga_spi__DOT__spi_send__6__data = 0U;
    vlSelf->tb_vga_spi__DOT__cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       60);
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__6__data) 
                                           >> 7U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__6__data) 
                                           >> 6U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__6__data) 
                                           >> 5U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__6__data) 
                                           >> 4U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__6__data) 
                                           >> 3U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__6__data) 
                                           >> 2U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__6__data) 
                                           >> 1U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & (IData)(__Vtask_tb_vga_spi__DOT__spi_send__6__data));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       68);
    vlSelf->tb_vga_spi__DOT__cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "../testbench/tb_vga_spi.sv", 
                                       70);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       127);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       127);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       127);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       127);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       127);
    __Vtask_tb_vga_spi__DOT__spi_send__7__data = 0x2aU;
    vlSelf->tb_vga_spi__DOT__cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       60);
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 7U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 6U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 5U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 4U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 3U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 2U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 1U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & (IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       68);
    vlSelf->tb_vga_spi__DOT__cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "../testbench/tb_vga_spi.sv", 
                                       70);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    __Vtask_tb_vga_spi__DOT__spi_send__7__data = 0x2aU;
    vlSelf->tb_vga_spi__DOT__cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       60);
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 7U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 6U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 5U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 4U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 3U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 2U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 1U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & (IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       68);
    vlSelf->tb_vga_spi__DOT__cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "../testbench/tb_vga_spi.sv", 
                                       70);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    __Vtask_tb_vga_spi__DOT__spi_send__7__data = 0x2aU;
    vlSelf->tb_vga_spi__DOT__cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       60);
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 7U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 6U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 5U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 4U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 3U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 2U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 1U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & (IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       68);
    vlSelf->tb_vga_spi__DOT__cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "../testbench/tb_vga_spi.sv", 
                                       70);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    __Vtask_tb_vga_spi__DOT__spi_send__7__data = 0x2aU;
    vlSelf->tb_vga_spi__DOT__cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       60);
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 7U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 6U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 5U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 4U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 3U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 2U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 1U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & (IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       68);
    vlSelf->tb_vga_spi__DOT__cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "../testbench/tb_vga_spi.sv", 
                                       70);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    __Vtask_tb_vga_spi__DOT__spi_send__7__data = 0x2aU;
    vlSelf->tb_vga_spi__DOT__cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       60);
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 7U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 6U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 5U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 4U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 3U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 2U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & ((IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data) 
                                           >> 1U));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    vlSelf->tb_vga_spi__DOT__mosi = (1U & (IData)(__Vtask_tb_vga_spi__DOT__spi_send__7__data));
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       63);
    vlSelf->tb_vga_spi__DOT__sclk = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       65);
    vlSelf->tb_vga_spi__DOT__sclk = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "../testbench/tb_vga_spi.sv", 
                                       68);
    vlSelf->tb_vga_spi__DOT__cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "../testbench/tb_vga_spi.sv", 
                                       70);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       130);
    VL_WRITEF("After 6 bytes: addr_count = %0# (expect 5)\n",
              17,vlSelf->tb_vga_spi__DOT__addr_count);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    co_await vlSelf->__VtrigSched_h6ceec637__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vga_spi.clk)", 
                                                       "../testbench/tb_vga_spi.sv", 
                                                       134);
    VL_WRITEF("=== Done ===\n");
    VL_FINISH_MT("../testbench/tb_vga_spi.sv", 136, "");
}

VL_INLINE_OPT VlCoroutine Vtb_vga_spi___024root___eval_initial__TOP__Vtiming__1(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x2540be400ULL, 
                                       nullptr, "../testbench/tb_vga_spi.sv", 
                                       141);
    VL_WRITEF("TIMEOUT\n");
    VL_FINISH_MT("../testbench/tb_vga_spi.sv", 143, "");
}

VL_INLINE_OPT VlCoroutine Vtb_vga_spi___024root___eval_initial__TOP__Vtiming__2(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x2710ULL, 
                                           nullptr, 
                                           "../testbench/tb_vga_spi.sv", 
                                           45);
        vlSelf->tb_vga_spi__DOT__clk = (1U & (~ (IData)(vlSelf->tb_vga_spi__DOT__clk)));
    }
}

void Vtb_vga_spi___024root___eval_act(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_vga_spi___024root___nba_sequent__TOP__0(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__data_ready_toggle 
        = vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__data_ready_toggle;
    vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count 
        = vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count;
    vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_in 
        = vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_in;
}

VL_INLINE_OPT void Vtb_vga_spi___024root___nba_sequent__TOP__1(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*16:0*/ __Vdly__tb_vga_spi__DOT__addr_count;
    __Vdly__tb_vga_spi__DOT__addr_count = 0;
    CData/*0:0*/ __Vdly__tb_vga_spi__DOT__DUT__DOT__addr_delay;
    __Vdly__tb_vga_spi__DOT__DUT__DOT__addr_delay = 0;
    // Body
    __Vdly__tb_vga_spi__DOT__DUT__DOT__addr_delay = vlSelf->tb_vga_spi__DOT__DUT__DOT__addr_delay;
    __Vdly__tb_vga_spi__DOT__addr_count = vlSelf->tb_vga_spi__DOT__addr_count;
    if (vlSelf->tb_vga_spi__DOT__rst) {
        __Vdly__tb_vga_spi__DOT__addr_count = 0U;
        __Vdly__tb_vga_spi__DOT__DUT__DOT__addr_delay = 0U;
    } else if (vlSelf->tb_vga_spi__DOT__DUT__DOT__d_valid_spi) {
        if ((0x80U & (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__dout_spi))) {
            if ((0U == (0x7fU & (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__dout_spi)))) {
                __Vdly__tb_vga_spi__DOT__addr_count = 0U;
                __Vdly__tb_vga_spi__DOT__DUT__DOT__addr_delay = 0U;
            } else if ((1U != (0x7fU & (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__dout_spi)))) {
                __Vdly__tb_vga_spi__DOT__addr_count = 0U;
                __Vdly__tb_vga_spi__DOT__DUT__DOT__addr_delay = 0U;
            }
        } else if ((0x12bffU <= vlSelf->tb_vga_spi__DOT__addr_count)) {
            __Vdly__tb_vga_spi__DOT__addr_count = 0U;
        } else if (vlSelf->tb_vga_spi__DOT__DUT__DOT__addr_delay) {
            __Vdly__tb_vga_spi__DOT__addr_count = (0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->tb_vga_spi__DOT__addr_count));
        } else {
            __Vdly__tb_vga_spi__DOT__DUT__DOT__addr_delay = 1U;
        }
    }
    vlSelf->tb_vga_spi__DOT__addr_count = __Vdly__tb_vga_spi__DOT__addr_count;
    vlSelf->tb_vga_spi__DOT__DUT__DOT__addr_delay = __Vdly__tb_vga_spi__DOT__DUT__DOT__addr_delay;
}

VL_INLINE_OPT void Vtb_vga_spi___024root___nba_sequent__TOP__2(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->tb_vga_spi__DOT__DUT__DOT__d_valid_spi 
        = ((1U & (~ (IData)(vlSelf->tb_vga_spi__DOT__rst))) 
           && ((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync2) 
               ^ (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync3)));
    if (vlSelf->tb_vga_spi__DOT__rst) {
        vlSelf->tb_vga_spi__DOT__DUT__DOT__dout_spi = 0U;
        vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_sync2 = 0U;
        vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_sync1 = 0U;
    } else {
        if (((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync2) 
             ^ (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync3))) {
            vlSelf->tb_vga_spi__DOT__DUT__DOT__dout_spi 
                = vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_sync2;
        }
        vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_sync2 
            = vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_sync1;
        vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_sync1 
            = vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_data;
    }
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync3 
        = ((1U & (~ (IData)(vlSelf->tb_vga_spi__DOT__rst))) 
           && (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync2));
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync2 
        = ((1U & (~ (IData)(vlSelf->tb_vga_spi__DOT__rst))) 
           && (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync1));
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync1 
        = ((1U & (~ (IData)(vlSelf->tb_vga_spi__DOT__rst))) 
           && (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__data_ready_toggle));
}

VL_INLINE_OPT void Vtb_vga_spi___024root___nba_sequent__TOP__3(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->tb_vga_spi__DOT__rst) {
        vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_in = 0U;
        vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count = 0U;
        vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__data_ready_toggle = 0U;
        vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_data = 0U;
    } else if (vlSelf->tb_vga_spi__DOT__cs_n) {
        vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count = 0U;
    } else {
        vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_in 
            = ((0xfeU & ((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_in) 
                         << 1U)) | (IData)(vlSelf->tb_vga_spi__DOT__mosi));
        if ((7U == (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count))) {
            vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__data_ready_toggle 
                = (1U & (~ (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__data_ready_toggle)));
            vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_data 
                = ((0xfeU & ((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_in) 
                             << 1U)) | (IData)(vlSelf->tb_vga_spi__DOT__mosi));
            vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count = 0U;
        } else {
            vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count)));
        }
    }
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_in 
        = vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_in;
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count 
        = vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count;
    vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__data_ready_toggle 
        = vlSelf->__Vdly__tb_vga_spi__DOT__DUT__DOT__SPI__DOT__data_ready_toggle;
}

void Vtb_vga_spi___024root___eval_nba(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vga_spi___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vga_spi___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vga_spi___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vga_spi___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void Vtb_vga_spi___024root___timing_resume(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h6ceec637__0.resume("@(posedge tb_vga_spi.clk)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_vga_spi___024root___timing_commit(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h6ceec637__0.commit("@(posedge tb_vga_spi.clk)");
    }
}

void Vtb_vga_spi___024root___eval_triggers__act(Vtb_vga_spi___024root* vlSelf);

bool Vtb_vga_spi___024root___eval_phase__act(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_vga_spi___024root___eval_triggers__act(vlSelf);
    Vtb_vga_spi___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_vga_spi___024root___timing_resume(vlSelf);
        Vtb_vga_spi___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_vga_spi___024root___eval_phase__nba(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_vga_spi___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vga_spi___024root___dump_triggers__nba(Vtb_vga_spi___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vga_spi___024root___dump_triggers__act(Vtb_vga_spi___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_vga_spi___024root___eval(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_vga_spi___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../testbench/tb_vga_spi.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_vga_spi___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../testbench/tb_vga_spi.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_vga_spi___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_vga_spi___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_vga_spi___024root___eval_debug_assertions(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
