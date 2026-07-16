// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sys.h for the primary calling header

#ifndef VERILATED_VTB_SYS_BANK_SCHEDULER__PI2_H_
#define VERILATED_VTB_SYS_BANK_SCHEDULER__PI2_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_sys__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sys_bank_scheduler__pi2 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clk;
    CData/*0:0*/ rst_n;
    CData/*0:0*/ grant_valid;
    CData/*0:0*/ grant_we;
    CData/*0:0*/ grant_ready;
    CData/*0:0*/ sram_we;
    CData/*0:0*/ pp1_valid;
    CData/*0:0*/ pp1_we;
    CData/*0:0*/ pp1_err;
    CData/*0:0*/ bank_pp1_ready;
    CData/*0:0*/ __PVT__pp0_valid;
    CData/*0:0*/ __PVT__pp0_we;
    CData/*0:0*/ __PVT__pp0_err;
    SData/*11:0*/ grant_addr;
    SData/*15:0*/ grant_strobe;
    SData/*8:0*/ grant_id;
    SData/*8:0*/ sram_addr;
    SData/*15:0*/ sram_bwe;
    SData/*8:0*/ pp1_id;
    SData/*8:0*/ __PVT__pp0_addr;
    SData/*15:0*/ __PVT__pp0_strobe;
    SData/*8:0*/ __PVT__pp0_id;
    VlWide<4>/*127:0*/ grant_data;
    VlWide<4>/*127:0*/ sram_wdata;
    VlWide<4>/*127:0*/ sram_rdata;
    VlWide<4>/*127:0*/ pp1_rdata;
    VlWide<4>/*127:0*/ __PVT__pp0_data;

    // INTERNAL VARIABLES
    Vtb_sys__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_sys_bank_scheduler__pi2();
    ~Vtb_sys_bank_scheduler__pi2();
    void ctor(Vtb_sys__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_sys_bank_scheduler__pi2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
