// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_vga__Syms.h"


void Vtb_vga___024root__trace_chg_0_sub_0(Vtb_vga___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_vga___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root__trace_chg_0\n"); );
    // Init
    Vtb_vga___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vga___024root*>(voidSelf);
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_vga___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_vga___024root__trace_chg_0_sub_0(Vtb_vga___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,((((0x310U > (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)) 
                                 & ((0x8fU < (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)) 
                                    & ((0x203U > (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count)) 
                                       & (0x22U < (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count)))))
                                 ? 0xfU : 0U)),4);
        bufp->chgBit(oldp+1,((0x60U <= (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count))));
        bufp->chgBit(oldp+2,((2U <= (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count))));
        bufp->chgBit(oldp+3,(((0x310U > (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)) 
                              & ((0x8fU < (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)) 
                                 & ((0x203U > (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count)) 
                                    & (0x22U < (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count)))))));
        bufp->chgSData(oldp+4,((((0x310U > (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)) 
                                 & ((0x8fU < (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)) 
                                    & ((0x203U > (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count)) 
                                       & (0x22U < (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count)))))
                                 ? (0x3ffU & ((IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count) 
                                              - (IData)(0x90U)))
                                 : 0U)),10);
        bufp->chgSData(oldp+5,((((0x310U > (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)) 
                                 & ((0x8fU < (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)) 
                                    & ((0x203U > (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count)) 
                                       & (0x22U < (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count)))))
                                 ? (0x3ffU & ((IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count) 
                                              - (IData)(0x23U)))
                                 : 0U)),10);
        bufp->chgBit(oldp+6,(vlSelf->tb_vga__DOT__dut__DOT__vga_en));
        bufp->chgBit(oldp+7,(vlSelf->tb_vga__DOT__dut__DOT__clk_div_count));
        bufp->chgSData(oldp+8,(vlSelf->tb_vga__DOT__dut__DOT__h_count),10);
        bufp->chgSData(oldp+9,(vlSelf->tb_vga__DOT__dut__DOT__v_count),10);
    }
    bufp->chgBit(oldp+10,(vlSelf->tb_vga__DOT__clk));
    bufp->chgBit(oldp+11,(vlSelf->tb_vga__DOT__rst));
}

void Vtb_vga___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root__trace_cleanup\n"); );
    // Init
    Vtb_vga___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vga___024root*>(voidSelf);
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
