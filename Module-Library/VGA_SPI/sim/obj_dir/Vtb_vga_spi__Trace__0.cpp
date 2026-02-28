// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_vga_spi__Syms.h"


void Vtb_vga_spi___024root__trace_chg_0_sub_0(Vtb_vga_spi___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_vga_spi___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root__trace_chg_0\n"); );
    // Init
    Vtb_vga_spi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vga_spi___024root*>(voidSelf);
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_vga_spi___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_vga_spi___024root__trace_chg_0_sub_0(Vtb_vga_spi___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_vga_spi__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelf->tb_vga_spi__DOT__sclk));
        bufp->chgBit(oldp+2,(vlSelf->tb_vga_spi__DOT__cs_n));
        bufp->chgBit(oldp+3,(vlSelf->tb_vga_spi__DOT__mosi));
        bufp->chgIData(oldp+4,(vlSelf->tb_vga_spi__DOT__spi_send__Vstatic__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+5,(((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__vga_active)
                                 ? (0xcU & (((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__curr_buffer)
                                              ? (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_b_0)
                                              : (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_b_1)) 
                                            >> 2U))
                                 : 0U)),4);
        bufp->chgCData(oldp+6,(((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__vga_active)
                                 ? (0xcU & ((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__curr_buffer)
                                             ? (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_b_0)
                                             : (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_b_1)))
                                 : 0U)),4);
        bufp->chgCData(oldp+7,(((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__vga_active)
                                 ? (0xcU & (((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__curr_buffer)
                                              ? (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_b_0)
                                              : (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_b_1)) 
                                            << 2U))
                                 : 0U)),4);
        bufp->chgBit(oldp+8,((0x60U <= (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count))));
        bufp->chgBit(oldp+9,((2U <= (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count))));
        bufp->chgIData(oldp+10,(vlSelf->tb_vga_spi__DOT__addr_count),17);
        bufp->chgCData(oldp+11,(vlSelf->tb_vga_spi__DOT__DUT__DOT__din),8);
        bufp->chgBit(oldp+12,(vlSelf->tb_vga_spi__DOT__DUT__DOT__wen));
        bufp->chgBit(oldp+13,(vlSelf->tb_vga_spi__DOT__DUT__DOT__swap_buf));
        bufp->chgBit(oldp+14,(vlSelf->tb_vga_spi__DOT__DUT__DOT__swap_done));
        bufp->chgCData(oldp+15,(((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__curr_buffer)
                                  ? (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_a_0)
                                  : (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_a_1))),8);
        bufp->chgBit(oldp+16,(vlSelf->tb_vga_spi__DOT__DUT__DOT__addr_delay));
        bufp->chgBit(oldp+17,(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__curr_buffer));
        bufp->chgBit(oldp+18,(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__swap_latch));
        bufp->chgSData(oldp+19,(((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__vga_active)
                                  ? (0x1ffU & (((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count) 
                                                - (IData)(0x90U)) 
                                               >> 1U))
                                  : 0U)),9);
        bufp->chgCData(oldp+20,(((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__vga_active)
                                  ? (0xffU & (((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count) 
                                               - (IData)(0x23U)) 
                                              >> 1U))
                                  : 0U)),8);
        bufp->chgSData(oldp+21,(((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__vga_active)
                                  ? (0x3ffU & ((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count) 
                                               - (IData)(0x90U)))
                                  : 0U)),10);
        bufp->chgSData(oldp+22,(((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__vga_active)
                                  ? (0x3ffU & ((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count) 
                                               - (IData)(0x23U)))
                                  : 0U)),10);
        bufp->chgBit(oldp+23,(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__vga_active));
        bufp->chgBit(oldp+24,(((0U == (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count)) 
                               & (0U == (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count)))));
        bufp->chgIData(oldp+25,(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__addr_b),17);
        bufp->chgCData(oldp+26,(((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__curr_buffer)
                                  ? (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_b_0)
                                  : (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_b_1))),8);
        bufp->chgBit(oldp+27,(((~ (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__curr_buffer)) 
                               & (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__wen))));
        bufp->chgIData(oldp+28,(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__addr_a_0),17);
        bufp->chgCData(oldp+29,(((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__curr_buffer)
                                  ? 0U : (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__din))),8);
        bufp->chgCData(oldp+30,(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_a_0),8);
        bufp->chgCData(oldp+31,(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_b_0),8);
        bufp->chgBit(oldp+32,(((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__curr_buffer) 
                               & (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__wen))));
        bufp->chgIData(oldp+33,(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__addr_a_1),17);
        bufp->chgCData(oldp+34,(((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__curr_buffer)
                                  ? (IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__din)
                                  : 0U)),8);
        bufp->chgCData(oldp+35,(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_a_1),8);
        bufp->chgCData(oldp+36,(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__dout_b_1),8);
        bufp->chgCData(oldp+37,(((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__vga_active)
                                  ? 0xfU : 0U)),4);
        bufp->chgBit(oldp+38,(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__vga_en));
        bufp->chgBit(oldp+39,(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__clk_div_count));
        bufp->chgSData(oldp+40,(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__h_count),10);
        bufp->chgSData(oldp+41,(vlSelf->tb_vga_spi__DOT__DUT__DOT__VGA__DOT__VGA__DOT__v_count),10);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+42,((1U & ((IData)(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_out) 
                                     >> 7U))));
        bufp->chgCData(oldp+43,(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_out),8);
        bufp->chgBit(oldp+44,(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__cs_n_prev));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+45,(vlSelf->tb_vga_spi__DOT__DUT__DOT__d_valid_spi));
        bufp->chgCData(oldp+46,(vlSelf->tb_vga_spi__DOT__DUT__DOT__dout_spi),8);
        bufp->chgBit(oldp+47,(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync1));
        bufp->chgBit(oldp+48,(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync2));
        bufp->chgBit(oldp+49,(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__toggle_sync3));
        bufp->chgCData(oldp+50,(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_sync1),8);
        bufp->chgCData(oldp+51,(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_sync2),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+52,(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__shift_in),8);
        bufp->chgCData(oldp+53,(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__bit_count),4);
        bufp->chgCData(oldp+54,(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__captured_data),8);
        bufp->chgBit(oldp+55,(vlSelf->tb_vga_spi__DOT__DUT__DOT__SPI__DOT__data_ready_toggle));
    }
    bufp->chgBit(oldp+56,(vlSelf->tb_vga_spi__DOT__clk));
}

void Vtb_vga_spi___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_spi___024root__trace_cleanup\n"); );
    // Init
    Vtb_vga_spi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vga_spi___024root*>(voidSelf);
    Vtb_vga_spi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
