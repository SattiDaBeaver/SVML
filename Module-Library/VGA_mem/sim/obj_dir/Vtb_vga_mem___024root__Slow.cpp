// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_vga_mem.h for the primary calling header

#include "Vtb_vga_mem__pch.h"
#include "Vtb_vga_mem__Syms.h"
#include "Vtb_vga_mem___024root.h"

void Vtb_vga_mem___024root___ctor_var_reset(Vtb_vga_mem___024root* vlSelf);

Vtb_vga_mem___024root::Vtb_vga_mem___024root(Vtb_vga_mem__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_vga_mem___024root___ctor_var_reset(this);
}

void Vtb_vga_mem___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_vga_mem___024root::~Vtb_vga_mem___024root() {
}
