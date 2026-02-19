// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_vga_double_buf__Syms.h"


VL_ATTR_COLD void Vtb_vga_double_buf___024root__trace_init_sub__TOP__0(Vtb_vga_double_buf___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_vga_double_buf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"RES_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"RES_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"MEM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"PIXEL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+3,0,"din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+4,0,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"swap_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"vga_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"vga_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"vga_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+9,0,"h_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"v_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"RES_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"RES_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"RES_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"MEM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"PIXEL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+3,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+4,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"swap_buf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"vga_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"vga_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"vga_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+9,0,"h_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"v_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"H_COUNT_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"V_COUNT_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"H_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"V_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"curr_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"swap_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"mem_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+14,0,"mem_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"vga_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+16,0,"vga_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+17,0,"vga_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"frame_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"we_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"addr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+3,0,"din_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"dout_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"addr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+20,0,"dout_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+30,0,"we_a_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"addr_a_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+32,0,"din_a_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"dout_a_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"addr_b_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+21,0,"dout_b_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+34,0,"we_a_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"addr_a_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+36,0,"din_a_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"dout_a_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"addr_b_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+22,0,"dout_b_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+48,0,"mem_addr_vga",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+49,0,"mem_d_out_vga",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("RAM_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+40,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"we_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"addr_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+32,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"dout_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+50,0,"we_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"addr_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+51,0,"din_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"dout_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("RAM_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+40,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"we_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"addr_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+36,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"dout_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+52,0,"we_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"addr_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+53,0,"din_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"dout_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("VGA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+41,0,"PIXEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"H_COUNT_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"V_COUNT_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"H_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"V_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"vga_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"vga_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"vga_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+9,0,"h_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"v_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"vga_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+16,0,"vga_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+17,0,"vga_active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"frame_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"CLK_DIV_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"vga_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"clk_div_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+26,0,"h_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+27,0,"v_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_vga_double_buf___024root__trace_init_top(Vtb_vga_double_buf___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root__trace_init_top\n"); );
    // Body
    Vtb_vga_double_buf___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_vga_double_buf___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_vga_double_buf___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_vga_double_buf___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_vga_double_buf___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_vga_double_buf___024root__trace_register(Vtb_vga_double_buf___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_vga_double_buf___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_vga_double_buf___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_vga_double_buf___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_vga_double_buf___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_vga_double_buf___024root__trace_const_0_sub_0(Vtb_vga_double_buf___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_vga_double_buf___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root__trace_const_0\n"); );
    // Init
    Vtb_vga_double_buf___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vga_double_buf___024root*>(voidSelf);
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_vga_double_buf___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_vga_double_buf___024root__trace_const_0_sub_0(Vtb_vga_double_buf___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+38,(0x140U),32);
    bufp->fullIData(oldp+39,(0xf0U),32);
    bufp->fullIData(oldp+40,(8U),32);
    bufp->fullIData(oldp+41,(4U),32);
    bufp->fullIData(oldp+42,(0x11U),32);
    bufp->fullIData(oldp+43,(2U),32);
    bufp->fullIData(oldp+44,(0x12c00U),32);
    bufp->fullIData(oldp+45,(0x320U),32);
    bufp->fullIData(oldp+46,(0x20dU),32);
    bufp->fullIData(oldp+47,(0xaU),32);
    bufp->fullIData(oldp+48,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__mem_addr_vga),17);
    bufp->fullCData(oldp+49,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__mem_d_out_vga),8);
    bufp->fullBit(oldp+50,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__we_b));
    bufp->fullCData(oldp+51,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__din_b),8);
    bufp->fullBit(oldp+52,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__we_b));
    bufp->fullCData(oldp+53,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__din_b),8);
    bufp->fullIData(oldp+54,(1U),32);
}

VL_ATTR_COLD void Vtb_vga_double_buf___024root__trace_full_0_sub_0(Vtb_vga_double_buf___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_vga_double_buf___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root__trace_full_0\n"); );
    // Init
    Vtb_vga_double_buf___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vga_double_buf___024root*>(voidSelf);
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_vga_double_buf___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_vga_double_buf___024root__trace_full_0_sub_0(Vtb_vga_double_buf___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vga_double_buf__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vga_double_buf___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_vga_double_buf__DOT__rst));
    bufp->fullIData(oldp+2,(vlSelf->tb_vga_double_buf__DOT__mem_addr),17);
    bufp->fullCData(oldp+3,(vlSelf->tb_vga_double_buf__DOT__din),8);
    bufp->fullBit(oldp+4,(vlSelf->tb_vga_double_buf__DOT__wen));
    bufp->fullBit(oldp+5,(vlSelf->tb_vga_double_buf__DOT__swap_buf));
    bufp->fullCData(oldp+6,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                              ? (0xcU & (((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)
                                           ? ((0x12bffU 
                                               >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                               ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem
                                              [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                               : 0U)
                                           : ((0x12bffU 
                                               >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                               ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem
                                              [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                               : 0U)) 
                                         >> 2U)) : 0U)),4);
    bufp->fullCData(oldp+7,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                              ? (0xcU & ((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)
                                          ? ((0x12bffU 
                                              >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                              ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem
                                             [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                              : 0U)
                                          : ((0x12bffU 
                                              >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                              ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem
                                             [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                              : 0U)))
                              : 0U)),4);
    bufp->fullCData(oldp+8,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                              ? (0xcU & (((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)
                                           ? ((0x12bffU 
                                               >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                               ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem
                                              [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                               : 0U)
                                           : ((0x12bffU 
                                               >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                               ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem
                                              [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                               : 0U)) 
                                         << 2U)) : 0U)),4);
    bufp->fullBit(oldp+9,((0x60U <= (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count))));
    bufp->fullBit(oldp+10,((2U <= (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count))));
    bufp->fullBit(oldp+11,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer));
    bufp->fullBit(oldp+12,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__swap_latch));
    bufp->fullSData(oldp+13,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                               ? (0x1ffU & (((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count) 
                                             - (IData)(0x90U)) 
                                            >> 1U))
                               : 0U)),9);
    bufp->fullCData(oldp+14,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                               ? (0xffU & (((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count) 
                                            - (IData)(0x23U)) 
                                           >> 1U)) : 0U)),8);
    bufp->fullSData(oldp+15,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                               ? (0x3ffU & ((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count) 
                                            - (IData)(0x90U)))
                               : 0U)),10);
    bufp->fullSData(oldp+16,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                               ? (0x3ffU & ((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count) 
                                            - (IData)(0x23U)))
                               : 0U)),10);
    bufp->fullBit(oldp+17,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active));
    bufp->fullBit(oldp+18,(((0U == (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count)) 
                            & (0U == (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count)))));
    bufp->fullIData(oldp+19,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b),17);
    bufp->fullCData(oldp+20,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)
                               ? ((0x12bffU >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                   ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem
                                  [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                   : 0U) : ((0x12bffU 
                                             >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                                             ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem
                                            [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                                             : 0U))),8);
    bufp->fullCData(oldp+21,(((0x12bffU >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                               ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem
                              [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                               : 0U)),8);
    bufp->fullCData(oldp+22,(((0x12bffU >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b)
                               ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem
                              [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_b]
                               : 0U)),8);
    bufp->fullCData(oldp+23,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__vga_active)
                               ? 0xfU : 0U)),4);
    bufp->fullBit(oldp+24,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__vga_en));
    bufp->fullBit(oldp+25,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__clk_div_count));
    bufp->fullSData(oldp+26,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__h_count),10);
    bufp->fullSData(oldp+27,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__VGA__DOT__v_count),10);
    bufp->fullBit(oldp+28,(vlSelf->tb_vga_double_buf__DOT__clk));
    bufp->fullCData(oldp+29,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)
                               ? ((0x12bffU >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_1)
                                   ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem
                                  [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_1]
                                   : 0U) : ((0x12bffU 
                                             >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_0)
                                             ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem
                                            [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_0]
                                             : 0U))),8);
    bufp->fullBit(oldp+30,(((~ (IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)) 
                            & (IData)(vlSelf->tb_vga_double_buf__DOT__wen))));
    bufp->fullIData(oldp+31,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_0),17);
    bufp->fullCData(oldp+32,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)
                               ? 0U : (IData)(vlSelf->tb_vga_double_buf__DOT__din))),8);
    bufp->fullCData(oldp+33,(((0x12bffU >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_0)
                               ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_0__DOT__mem
                              [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_0]
                               : 0U)),8);
    bufp->fullBit(oldp+34,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer) 
                            & (IData)(vlSelf->tb_vga_double_buf__DOT__wen))));
    bufp->fullIData(oldp+35,(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_1),17);
    bufp->fullCData(oldp+36,(((IData)(vlSelf->tb_vga_double_buf__DOT__DUT__DOT__curr_buffer)
                               ? (IData)(vlSelf->tb_vga_double_buf__DOT__din)
                               : 0U)),8);
    bufp->fullCData(oldp+37,(((0x12bffU >= vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_1)
                               ? vlSelf->tb_vga_double_buf__DOT__DUT__DOT__RAM_1__DOT__mem
                              [vlSelf->tb_vga_double_buf__DOT__DUT__DOT__addr_a_1]
                               : 0U)),8);
}
