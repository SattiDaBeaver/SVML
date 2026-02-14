// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_slave.h for the primary calling header

#include "Vtb_spi_slave__pch.h"
#include "Vtb_spi_slave__Syms.h"
#include "Vtb_spi_slave___024root.h"

void Vtb_spi_slave___024root___ctor_var_reset(Vtb_spi_slave___024root* vlSelf);

Vtb_spi_slave___024root::Vtb_spi_slave___024root(Vtb_spi_slave__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_spi_slave___024root___ctor_var_reset(this);
}

void Vtb_spi_slave___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_spi_slave___024root::~Vtb_spi_slave___024root() {
}
