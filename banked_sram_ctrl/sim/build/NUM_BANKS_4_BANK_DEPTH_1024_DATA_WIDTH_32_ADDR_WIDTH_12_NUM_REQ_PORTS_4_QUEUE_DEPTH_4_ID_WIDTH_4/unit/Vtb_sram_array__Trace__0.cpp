// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_sram_array__Syms.h"


void Vtb_sram_array___024root__trace_chg_0_sub_0(Vtb_sram_array___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_sram_array___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root__trace_chg_0\n"); );
    // Body
    Vtb_sram_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_sram_array___024root*>(voidSelf);
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_sram_array___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_sram_array___024root__trace_chg_0_sub_0(Vtb_sram_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root__trace_chg_0_sub_0\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_sram_array__DOT__we));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_sram_array__DOT__addr),8);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_sram_array__DOT__wdata),32);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_sram_array__DOT__bwe),4);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_sram_array__DOT__old_rdata),32);
    }
    bufp->chgBit(oldp+5,(vlSelfRef.tb_sram_array__DOT__clk));
    bufp->chgIData(oldp+6,(vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                           [vlSelfRef.tb_sram_array__DOT__addr]),32);
    bufp->chgIData(oldp+7,(vlSelfRef.tb_sram_array__DOT__error_count),32);
    bufp->chgIData(oldp+8,(vlSelfRef.tb_sram_array__DOT__test_id),32);
}

void Vtb_sram_array___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root__trace_cleanup\n"); );
    // Body
    Vtb_sram_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_sram_array___024root*>(voidSelf);
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
