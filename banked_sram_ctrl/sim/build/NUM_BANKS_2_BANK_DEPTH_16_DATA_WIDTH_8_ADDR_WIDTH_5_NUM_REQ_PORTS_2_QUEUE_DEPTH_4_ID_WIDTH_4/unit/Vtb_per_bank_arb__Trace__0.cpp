// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_per_bank_arb__Syms.h"


void Vtb_per_bank_arb___024root__trace_chg_0_sub_0(Vtb_per_bank_arb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_per_bank_arb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root__trace_chg_0\n"); );
    // Body
    Vtb_per_bank_arb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_per_bank_arb___024root*>(voidSelf);
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_per_bank_arb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtb_per_bank_arb__ConstPool__TABLE_h8665d168_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0;

void Vtb_per_bank_arb___024root__trace_chg_0_sub_0(Vtb_per_bank_arb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root__trace_chg_0_sub_0\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.tb_per_bank_arb__DOT__clk));
    bufp->chgBit(oldp+1,(vlSelfRef.tb_per_bank_arb__DOT__rst_n));
    bufp->chgCData(oldp+2,(vlSelfRef.tb_per_bank_arb__DOT__req_valid),4);
    bufp->chgBit(oldp+3,(Vtb_per_bank_arb__ConstPool__TABLE_h8665d168_0
                         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]));
    bufp->chgCData(oldp+4,(Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
                           [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]),2);
    bufp->chgBit(oldp+5,(vlSelfRef.tb_per_bank_arb__DOT__grant_ready));
    bufp->chgCData(oldp+6,(((IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid) 
                            & ((~ (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant)) 
                               & (- (IData)((VL_LTS_III(32, 1U, 
                                                        VL_COUNTONES_I((IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid))) 
                                             & Vtb_per_bank_arb__ConstPool__TABLE_h8665d168_0
                                             [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant])))))),4);
    bufp->chgIData(oldp+7,(vlSelfRef.tb_per_bank_arb__DOT__error_count),32);
    bufp->chgIData(oldp+8,(vlSelfRef.tb_per_bank_arb__DOT__test_id),32);
    bufp->chgCData(oldp+9,(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__ptr),2);
    bufp->chgBit(oldp+10,(VL_LTS_III(32, 1U, VL_COUNTONES_I((IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid)))));
    bufp->chgCData(oldp+11,((0x0000000fU & (((0x000000ffU 
                                              & (((IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid))) 
                                             >> (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__ptr)) 
                                            >> 4U))),4);
    bufp->chgCData(oldp+12,((0x0000000fU & ((0x000000ffU 
                                             & (((IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid) 
                                                 << 4U) 
                                                | (IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid))) 
                                            >> (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__ptr)))),4);
    bufp->chgCData(oldp+13,((0x0000000fU & ((~ (((0x000000ffU 
                                                  & (((IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid))) 
                                                 >> (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__ptr)) 
                                                - (IData)(1U))) 
                                            & ((0x000000ffU 
                                                & (((IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid) 
                                                    << 4U) 
                                                   | (IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid))) 
                                               >> (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__ptr))))),4);
    bufp->chgCData(oldp+14,(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant),4);
    bufp->chgCData(oldp+15,((0x0000000fU & (((~ (((0x000000ffU 
                                                   & (((IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid) 
                                                       << 4U) 
                                                      | (IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid))) 
                                                  >> (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x000000ffU 
                                                 & (((IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid))) 
                                                >> (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__ptr))) 
                                            << (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__ptr)))),4);
}

void Vtb_per_bank_arb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtb_per_bank_arb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_per_bank_arb___024root*>(voidSelf);
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
