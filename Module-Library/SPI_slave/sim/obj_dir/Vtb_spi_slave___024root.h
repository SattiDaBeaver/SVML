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
    CData/*0:0*/ tb_spi_slave__DOT__clk;
    CData/*0:0*/ tb_spi_slave__DOT__rst;
    CData/*0:0*/ tb_spi_slave__DOT__sclk;
    CData/*0:0*/ tb_spi_slave__DOT__cs_n;
    CData/*0:0*/ tb_spi_slave__DOT__mosi;
    CData/*7:0*/ tb_spi_slave__DOT__din;
    CData/*0:0*/ tb_spi_slave__DOT__d_valid;
    CData/*7:0*/ tb_spi_slave__DOT__dout;
    CData/*7:0*/ tb_spi_slave__DOT__dut__DOT__shift_in;
    CData/*3:0*/ tb_spi_slave__DOT__dut__DOT__bit_count;
    CData/*7:0*/ tb_spi_slave__DOT__dut__DOT__captured_data;
    CData/*0:0*/ tb_spi_slave__DOT__dut__DOT__data_ready_toggle;
    CData/*7:0*/ tb_spi_slave__DOT__dut__DOT__shift_out;
    CData/*0:0*/ tb_spi_slave__DOT__dut__DOT__cs_n_prev;
    CData/*0:0*/ tb_spi_slave__DOT__dut__DOT__toggle_sync1;
    CData/*0:0*/ tb_spi_slave__DOT__dut__DOT__toggle_sync2;
    CData/*0:0*/ tb_spi_slave__DOT__dut__DOT__toggle_sync3;
    CData/*7:0*/ tb_spi_slave__DOT__dut__DOT__captured_sync1;
    CData/*7:0*/ tb_spi_slave__DOT__dut__DOT__captured_sync2;
    CData/*7:0*/ __Vdly__tb_spi_slave__DOT__dut__DOT__shift_in;
    CData/*3:0*/ __Vdly__tb_spi_slave__DOT__dut__DOT__bit_count;
    CData/*0:0*/ __Vdly__tb_spi_slave__DOT__dut__DOT__data_ready_toggle;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_slave__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_slave__DOT__cs_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_slave__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_slave__DOT__sclk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h473059c7__0;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

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
