// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_vga_double_buf__Syms.h"


void Vtb_vga_double_buf___024root__trace_chg_0_sub_0(Vtb_vga_double_buf___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_vga_double_buf___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root__trace_chg_0\n"); );
    // Init
    Vtb_vga_double_buf___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vga_double_buf___024root*>(voidSelf);
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_vga_double_buf___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_vga_double_buf___024root__trace_chg_0_sub_0(Vtb_vga_double_buf___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_vga_double_buf__DOT__rst));
        bufp->chgIData(oldp+1,(vlSelf->tb_vga_double_buf__DOT__mem_addr),17);
        bufp->chgCData(oldp+2,(vlSelf->tb_vga_double_buf__DOT__din),8);
        bufp->chgBit(oldp+3,(vlSelf->tb_vga_double_buf__DOT__wen));
        bufp->chgBit(oldp+4,(vlSelf->tb_vga_double_buf__DOT__swap_buf));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+5,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                                 ? (0xcU & (((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)
                                              ? ((0x12bffU 
                                                  >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                                  ? 
                                                 vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem
                                                 [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                                  : 0U)
                                              : ((0x12bffU 
                                                  >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                                  ? 
                                                 vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem
                                                 [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                                  : 0U)) 
                                            >> 2U))
                                 : 0U)),4);
        bufp->chgCData(oldp+6,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                                 ? (0xcU & ((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)
                                             ? ((0x12bffU 
                                                 >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                                 ? 
                                                vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem
                                                [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                                 : 0U)
                                             : ((0x12bffU 
                                                 >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                                 ? 
                                                vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem
                                                [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                                 : 0U)))
                                 : 0U)),4);
        bufp->chgCData(oldp+7,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                                 ? (0xcU & (((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)
                                              ? ((0x12bffU 
                                                  >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                                  ? 
                                                 vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem
                                                 [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                                  : 0U)
                                              : ((0x12bffU 
                                                  >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                                  ? 
                                                 vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem
                                                 [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                                  : 0U)) 
                                            << 2U))
                                 : 0U)),4);
        bufp->chgBit(oldp+8,((0x60U <= (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count))));
        bufp->chgBit(oldp+9,((2U <= (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count))));
        bufp->chgBit(oldp+10,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer));
        bufp->chgBit(oldp+11,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__swap_latch));
        bufp->chgSData(oldp+12,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                                  ? (0x1ffU & (((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count) 
                                                - (IData)(0x90U)) 
                                               >> 1U))
                                  : 0U)),9);
        bufp->chgCData(oldp+13,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                                  ? (0xffU & (((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count) 
                                               - (IData)(0x23U)) 
                                              >> 1U))
                                  : 0U)),8);
        bufp->chgSData(oldp+14,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                                  ? (0x3ffU & ((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count) 
                                               - (IData)(0x90U)))
                                  : 0U)),10);
        bufp->chgSData(oldp+15,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                                  ? (0x3ffU & ((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count) 
                                               - (IData)(0x23U)))
                                  : 0U)),10);
        bufp->chgBit(oldp+16,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active));
        bufp->chgBit(oldp+17,(((0U == (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count)) 
                               & (0U == (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count)))));
        bufp->chgIData(oldp+18,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b),17);
        bufp->chgCData(oldp+19,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)
                                  ? ((0x12bffU >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                      ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem
                                     [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                      : 0U) : ((0x12bffU 
                                                >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                                ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem
                                               [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                                : 0U))),8);
        bufp->chgCData(oldp+20,(((0x12bffU >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                  ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem
                                 [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                  : 0U)),8);
        bufp->chgCData(oldp+21,(((0x12bffU >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                  ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem
                                 [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                  : 0U)),8);
        bufp->chgCData(oldp+22,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                                  ? 0xfU : 0U)),4);
        bufp->chgBit(oldp+23,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__vga_en));
        bufp->chgBit(oldp+24,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__clk_div_count));
        bufp->chgSData(oldp+25,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count),10);
        bufp->chgSData(oldp+26,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count),10);
    }
    bufp->chgBit(oldp+27,(vlSelf->tb_vga_double_buf__DOT__clk));
    bufp->chgCData(oldp+28,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)
                              ? ((0x12bffU >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_1)
                                  ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem
                                 [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_1]
                                  : 0U) : ((0x12bffU 
                                            >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_0)
                                            ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem
                                           [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_0]
                                            : 0U))),8);
    bufp->chgBit(oldp+29,(((~ (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)) 
                           & (IData)(vlSelf->tb_vga_double_buf__DOT__wen))));
    bufp->chgIData(oldp+30,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_0),17);
    bufp->chgCData(oldp+31,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)
                              ? 0U : (IData)(vlSelf->tb_vga_double_buf__DOT__din))),8);
    bufp->chgCData(oldp+32,(((0x12bffU >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_0)
                              ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem
                             [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_0]
                              : 0U)),8);
    bufp->chgBit(oldp+33,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer) 
                           & (IData)(vlSelf->tb_vga_double_buf__DOT__wen))));
    bufp->chgIData(oldp+34,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_1),17);
    bufp->chgCData(oldp+35,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)
                              ? (IData)(vlSelf->tb_vga_double_buf__DOT__din)
                              : 0U)),8);
    bufp->chgCData(oldp+36,(((0x12bffU >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_1)
                              ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem
                             [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_1]
                              : 0U)),8);
}

void Vtb_vga_double_buf___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root__trace_cleanup\n"); );
    // Init
    Vtb_vga_double_buf___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vga_double_buf___024root*>(voidSelf);
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
