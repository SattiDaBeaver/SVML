// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_vga.h for the primary calling header

#include "Vtb_vga__pch.h"
#include "Vtb_vga__Syms.h"
#include "Vtb_vga___024root.h"

void Vtb_vga___024root___ctor_var_reset(Vtb_vga___024root* vlSelf);

Vtb_vga___024root::Vtb_vga___024root(Vtb_vga__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_vga___024root___ctor_var_reset(this);
}

void Vtb_vga___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_vga___024root::~Vtb_vga___024root() {
}
