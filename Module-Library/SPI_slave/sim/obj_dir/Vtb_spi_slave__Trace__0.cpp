// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_spi_slave__Syms.h"


void Vtb_spi_slave___024root__trace_chg_0_sub_0(Vtb_spi_slave___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_spi_slave___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_slave___024root__trace_chg_0\n"); );
    // Init
    Vtb_spi_slave___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_spi_slave___024root*>(voidSelf);
    Vtb_spi_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_spi_slave___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_spi_slave___024root__trace_chg_0_sub_0(Vtb_spi_slave___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spi_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_slave___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_spi_slave__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelf->tb_spi_slave__DOT__sclk));
        bufp->chgBit(oldp+2,(vlSelf->tb_spi_slave__DOT__cs_n));
        bufp->chgBit(oldp+3,(vlSelf->tb_spi_slave__DOT__mosi));
        bufp->chgCData(oldp+4,(vlSelf->tb_spi_slave__DOT__din),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+5,(vlSelf->tb_spi_slave__DOT__d_valid));
        bufp->chgCData(oldp+6,(vlSelf->tb_spi_slave__DOT__dout),8);
        bufp->chgBit(oldp+7,(vlSelf->tb_spi_slave__DOT__dut__DOT__sync1));
        bufp->chgBit(oldp+8,(vlSelf->tb_spi_slave__DOT__dut__DOT__sync2));
        bufp->chgBit(oldp+9,(vlSelf->tb_spi_slave__DOT__dut__DOT__sync3));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+10,(vlSelf->tb_spi_slave__DOT__dut__DOT__shift_in),8);
        bufp->chgCData(oldp+11,(vlSelf->tb_spi_slave__DOT__dut__DOT__count),4);
        bufp->chgCData(oldp+12,(vlSelf->tb_spi_slave__DOT__dut__DOT__captured),8);
        bufp->chgBit(oldp+13,(vlSelf->tb_spi_slave__DOT__dut__DOT__toggle));
    }
    bufp->chgBit(oldp+14,(vlSelf->tb_spi_slave__DOT__clk));
    bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->tb_spi_slave__DOT__dut__DOT__shift_out) 
                                 >> 7U))));
    bufp->chgCData(oldp+16,(vlSelf->tb_spi_slave__DOT__dut__DOT__shift_out),8);
}

void Vtb_spi_slave___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_slave___024root__trace_cleanup\n"); );
    // Init
    Vtb_spi_slave___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_spi_slave___024root*>(voidSelf);
    Vtb_spi_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
