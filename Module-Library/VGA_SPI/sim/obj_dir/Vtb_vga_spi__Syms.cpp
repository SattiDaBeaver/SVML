// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_vga_spi__pch.h"
#include "Vtb_vga_spi.h"
#include "Vtb_vga_spi___024root.h"

// FUNCTIONS
Vtb_vga_spi__Syms::~Vtb_vga_spi__Syms()
{
}

Vtb_vga_spi__Syms::Vtb_vga_spi__Syms(VerilatedContext* contextp, const char* namep, Vtb_vga_spi* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
