// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_vga_double_buf.h for the primary calling header

#include "Vtb_vga_double_buf__pch.h"
#include "Vtb_vga_double_buf__Syms.h"
#include "Vtb_vga_double_buf___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_vga_double_buf___024root___eval_initial__TOP__Vtiming__0(Vtb_vga_double_buf___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_vga_double_buf__DOT__write_buffer__0__offset;
    __Vtask_tb_vga_double_buf__DOT__write_buffer__0__offset = 0;
    IData/*31:0*/ __Vtask_tb_vga_double_buf__DOT__write_buffer__0__unnamedblk1__DOT__i;
    __Vtask_tb_vga_double_buf__DOT__write_buffer__0__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_vga_double_buf__DOT__write_buffer__1__offset;
    __Vtask_tb_vga_double_buf__DOT__write_buffer__1__offset = 0;
    IData/*31:0*/ __Vtask_tb_vga_double_buf__DOT__write_buffer__1__unnamedblk1__DOT__i;
    __Vtask_tb_vga_double_buf__DOT__write_buffer__1__unnamedblk1__DOT__i = 0;
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f627566U;
    __Vtemp_1[2U] = 0x75626c65U;
    __Vtemp_1[3U] = 0x615f646fU;
    __Vtemp_1[4U] = 0x625f7667U;
    __Vtemp_1[5U] = 0x74U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->tb_vga_double_buf__DOT__rst = 1U;
    vlSelf->tb_vga_double_buf__DOT__swap_buf = 0U;
    vlSelf->tb_vga_double_buf__DOT__mem_addr = 0U;
    vlSelf->tb_vga_double_buf__DOT__din = 0U;
    vlSelf->tb_vga_double_buf__DOT__wen = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "../testbench/tb_vga_double_buf.sv", 
                                       65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vga_double_buf__DOT__rst = 0U;
    __Vtask_tb_vga_double_buf__DOT__write_buffer__0__offset = 0U;
    __Vtask_tb_vga_double_buf__DOT__write_buffer__0__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x12c00U, __Vtask_tb_vga_double_buf__DOT__write_buffer__0__unnamedblk1__DOT__i)) {
        vlSelf->tb_vga_double_buf__DOT__mem_addr = 
            (0x1ffffU & __Vtask_tb_vga_double_buf__DOT__write_buffer__0__unnamedblk1__DOT__i);
        vlSelf->tb_vga_double_buf__DOT__din = (0xffU 
                                               & (__Vtask_tb_vga_double_buf__DOT__write_buffer__0__unnamedblk1__DOT__i 
                                                  + __Vtask_tb_vga_double_buf__DOT__write_buffer__0__offset));
        vlSelf->tb_vga_double_buf__DOT__wen = 1U;
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           nullptr, 
                                           "../testbench/tb_vga_double_buf.sv", 
                                           54);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_vga_double_buf__DOT__write_buffer__0__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_vga_double_buf__DOT__write_buffer__0__unnamedblk1__DOT__i);
    }
    vlSelf->tb_vga_double_buf__DOT__wen = 0U;
    vlSelf->tb_vga_double_buf__DOT__swap_buf = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "../testbench/tb_vga_double_buf.sv", 
                                       73);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vga_double_buf__DOT__swap_buf = 0U;
    __Vtask_tb_vga_double_buf__DOT__write_buffer__1__offset = 0x64U;
    __Vtask_tb_vga_double_buf__DOT__write_buffer__1__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x12c00U, __Vtask_tb_vga_double_buf__DOT__write_buffer__1__unnamedblk1__DOT__i)) {
        vlSelf->tb_vga_double_buf__DOT__mem_addr = 
            (0x1ffffU & __Vtask_tb_vga_double_buf__DOT__write_buffer__1__unnamedblk1__DOT__i);
        vlSelf->tb_vga_double_buf__DOT__din = (0xffU 
                                               & (__Vtask_tb_vga_double_buf__DOT__write_buffer__1__unnamedblk1__DOT__i 
                                                  + __Vtask_tb_vga_double_buf__DOT__write_buffer__1__offset));
        vlSelf->tb_vga_double_buf__DOT__wen = 1U;
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           nullptr, 
                                           "../testbench/tb_vga_double_buf.sv", 
                                           54);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_vga_double_buf__DOT__write_buffer__1__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_vga_double_buf__DOT__write_buffer__1__unnamedblk1__DOT__i);
    }
    vlSelf->tb_vga_double_buf__DOT__wen = 0U;
    co_await vlSelf->__VdlySched.delay(0x30d40ULL, 
                                       nullptr, "../testbench/tb_vga_double_buf.sv", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("../testbench/tb_vga_double_buf.sv", 82, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vga_double_buf___024root___dump_triggers__act(Vtb_vga_double_buf___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_vga_double_buf___024root___eval_triggers__act(Vtb_vga_double_buf___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_vga_double_buf__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_vga_double_buf__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_vga_double_buf__DOT__clk__0 
        = vlSelf->tb_vga_double_buf__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_vga_double_buf___024root___dump_triggers__act(vlSelf);
    }
#endif
}
