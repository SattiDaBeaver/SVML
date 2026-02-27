// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_VGA_SPI__SYMS_H_
#define VERILATED_VTB_VGA_SPI__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_vga_spi.h"

// INCLUDE MODULE CLASSES
#include "Vtb_vga_spi___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_vga_spi__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_vga_spi* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_vga_spi___024root          TOP;

    // CONSTRUCTORS
    Vtb_vga_spi__Syms(VerilatedContext* contextp, const char* namep, Vtb_vga_spi* modelp);
    ~Vtb_vga_spi__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
