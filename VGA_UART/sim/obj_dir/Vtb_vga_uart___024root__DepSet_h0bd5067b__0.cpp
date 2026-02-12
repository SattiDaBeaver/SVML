// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_vga_uart.h for the primary calling header

#include "Vtb_vga_uart__pch.h"
#include "Vtb_vga_uart___024root.h"

VL_ATTR_COLD void Vtb_vga_uart___024root___eval_initial__TOP(Vtb_vga_uart___024root* vlSelf);
VlCoroutine Vtb_vga_uart___024root___eval_initial__TOP__Vtiming__0(Vtb_vga_uart___024root* vlSelf);
VlCoroutine Vtb_vga_uart___024root___eval_initial__TOP__Vtiming__1(Vtb_vga_uart___024root* vlSelf);

void Vtb_vga_uart___024root___eval_initial(Vtb_vga_uart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_uart___024root___eval_initial\n"); );
    // Body
    Vtb_vga_uart___024root___eval_initial__TOP(vlSelf);
    Vtb_vga_uart___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_vga_uart___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_vga_uart__DOT__clk__0 
        = vlSelf->tb_vga_uart__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_vga_uart___024root___eval_initial__TOP__Vtiming__0(Vtb_vga_uart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_uart___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*7:0*/ __Vtask_tb_vga_uart__DOT__uart_send_byte__0__data;
    __Vtask_tb_vga_uart__DOT__uart_send_byte__0__data = 0;
    CData/*7:0*/ __Vtask_tb_vga_uart__DOT__uart_send_byte__1__data;
    __Vtask_tb_vga_uart__DOT__uart_send_byte__1__data = 0;
    CData/*7:0*/ __Vtask_tb_vga_uart__DOT__uart_send_byte__2__data;
    __Vtask_tb_vga_uart__DOT__uart_send_byte__2__data = 0;
    CData/*7:0*/ __Vtask_tb_vga_uart__DOT__uart_send_byte__3__data;
    __Vtask_tb_vga_uart__DOT__uart_send_byte__3__data = 0;
    CData/*7:0*/ __Vtask_tb_vga_uart__DOT__uart_send_byte__4__data;
    __Vtask_tb_vga_uart__DOT__uart_send_byte__4__data = 0;
    // Body
    vlSelf->tb_vga_uart__DOT__rx = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       62);
    vlSelf->tb_vga_uart__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       65);
    vlSelf->tb_vga_uart__DOT__rx_din = 0x80U;
    __Vtask_tb_vga_uart__DOT__uart_send_byte__0__data 
        = vlSelf->tb_vga_uart__DOT__rx_din;
    vlSelf->tb_vga_uart__DOT__rx = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       43);
    vlSelf->tb_vga_uart__DOT__rx = (1U & (IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__0__data));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 1U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__0__data) 
                                          >> 1U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 2U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__0__data) 
                                          >> 2U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 3U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__0__data) 
                                          >> 3U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 4U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__0__data) 
                                          >> 4U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 5U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__0__data) 
                                          >> 5U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 6U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__0__data) 
                                          >> 6U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 7U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__0__data) 
                                          >> 7U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 8U;
    vlSelf->tb_vga_uart__DOT__rx = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       53);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       54);
    vlSelf->tb_vga_uart__DOT__rx_din = 0x12U;
    __Vtask_tb_vga_uart__DOT__uart_send_byte__1__data 
        = vlSelf->tb_vga_uart__DOT__rx_din;
    vlSelf->tb_vga_uart__DOT__rx = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       43);
    vlSelf->tb_vga_uart__DOT__rx = (1U & (IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__1__data));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 1U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__1__data) 
                                          >> 1U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 2U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__1__data) 
                                          >> 2U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 3U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__1__data) 
                                          >> 3U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 4U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__1__data) 
                                          >> 4U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 5U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__1__data) 
                                          >> 5U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 6U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__1__data) 
                                          >> 6U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 7U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__1__data) 
                                          >> 7U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 8U;
    vlSelf->tb_vga_uart__DOT__rx = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       53);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       54);
    vlSelf->tb_vga_uart__DOT__rx_din = 0x34U;
    __Vtask_tb_vga_uart__DOT__uart_send_byte__2__data 
        = vlSelf->tb_vga_uart__DOT__rx_din;
    vlSelf->tb_vga_uart__DOT__rx = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       43);
    vlSelf->tb_vga_uart__DOT__rx = (1U & (IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__2__data));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 1U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__2__data) 
                                          >> 1U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 2U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__2__data) 
                                          >> 2U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 3U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__2__data) 
                                          >> 3U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 4U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__2__data) 
                                          >> 4U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 5U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__2__data) 
                                          >> 5U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 6U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__2__data) 
                                          >> 6U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 7U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__2__data) 
                                          >> 7U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 8U;
    vlSelf->tb_vga_uart__DOT__rx = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       53);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       54);
    vlSelf->tb_vga_uart__DOT__rx_din = 0x56U;
    __Vtask_tb_vga_uart__DOT__uart_send_byte__3__data 
        = vlSelf->tb_vga_uart__DOT__rx_din;
    vlSelf->tb_vga_uart__DOT__rx = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       43);
    vlSelf->tb_vga_uart__DOT__rx = (1U & (IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__3__data));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 1U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__3__data) 
                                          >> 1U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 2U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__3__data) 
                                          >> 2U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 3U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__3__data) 
                                          >> 3U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 4U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__3__data) 
                                          >> 4U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 5U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__3__data) 
                                          >> 5U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 6U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__3__data) 
                                          >> 6U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 7U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__3__data) 
                                          >> 7U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 8U;
    vlSelf->tb_vga_uart__DOT__rx = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       53);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       54);
    vlSelf->tb_vga_uart__DOT__rx_din = 0x78U;
    __Vtask_tb_vga_uart__DOT__uart_send_byte__4__data 
        = vlSelf->tb_vga_uart__DOT__rx_din;
    vlSelf->tb_vga_uart__DOT__rx = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       43);
    vlSelf->tb_vga_uart__DOT__rx = (1U & (IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__4__data));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 1U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__4__data) 
                                          >> 1U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 2U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__4__data) 
                                          >> 2U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 3U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__4__data) 
                                          >> 3U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 4U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__4__data) 
                                          >> 4U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 5U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__4__data) 
                                          >> 5U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 6U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__4__data) 
                                          >> 6U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 7U;
    vlSelf->tb_vga_uart__DOT__rx = (1U & ((IData)(__Vtask_tb_vga_uart__DOT__uart_send_byte__4__data) 
                                          >> 7U));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       48);
    vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i = 8U;
    vlSelf->tb_vga_uart__DOT__rx = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       53);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../testbench/tb_vga_uart.sv", 
                                       54);
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "../testbench/tb_vga_uart.sv", 
                                       81);
    VL_FINISH_MT("../testbench/tb_vga_uart.sv", 83, "");
}

VL_INLINE_OPT VlCoroutine Vtb_vga_uart___024root___eval_initial__TOP__Vtiming__1(Vtb_vga_uart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_uart___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "../testbench/tb_vga_uart.sv", 
                                           21);
        vlSelf->tb_vga_uart__DOT__clk = (1U & (~ (IData)(vlSelf->tb_vga_uart__DOT__clk)));
    }
}

void Vtb_vga_uart___024root___eval_act(Vtb_vga_uart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_uart___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_vga_uart___024root___nba_sequent__TOP__0(Vtb_vga_uart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_uart___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*16:0*/ __Vdly__tb_vga_uart__DOT__addr_count;
    __Vdly__tb_vga_uart__DOT__addr_count = 0;
    CData/*0:0*/ __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count = 0;
    SData/*9:0*/ __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count = 0;
    SData/*9:0*/ __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count = 0;
    IData/*16:0*/ __Vdlyvdim0__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v0;
    __Vdlyvdim0__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v0;
    __Vdlyvval__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v0;
    __Vdlyvset__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v0 = 0;
    IData/*16:0*/ __Vdlyvdim0__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v1;
    __Vdlyvdim0__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v1;
    __Vdlyvval__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v1;
    __Vdlyvset__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v1 = 0;
    CData/*1:0*/ __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state = 0;
    CData/*3:0*/ __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index = 0;
    CData/*7:0*/ __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__clkCount;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__clkCount = 0;
    SData/*9:0*/ __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__packet;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__packet = 0;
    CData/*7:0*/ __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataOut;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataOut = 0;
    CData/*1:0*/ __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state = 0;
    CData/*3:0*/ __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index = 0;
    CData/*7:0*/ __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount = 0;
    // Body
    __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count 
        = vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count;
    __Vdlyvset__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v1 = 0U;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__packet 
        = vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__packet;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__clkCount 
        = vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__clkCount;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index 
        = vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state 
        = vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount 
        = vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index 
        = vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state 
        = vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataOut 
        = vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataOut;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count 
        = vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count;
    __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count 
        = vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count;
    __Vdly__tb_vga_uart__DOT__addr_count = vlSelf->tb_vga_uart__DOT__addr_count;
    __Vdlyvset__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v0 = 0U;
    if (vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__we_b) {
        vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT____Vlvbound_hf1aa6683__0 
            = vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__din_b;
        if ((0x12bffU >= vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__addr_b)) {
            __Vdlyvval__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v1 
                = vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT____Vlvbound_hf1aa6683__0;
            __Vdlyvset__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v1 = 1U;
            __Vdlyvdim0__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v1 
                = vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__addr_b;
        }
    }
    if (vlSelf->tb_vga_uart__DOT__DUT__DOT__wen) {
        vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT____Vlvbound_hc21aa8f5__0 
            = vlSelf->tb_vga_uart__DOT__DUT__DOT__din;
        if ((0x12bffU >= vlSelf->tb_vga_uart__DOT__addr_count)) {
            __Vdlyvval__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v0 
                = vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT____Vlvbound_hc21aa8f5__0;
            __Vdlyvset__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v0 = 1U;
            __Vdlyvdim0__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v0 
                = vlSelf->tb_vga_uart__DOT__addr_count;
        }
    }
    if (vlSelf->tb_vga_uart__DOT__rst) {
        __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count = 0U;
        __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count = 0U;
        vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count 
            = __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count;
        vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count 
            = __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count;
        __Vdly__tb_vga_uart__DOT__addr_count = 0U;
    } else {
        if (vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__vga_en) {
            if ((0x31fU == (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count))) {
                __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count 
                    = ((0x20cU == (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count))
                        ? 0U : (0x3ffU & ((IData)(1U) 
                                          + (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count))));
                __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count = 0U;
            } else {
                __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count)));
            }
        }
        vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count 
            = __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count;
        vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count 
            = __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count;
        if (vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataDone) {
            __Vdly__tb_vga_uart__DOT__addr_count = 
                ((0x80U & (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__rx_dout))
                  ? 0U : ((0x12bffU <= vlSelf->tb_vga_uart__DOT__addr_count)
                           ? 0U : (0x1ffffU & ((IData)(1U) 
                                               + vlSelf->tb_vga_uart__DOT__addr_count))));
        }
    }
    vlSelf->tb_vga_uart__DOT__addr_count = __Vdly__tb_vga_uart__DOT__addr_count;
    if (__Vdlyvset__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v0) {
        vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem[__Vdlyvdim0__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v0] 
            = __Vdlyvval__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v0;
    }
    if (__Vdlyvset__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v1) {
        vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem[__Vdlyvdim0__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v1] 
            = __Vdlyvval__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem__v1;
    }
    if (vlSelf->tb_vga_uart__DOT__rst) {
        vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_out = 1U;
        __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state = 0U;
        vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_busy = 0U;
        __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index = 0U;
        __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__clkCount = 0U;
        vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_done = 0U;
    } else if ((0U == (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state))) {
        vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_out = 1U;
        __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index = 0U;
        __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__clkCount = 0U;
        vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_done = 0U;
        if (vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_en) {
            __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__packet 
                = (0x200U | ((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_dataIn) 
                             << 1U));
            vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_busy = 1U;
            __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state = 1U;
        } else {
            __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state = 0U;
        }
    } else if ((1U == (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state))) {
        vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_out 
            = ((9U >= (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index)) 
               && (1U & ((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__packet) 
                         >> (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index))));
        if ((0x31U > (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__clkCount))) {
            __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__clkCount 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__clkCount)));
            __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state = 1U;
        } else {
            __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__clkCount = 0U;
            if ((9U == (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index))) {
                __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state = 2U;
            } else {
                __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index)));
                __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state))) {
        __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state = 0U;
        vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_busy = 0U;
        vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_done = 1U;
        __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index = 0U;
        __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__clkCount = 0U;
    } else {
        __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state = 0U;
    }
    vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state 
        = __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state;
    vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index 
        = __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index;
    vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__clkCount 
        = __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__clkCount;
    vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__packet 
        = __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__packet;
    vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active 
        = ((0x310U > (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count)) 
           & ((0x8fU < (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count)) 
              & ((0x203U > (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count)) 
                 & (0x22U < (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count)))));
    if ((1U & (~ (IData)(vlSelf->tb_vga_uart__DOT__rst)))) {
        if (vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataDone) {
            if ((1U & (~ ((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__rx_dout) 
                          >> 7U)))) {
                vlSelf->tb_vga_uart__DOT__DUT__DOT__din 
                    = vlSelf->tb_vga_uart__DOT__DUT__DOT__rx_dout;
            }
        }
    }
    if (vlSelf->tb_vga_uart__DOT__rst) {
        vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__vga_en = 0U;
        __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count = 0U;
        vlSelf->tb_vga_uart__DOT__DUT__DOT__wen = 0U;
        __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataOut = 0U;
        __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state = 0U;
        __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index = 0U;
        __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount = 0U;
        vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataDone = 0U;
    } else {
        if (vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count) {
            vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__vga_en = 1U;
            __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count = 0U;
        } else {
            __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count 
                = (1U & ((IData)(1U) + (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count)));
            vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__vga_en = 0U;
        }
        vlSelf->tb_vga_uart__DOT__DUT__DOT__wen = 0U;
        if (vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataDone) {
            vlSelf->tb_vga_uart__DOT__DUT__DOT__wen 
                = (1U & (~ ((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__rx_dout) 
                            >> 7U)));
        }
        if ((2U & (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state))) {
                if ((0x31U > (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount))) {
                    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount)));
                    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state = 3U;
                } else {
                    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount = 0U;
                    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state = 0U;
                    vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataDone = 1U;
                    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index = 0U;
                    vlSelf->tb_vga_uart__DOT__DUT__DOT__rx_dout 
                        = vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataOut;
                }
            } else if ((0x31U > (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount))) {
                __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount)));
                __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state = 2U;
            } else {
                __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount = 0U;
                if ((8U > (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index))) {
                    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataOut 
                        = (((~ ((IData)(1U) << (7U 
                                                & (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index)))) 
                            & (IData)(__Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataOut)) 
                           | (0xffU & ((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__regIn) 
                                       << (7U & (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index)))));
                    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state = 2U;
                    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index)));
                } else {
                    __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state = 3U;
                }
            }
        } else if ((1U & (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state))) {
            if ((0x18U == (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount))) {
                __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount = 0U;
                __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state = 2U;
            } else {
                __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount)));
                __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state = 1U;
            }
        } else {
            __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount = 0U;
            __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index = 0U;
            __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataOut = 0U;
            vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataDone = 0U;
            __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state 
                = ((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__regIn)
                    ? 0U : 1U);
        }
    }
    vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__addr_b 
        = (0x1ffffU & (((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                         ? (0x1ffU & (((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count) 
                                       - (IData)(0x90U)) 
                                      >> 1U)) : 0U) 
                       + ((IData)(0x140U) * ((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                                              ? (0xffU 
                                                 & (((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count) 
                                                     - (IData)(0x23U)) 
                                                    >> 1U))
                                              : 0U))));
    vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count 
        = __Vdly__tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count;
    vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataOut 
        = __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataOut;
    vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state 
        = __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state;
    vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index 
        = __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index;
    vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount 
        = __Vdly__tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount;
    vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__regIn 
        = vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__regInMeta;
    vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__regInMeta 
        = vlSelf->tb_vga_uart__DOT__rx;
}

void Vtb_vga_uart___024root___eval_nba(Vtb_vga_uart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_uart___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vga_uart___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtb_vga_uart___024root___timing_resume(Vtb_vga_uart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_uart___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_vga_uart___024root___eval_triggers__act(Vtb_vga_uart___024root* vlSelf);

bool Vtb_vga_uart___024root___eval_phase__act(Vtb_vga_uart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_uart___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_vga_uart___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_vga_uart___024root___timing_resume(vlSelf);
        Vtb_vga_uart___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_vga_uart___024root___eval_phase__nba(Vtb_vga_uart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_uart___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_vga_uart___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vga_uart___024root___dump_triggers__nba(Vtb_vga_uart___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vga_uart___024root___dump_triggers__act(Vtb_vga_uart___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_vga_uart___024root___eval(Vtb_vga_uart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_uart___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_vga_uart___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../testbench/tb_vga_uart.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_vga_uart___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../testbench/tb_vga_uart.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_vga_uart___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_vga_uart___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_vga_uart___024root___eval_debug_assertions(Vtb_vga_uart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_uart___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
