// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_vga_mem__Syms.h"


void Vtb_vga_mem___024root__trace_chg_0_sub_0(Vtb_vga_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_vga_mem___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_mem___024root__trace_chg_0\n"); );
    // Init
    Vtb_vga_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vga_mem___024root*>(voidSelf);
    Vtb_vga_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_vga_mem___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_vga_mem___024root__trace_chg_0_sub_0(Vtb_vga_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_mem___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(((IData)(vlSelf->tb_vga_mem__DOT__dut__DOT__vga_active)
                                 ? (0xcU & (((0x12bffU 
                                              >= vlSelf->tb_vga_mem__DOT__dut__DOT__addr_b)
                                              ? vlSelf->tb_vga_mem__DOT__dut__DOT__RAM__DOT__mem
                                             [vlSelf->tb_vga_mem__DOT__dut__DOT__addr_b]
                                              : 0U) 
                                            >> 2U))
                                 : 0U)),4);
        bufp->chgCData(oldp+1,(((IData)(vlSelf->tb_vga_mem__DOT__dut__DOT__vga_active)
                                 ? ((0x12bffU >= vlSelf->tb_vga_mem__DOT__dut__DOT__addr_b)
                                     ? (0xcU & vlSelf->tb_vga_mem__DOT__dut__DOT__RAM__DOT__mem
                                        [vlSelf->tb_vga_mem__DOT__dut__DOT__addr_b])
                                     : 0U) : 0U)),4);
        bufp->chgCData(oldp+2,(((IData)(vlSelf->tb_vga_mem__DOT__dut__DOT__vga_active)
                                 ? (((0x12bffU >= vlSelf->tb_vga_mem__DOT__dut__DOT__addr_b)
                                      ? (3U & vlSelf->tb_vga_mem__DOT__dut__DOT__RAM__DOT__mem
                                         [vlSelf->tb_vga_mem__DOT__dut__DOT__addr_b])
                                      : 0U) << 2U) : 0U)),4);
        bufp->chgBit(oldp+3,((0x60U <= (IData)(vlSelf->tb_vga_mem__DOT__dut__DOT__VGA__DOT__h_count))));
        bufp->chgBit(oldp+4,((2U <= (IData)(vlSelf->tb_vga_mem__DOT__dut__DOT__VGA__DOT__v_count))));
        bufp->chgSData(oldp+5,(((IData)(vlSelf->tb_vga_mem__DOT__dut__DOT__vga_active)
                                 ? (0x1ffU & (((IData)(vlSelf->tb_vga_mem__DOT__dut__DOT__VGA__DOT__h_count) 
                                               - (IData)(0x90U)) 
                                              >> 1U))
                                 : 0U)),9);
        bufp->chgCData(oldp+6,(((IData)(vlSelf->tb_vga_mem__DOT__dut__DOT__vga_active)
                                 ? (0xffU & (((IData)(vlSelf->tb_vga_mem__DOT__dut__DOT__VGA__DOT__v_count) 
                                              - (IData)(0x23U)) 
                                             >> 1U))
                                 : 0U)),8);
        bufp->chgSData(oldp+7,(((IData)(vlSelf->tb_vga_mem__DOT__dut__DOT__vga_active)
                                 ? (0x3ffU & ((IData)(vlSelf->tb_vga_mem__DOT__dut__DOT__VGA__DOT__h_count) 
                                              - (IData)(0x90U)))
                                 : 0U)),10);
        bufp->chgSData(oldp+8,(((IData)(vlSelf->tb_vga_mem__DOT__dut__DOT__vga_active)
                                 ? (0x3ffU & ((IData)(vlSelf->tb_vga_mem__DOT__dut__DOT__VGA__DOT__v_count) 
                                              - (IData)(0x23U)))
                                 : 0U)),10);
        bufp->chgBit(oldp+9,(vlSelf->tb_vga_mem__DOT__dut__DOT__vga_active));
        bufp->chgIData(oldp+10,(vlSelf->tb_vga_mem__DOT__dut__DOT__addr_b),17);
        bufp->chgCData(oldp+11,(((0x12bffU >= vlSelf->tb_vga_mem__DOT__dut__DOT__addr_b)
                                  ? vlSelf->tb_vga_mem__DOT__dut__DOT__RAM__DOT__mem
                                 [vlSelf->tb_vga_mem__DOT__dut__DOT__addr_b]
                                  : 0U)),8);
        bufp->chgCData(oldp+12,(((IData)(vlSelf->tb_vga_mem__DOT__dut__DOT__vga_active)
                                  ? 0xfU : 0U)),4);
        bufp->chgBit(oldp+13,(vlSelf->tb_vga_mem__DOT__dut__DOT__VGA__DOT__vga_en));
        bufp->chgBit(oldp+14,(vlSelf->tb_vga_mem__DOT__dut__DOT__VGA__DOT__clk_div_count));
        bufp->chgSData(oldp+15,(vlSelf->tb_vga_mem__DOT__dut__DOT__VGA__DOT__h_count),10);
        bufp->chgSData(oldp+16,(vlSelf->tb_vga_mem__DOT__dut__DOT__VGA__DOT__v_count),10);
    }
    bufp->chgBit(oldp+17,(vlSelf->tb_vga_mem__DOT__clk));
    bufp->chgBit(oldp+18,(vlSelf->tb_vga_mem__DOT__rst));
    bufp->chgIData(oldp+19,(vlSelf->tb_vga_mem__DOT__mem_addr),17);
    bufp->chgCData(oldp+20,(vlSelf->tb_vga_mem__DOT__din),8);
    bufp->chgBit(oldp+21,(vlSelf->tb_vga_mem__DOT__wen));
    bufp->chgCData(oldp+22,(((0x12bffU >= vlSelf->tb_vga_mem__DOT__mem_addr)
                              ? vlSelf->tb_vga_mem__DOT__dut__DOT__RAM__DOT__mem
                             [vlSelf->tb_vga_mem__DOT__mem_addr]
                              : 0U)),8);
}

void Vtb_vga_mem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_mem___024root__trace_cleanup\n"); );
    // Init
    Vtb_vga_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vga_mem___024root*>(voidSelf);
    Vtb_vga_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
