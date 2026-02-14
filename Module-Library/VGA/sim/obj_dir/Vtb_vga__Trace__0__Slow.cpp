// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_vga__Syms.h"


VL_ATTR_COLD void Vtb_vga___024root__trace_init_sub__TOP__0(Vtb_vga___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_vga", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"PIXEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"H_COUNT_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"V_COUNT_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"H_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"V_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"vga_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,0,"vga_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,0,"vga_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"h_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"v_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"vga_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"vga_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+6,0,"vga_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"PIXEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"H_COUNT_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"V_COUNT_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"H_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"V_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"vga_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,0,"vga_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,0,"vga_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"h_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"v_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"vga_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+6,0,"vga_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+4,0,"vga_active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"CLK_DIV_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"vga_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"clk_div_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+9,0,"h_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+10,0,"v_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_vga___024root__trace_init_top(Vtb_vga___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root__trace_init_top\n"); );
    // Body
    Vtb_vga___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_vga___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_vga___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_vga___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_vga___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_vga___024root__trace_register(Vtb_vga___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_vga___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_vga___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_vga___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_vga___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_vga___024root__trace_const_0_sub_0(Vtb_vga___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_vga___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root__trace_const_0\n"); );
    // Init
    Vtb_vga___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vga___024root*>(voidSelf);
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_vga___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_vga___024root__trace_const_0_sub_0(Vtb_vga___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+13,(4U),32);
    bufp->fullIData(oldp+14,(2U),32);
    bufp->fullIData(oldp+15,(0x320U),32);
    bufp->fullIData(oldp+16,(0x20dU),32);
    bufp->fullIData(oldp+17,(0xaU),32);
    bufp->fullIData(oldp+18,(1U),32);
}

VL_ATTR_COLD void Vtb_vga___024root__trace_full_0_sub_0(Vtb_vga___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_vga___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root__trace_full_0\n"); );
    // Init
    Vtb_vga___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vga___024root*>(voidSelf);
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_vga___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_vga___024root__trace_full_0_sub_0(Vtb_vga___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,((((0x310U > (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)) 
                              & ((0x8fU < (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)) 
                                 & ((0x203U > (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count)) 
                                    & (0x22U < (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count)))))
                              ? 0xfU : 0U)),4);
    bufp->fullBit(oldp+2,((0x60U <= (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count))));
    bufp->fullBit(oldp+3,((2U <= (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count))));
    bufp->fullBit(oldp+4,(((0x310U > (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)) 
                           & ((0x8fU < (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)) 
                              & ((0x203U > (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count)) 
                                 & (0x22U < (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count)))))));
    bufp->fullSData(oldp+5,((((0x310U > (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)) 
                              & ((0x8fU < (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)) 
                                 & ((0x203U > (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count)) 
                                    & (0x22U < (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count)))))
                              ? (0x3ffU & ((IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count) 
                                           - (IData)(0x90U)))
                              : 0U)),10);
    bufp->fullSData(oldp+6,((((0x310U > (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)) 
                              & ((0x8fU < (IData)(vlSelf->tb_vga__DOT__dut__DOT__h_count)) 
                                 & ((0x203U > (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count)) 
                                    & (0x22U < (IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count)))))
                              ? (0x3ffU & ((IData)(vlSelf->tb_vga__DOT__dut__DOT__v_count) 
                                           - (IData)(0x23U)))
                              : 0U)),10);
    bufp->fullBit(oldp+7,(vlSelf->tb_vga__DOT__dut__DOT__vga_en));
    bufp->fullBit(oldp+8,(vlSelf->tb_vga__DOT__dut__DOT__clk_div_count));
    bufp->fullSData(oldp+9,(vlSelf->tb_vga__DOT__dut__DOT__h_count),10);
    bufp->fullSData(oldp+10,(vlSelf->tb_vga__DOT__dut__DOT__v_count),10);
    bufp->fullBit(oldp+11,(vlSelf->tb_vga__DOT__clk));
    bufp->fullBit(oldp+12,(vlSelf->tb_vga__DOT__rst));
}
