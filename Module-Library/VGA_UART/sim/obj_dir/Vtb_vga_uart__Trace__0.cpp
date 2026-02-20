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
                                 ? (0xcU & (((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__curr_buffer)
                                              ? (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__dout_b_1)
                                              : (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__dout_b_0)) 
                                            >> 2U))
                                 : 0U)),4);
        bufp->chgCData(oldp+1,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                                 ? (0xcU & ((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__curr_buffer)
                                             ? (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__dout_b_1)
                                             : (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__dout_b_0)))
                                 : 0U)),4);
        bufp->chgCData(oldp+2,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                                 ? (0xcU & (((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__curr_buffer)
                                              ? (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__dout_b_1)
                                              : (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__dout_b_0)) 
                                            << 2U))
                                 : 0U)),4);
        bufp->chgBit(oldp+3,((0x60U <= (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count))));
        bufp->chgBit(oldp+4,((2U <= (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count))));
        bufp->chgIData(oldp+5,(vlSelf->tb_vga_uart__DOT__addr_count),17);
        bufp->chgCData(oldp+6,(vlSelf->tb_vga_uart__DOT__DUT__DOT__din),8);
        bufp->chgBit(oldp+7,(vlSelf->tb_vga_uart__DOT__DUT__DOT__wen));
        bufp->chgBit(oldp+8,(vlSelf->tb_vga_uart__DOT__DUT__DOT__swap_buf));
        bufp->chgCData(oldp+9,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__curr_buffer)
                                 ? (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__dout_a_1)
                                 : (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__dout_a_0))),8);
        bufp->chgBit(oldp+10,(vlSelf->tb_vga_uart__DOT__DUT__DOT__addr_delay));
        bufp->chgCData(oldp+11,(vlSelf->tb_vga_uart__DOT__DUT__DOT__rx_dout),8);
        bufp->chgBit(oldp+12,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataDone));
        bufp->chgBit(oldp+13,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_out));
        bufp->chgBit(oldp+14,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_done));
        bufp->chgBit(oldp+15,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__TX_busy));
        bufp->chgCData(oldp+16,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__index),4);
        bufp->chgCData(oldp+17,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__clkCount),8);
        bufp->chgBit(oldp+18,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__regInMeta));
        bufp->chgBit(oldp+19,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__regIn));
        bufp->chgCData(oldp+20,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__dataOut),8);
        bufp->chgCData(oldp+21,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_RX1__DOT__state),2);
        bufp->chgSData(oldp+22,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__packet),10);
        bufp->chgCData(oldp+23,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__index),4);
        bufp->chgCData(oldp+24,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__clkCount),8);
        bufp->chgCData(oldp+25,(vlSelf->tb_vga_uart__DOT__DUT__DOT__UART__DOT__UART_TX1__DOT__state),2);
        bufp->chgBit(oldp+26,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__curr_buffer));
        bufp->chgBit(oldp+27,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__swap_latch));
        bufp->chgSData(oldp+28,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                                  ? (0x1ffU & (((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count) 
                                                - (IData)(0x90U)) 
                                               >> 1U))
                                  : 0U)),9);
        bufp->chgCData(oldp+29,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                                  ? (0xffU & (((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count) 
                                               - (IData)(0x23U)) 
                                              >> 1U))
                                  : 0U)),8);
        bufp->chgSData(oldp+30,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                                  ? (0x3ffU & ((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count) 
                                               - (IData)(0x90U)))
                                  : 0U)),10);
        bufp->chgSData(oldp+31,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                                  ? (0x3ffU & ((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count) 
                                               - (IData)(0x23U)))
                                  : 0U)),10);
        bufp->chgBit(oldp+32,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active));
        bufp->chgBit(oldp+33,(((0U == (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count)) 
                               & (0U == (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count)))));
        bufp->chgIData(oldp+34,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__addr_b),17);
        bufp->chgCData(oldp+35,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__curr_buffer)
                                  ? (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__dout_b_1)
                                  : (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__dout_b_0))),8);
        bufp->chgBit(oldp+36,(((~ (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__curr_buffer)) 
                               & (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__wen))));
        bufp->chgIData(oldp+37,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__addr_a_0),17);
        bufp->chgCData(oldp+38,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__curr_buffer)
                                  ? 0U : (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__din))),8);
        bufp->chgCData(oldp+39,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__dout_a_0),8);
        bufp->chgCData(oldp+40,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__dout_b_0),8);
        bufp->chgBit(oldp+41,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__curr_buffer) 
                               & (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__wen))));
        bufp->chgIData(oldp+42,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__addr_a_1),17);
        bufp->chgCData(oldp+43,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__curr_buffer)
                                  ? (IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__din)
                                  : 0U)),8);
        bufp->chgCData(oldp+44,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__dout_a_1),8);
        bufp->chgCData(oldp+45,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__dout_b_1),8);
        bufp->chgCData(oldp+46,(((IData)(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__vga_active)
                                  ? 0xfU : 0U)),4);
        bufp->chgBit(oldp+47,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__vga_en));
        bufp->chgBit(oldp+48,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count));
        bufp->chgSData(oldp+49,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count),10);
        bufp->chgSData(oldp+50,(vlSelf->tb_vga_uart__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count),10);
    }
    bufp->chgBit(oldp+51,(vlSelf->tb_vga_uart__DOT__clk));
    bufp->chgBit(oldp+52,(vlSelf->tb_vga_uart__DOT__rst));
    bufp->chgBit(oldp+53,(vlSelf->tb_vga_uart__DOT__rx));
    bufp->chgCData(oldp+54,(vlSelf->tb_vga_uart__DOT__rx_din),8);
    bufp->chgIData(oldp+55,(vlSelf->tb_vga_uart__DOT__uart_send_byte__Vstatic__i),32);
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
