// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_vga_uart__Syms.h"


void Vtb_vga_uart___024root__trace_chg_0_sub_0(Vtb_vga_uart___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_vga_uart___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_uart___024root__trace_chg_0\n"); );
    // Init
    Vtb_vga_uart___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vga_uart___024root*>(voidSelf);
    Vtb_vga_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_vga_uart___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_vga_uart___024root__trace_chg_0_sub_0(Vtb_vga_uart___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_uart___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                                 ? (0xcU & (((0x12bffU 
                                              >= vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__addr_b)
                                              ? vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem
                                             [vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__addr_b]
                                              : 0U) 
                                            >> 2U))
                                 : 0U)),4);
        bufp->chgCData(oldp+1,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                                 ? ((0x12bffU >= vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__addr_b)
                                     ? (0xcU & vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem
                                        [vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__addr_b])
                                     : 0U) : 0U)),4);
        bufp->chgCData(oldp+2,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                                 ? (((0x12bffU >= vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__addr_b)
                                      ? (3U & vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem
                                         [vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__addr_b])
                                      : 0U) << 2U) : 0U)),4);
        bufp->chgBit(oldp+3,((0x60U <= (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count))));
        bufp->chgBit(oldp+4,((2U <= (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count))));
        bufp->chgIData(oldp+5,(vlSelf->tb_vga_uart__DOT__addr_count),17);
        bufp->chgCData(oldp+6,(vlSelf->tb_vga_uart__DOT__DUT__DOT__din),8);
        bufp->chgBit(oldp+7,(vlSelf->tb_vga_uart__DOT__DUT__DOT__wen));
        bufp->chgCData(oldp+8,(((0x12bffU >= vlSelf->tb_vga_uart__DOT__addr_count)
                                 ? vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem
                                [vlSelf->tb_vga_uart__DOT__addr_count]
                                 : 0U)),8);
        bufp->chgCData(oldp+9,(vlSelf->tb_vga_uart__DOT__DUT__DOT__rx_dout),8);
        bufp->chgBit(oldp+10,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataDone));
        bufp->chgBit(oldp+11,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_out));
        bufp->chgBit(oldp+12,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_done));
        bufp->chgBit(oldp+13,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_busy));
        bufp->chgCData(oldp+14,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index),4);
        bufp->chgCData(oldp+15,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount),8);
        bufp->chgBit(oldp+16,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__regInMeta));
        bufp->chgBit(oldp+17,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__regIn));
        bufp->chgCData(oldp+18,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataOut),8);
        bufp->chgCData(oldp+19,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state),2);
        bufp->chgSData(oldp+20,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__packet),10);
        bufp->chgCData(oldp+21,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index),4);
        bufp->chgCData(oldp+22,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__clkCount),8);
        bufp->chgCData(oldp+23,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state),2);
        bufp->chgSData(oldp+24,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                                  ? (0x1ffU & (((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count) 
                                                - (IData)(0x90U)) 
                                               >> 1U))
                                  : 0U)),9);
        bufp->chgCData(oldp+25,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                                  ? (0xffU & (((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count) 
                                               - (IData)(0x23U)) 
                                              >> 1U))
                                  : 0U)),8);
        bufp->chgSData(oldp+26,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                                  ? (0x3ffU & ((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count) 
                                               - (IData)(0x90U)))
                                  : 0U)),10);
        bufp->chgSData(oldp+27,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                                  ? (0x3ffU & ((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count) 
                                               - (IData)(0x23U)))
                                  : 0U)),10);
        bufp->chgBit(oldp+28,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active));
        bufp->chgIData(oldp+29,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__addr_b),17);
        bufp->chgCData(oldp+30,(((0x12bffU >= vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__addr_b)
                                  ? vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__RAM__DOT__mem
                                 [vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__addr_b]
                                  : 0U)),8);
        bufp->chgCData(oldp+31,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                                  ? 0xfU : 0U)),4);
        bufp->chgBit(oldp+32,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__vga_en));
        bufp->chgBit(oldp+33,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count));
        bufp->chgSData(oldp+34,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count),10);
        bufp->chgSData(oldp+35,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count),10);
    }
    bufp->chgBit(oldp+36,(vlSelf->tb_vga_uart__DOT__clk));
    bufp->chgBit(oldp+37,(vlSelf->tb_vga_uart__DOT__rst));
    bufp->chgBit(oldp+38,(vlSelf->tb_vga_uart__DOT__rx));
    bufp->chgCData(oldp+39,(vlSelf->tb_vga_uart__DOT__rx_din),8);
    bufp->chgIData(oldp+40,(vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i),32);
}

void Vtb_vga_uart___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_uart___024root__trace_cleanup\n"); );
    // Init
    Vtb_vga_uart___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vga_uart___024root*>(voidSelf);
    Vtb_vga_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
