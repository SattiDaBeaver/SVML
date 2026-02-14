// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_slave.h for the primary calling header

#include "Vtb_spi_slave__pch.h"
#include "Vtb_spi_slave__Syms.h"
#include "Vtb_spi_slave___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_spi_slave___024root___eval_initial__TOP__Vtiming__0(Vtb_spi_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spi_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_slave___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*7:0*/ __Vtask_tb_spi_slave__DOT__spi_send_byte__0__data;
    __Vtask_tb_spi_slave__DOT__spi_send_byte__0__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_slave__DOT__spi_send_byte__1__data;
    __Vtask_tb_spi_slave__DOT__spi_send_byte__1__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_slave__DOT__spi_send_byte__2__data;
    __Vtask_tb_spi_slave__DOT__spi_send_byte__2__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_slave__DOT__spi_send_byte__3__data;
    __Vtask_tb_spi_slave__DOT__spi_send_byte__3__data = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6c617665U;
    __Vtemp_1[2U] = 0x70695f73U;
    __Vtemp_1[3U] = 0x74625f73U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->tb_spi_slave__DOT__rst = 1U;
    vlSelf->tb_spi_slave__DOT__cs_n = 1U;
    vlSelf->tb_spi_slave__DOT__mosi = 0U;
    vlSelf->tb_spi_slave__DOT__load = 0U;
    vlSelf->tb_spi_slave__DOT__din = 0xa5U;
    co_await vlSelf->__VdlySched.delay(0x457ULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__rst = 0U;
    vlSelf->tb_spi_slave__DOT__load = 1U;
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__load = 0U;
    vlSelf->tb_spi_slave__DOT__cs_n = 0U;
    __Vtask_tb_spi_slave__DOT__spi_send_byte__0__data = 0x3cU;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__0__data) 
                                             >> 7U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 6U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__0__data) 
                                             >> 6U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 5U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__0__data) 
                                             >> 5U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 4U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__0__data) 
                                             >> 4U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 3U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__0__data) 
                                             >> 3U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 2U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__0__data) 
                                             >> 2U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 1U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__0__data) 
                                             >> 1U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 0U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & (IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__0__data));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 0xffffffffU;
    __Vtask_tb_spi_slave__DOT__spi_send_byte__1__data = 0x80U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__1__data) 
                                             >> 7U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 6U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__1__data) 
                                             >> 6U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 5U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__1__data) 
                                             >> 5U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 4U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__1__data) 
                                             >> 4U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 3U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__1__data) 
                                             >> 3U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 2U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__1__data) 
                                             >> 2U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 1U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__1__data) 
                                             >> 1U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 0U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & (IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__1__data));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 0xffffffffU;
    __Vtask_tb_spi_slave__DOT__spi_send_byte__2__data = 0x36U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__2__data) 
                                             >> 7U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 6U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__2__data) 
                                             >> 6U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 5U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__2__data) 
                                             >> 5U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 4U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__2__data) 
                                             >> 4U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 3U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__2__data) 
                                             >> 3U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 2U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__2__data) 
                                             >> 2U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 1U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__2__data) 
                                             >> 1U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 0U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & (IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__2__data));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 0xffffffffU;
    __Vtask_tb_spi_slave__DOT__spi_send_byte__3__data = 0x1bU;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__3__data) 
                                             >> 7U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 6U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__3__data) 
                                             >> 6U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 5U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__3__data) 
                                             >> 5U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 4U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__3__data) 
                                             >> 4U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 3U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__3__data) 
                                             >> 3U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 2U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__3__data) 
                                             >> 2U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 1U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & ((IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__3__data) 
                                             >> 1U));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 0U;
    vlSelf->tb_spi_slave__DOT__mosi = (1U & (IData)(__Vtask_tb_spi_slave__DOT__spi_send_byte__3__data));
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__spi_send_byte__Vstatic__i = 0xffffffffU;
    co_await vlSelf->__VdlySched.delay(0xdeULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spi_slave__DOT__cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x457ULL, nullptr, 
                                       "../testbench/tb_spi_slave.sv", 
                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("RX dout = %x\n",8,vlSelf->tb_spi_slave__DOT__dout);
    VL_FINISH_MT("../testbench/tb_spi_slave.sv", 81, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_slave___024root___dump_triggers__act(Vtb_spi_slave___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_spi_slave___024root___eval_triggers__act(Vtb_spi_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spi_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_slave___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_spi_slave__DOT__rst) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_spi_slave__DOT__rst__0))) 
                                     | ((IData)(vlSelf->tb_spi_slave__DOT__sclk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_spi_slave__DOT__sclk__0)))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->tb_spi_slave__DOT__rst) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_spi_slave__DOT__rst__0))) 
                                     | ((~ (IData)(vlSelf->tb_spi_slave__DOT__sclk)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_spi_slave__DOT__sclk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_slave__DOT__rst__0 
        = vlSelf->tb_spi_slave__DOT__rst;
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_slave__DOT__sclk__0 
        = vlSelf->tb_spi_slave__DOT__sclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_spi_slave___024root___dump_triggers__act(vlSelf);
    }
#endif
}
