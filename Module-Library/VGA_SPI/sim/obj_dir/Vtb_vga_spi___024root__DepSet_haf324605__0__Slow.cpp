// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_vga_spi.h for the primary calling header

#include "Vtb_vga_spi__pch.h"
#include "Vtb_vga_spi__Syms.h"
#include "Vtb_vga_spi___024root.h"

VL_ATTR_COLD void Vtb_vga_spi___024root___eval_initial__TOP(Vtb_vga_spi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelf->tb_vga_spi__DOT__clk = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f737069U;
    __Vtemp_1[2U] = 0x5f766761U;
    __Vtemp_1[3U] = 0x7462U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    VL_PRINTF_MT("-Info: ../testbench/tb_vga_spi.sv:52: $dumpvar ignored, as Verilated without --trace\n");
}
