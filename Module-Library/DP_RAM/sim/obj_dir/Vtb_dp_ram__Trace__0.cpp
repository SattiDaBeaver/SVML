// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_dp_ram__Syms.h"


void Vtb_dp_ram___024root__trace_chg_0_sub_0(Vtb_dp_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_dp_ram___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root__trace_chg_0\n"); );
    // Init
    Vtb_dp_ram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dp_ram___024root*>(voidSelf);
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_dp_ram___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_dp_ram___024root__trace_chg_0_sub_0(Vtb_dp_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_dp_ram__DOT__we_a));
        bufp->chgSData(oldp+1,(vlSelf->tb_dp_ram__DOT__addr_a),10);
        bufp->chgCData(oldp+2,(vlSelf->tb_dp_ram__DOT__din_a),8);
        bufp->chgBit(oldp+3,(vlSelf->tb_dp_ram__DOT__we_b));
        bufp->chgSData(oldp+4,(vlSelf->tb_dp_ram__DOT__addr_b),10);
        bufp->chgCData(oldp+5,(vlSelf->tb_dp_ram__DOT__din_b),8);
    }
    bufp->chgBit(oldp+6,(vlSelf->tb_dp_ram__DOT__clk));
    bufp->chgCData(oldp+7,(((0x3e7U >= (IData)(vlSelf->tb_dp_ram__DOT__addr_a))
                             ? vlSelf->tb_dp_ram__DOT__dut__DOT__mem
                            [vlSelf->tb_dp_ram__DOT__addr_a]
                             : 0U)),8);
    bufp->chgCData(oldp+8,(((0x3e7U >= (IData)(vlSelf->tb_dp_ram__DOT__addr_b))
                             ? vlSelf->tb_dp_ram__DOT__dut__DOT__mem
                            [vlSelf->tb_dp_ram__DOT__addr_b]
                             : 0U)),8);
}

void Vtb_dp_ram___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dp_ram___024root__trace_cleanup\n"); );
    // Init
    Vtb_dp_ram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dp_ram___024root*>(voidSelf);
    Vtb_dp_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
