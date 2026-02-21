// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_spi_slave.h for the primary calling header

#ifndef VERILATED_VTB_SPI_SLAVE___024ROOT_H_
#define VERILATED_VTB_SPI_SLAVE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_spi_slave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_spi_slave___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_spi_slave__DOT__rst;
    CData/*0:0*/ tb_spi_slave__DOT__sclk;
    CData/*0:0*/ tb_spi_slave__DOT__cs_n;
    CData/*0:0*/ tb_spi_slave__DOT__mosi;
    CData/*7:0*/ tb_spi_slave__DOT__din;
    CData/*0:0*/ tb_spi_slave__DOT__d_valid;
    CData/*7:0*/ tb_spi_slave__DOT__dout;
    CData/*7:0*/ tb_spi_slave__DOT__dut__DOT__shift_in;
    CData/*7:0*/ tb_spi_slave__DOT__dut__DOT__shift_out;
    CData/*3:0*/ tb_spi_slave__DOT__dut__DOT__count;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_slave__DOT__cs_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_slave__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_slave__DOT__sclk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_spi_slave__DOT__spi_send_byte__Vstatic__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_spi_slave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_spi_slave___024root(Vtb_spi_slave__Syms* symsp, const char* v__name);
    ~Vtb_spi_slave___024root();
    VL_UNCOPYABLE(Vtb_spi_slave___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
