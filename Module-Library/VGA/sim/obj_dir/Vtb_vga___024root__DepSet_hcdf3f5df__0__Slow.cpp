// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_vga.h for the primary calling header

#include "Vtb_vga__pch.h"
#include "Vtb_vga__Syms.h"
#include "Vtb_vga___024root.h"

VL_ATTR_COLD void Vtb_vga___024root___eval_initial__TOP(Vtb_vga___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->tb_vga__DOT__clk = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f766761U;
    __Vtemp_1[2U] = 0x7462U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}
