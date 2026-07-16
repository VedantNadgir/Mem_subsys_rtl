// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_rsp_mux__Syms.h"


void Vtb_rsp_mux___024root__trace_chg_0_sub_0(Vtb_rsp_mux___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_rsp_mux___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root__trace_chg_0\n"); );
    // Body
    Vtb_rsp_mux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_rsp_mux___024root*>(voidSelf);
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_rsp_mux___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_rsp_mux___024root__trace_chg_0_sub_0(Vtb_rsp_mux___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root__trace_chg_0_sub_0\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_rsp_mux__DOT__pp1_valid),4);
        bufp->chgWData(oldp+1,(vlSelfRef.tb_rsp_mux__DOT__pp1_rdata),128);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_rsp_mux__DOT__pp1_id),24);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_rsp_mux__DOT__pp1_we),4);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_rsp_mux__DOT__pp1_err),4);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgCData(oldp+9,(vlSelfRef.tb_rsp_mux__DOT__rsp_valid),4);
        bufp->chgWData(oldp+10,(vlSelfRef.tb_rsp_mux__DOT__rsp_data),128);
        bufp->chgSData(oldp+14,(vlSelfRef.tb_rsp_mux__DOT__rsp_id),16);
        bufp->chgCData(oldp+15,(vlSelfRef.tb_rsp_mux__DOT__rsp_err),4);
        bufp->chgCData(oldp+16,(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports),8);
        bufp->chgCData(oldp+17,(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p),2);
        bufp->chgBit(oldp+18,(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found));
        bufp->chgCData(oldp+19,(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted),4);
    }
    bufp->chgCData(oldp+20,(((((2U & (((~ ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
                                           >> 3U)) 
                                       << 1U) | (0x3ffffffeU 
                                                 & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted) 
                                                    >> 2U)))) 
                               | (1U & ((~ ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
                                            >> 2U)) 
                                        | ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted) 
                                           >> 2U)))) 
                              << 2U) | ((2U & (((~ 
                                                 ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
                                                  >> 1U)) 
                                                << 1U) 
                                               | (0xfffffffeU 
                                                  & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted)))) 
                                        | (1U & ((~ (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid)) 
                                                 | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted)))))),4);
    bufp->chgBit(oldp+21,(vlSelfRef.tb_rsp_mux__DOT__clk));
    bufp->chgIData(oldp+22,(vlSelfRef.tb_rsp_mux__DOT__error_count),32);
    bufp->chgIData(oldp+23,(vlSelfRef.tb_rsp_mux__DOT__test_id),32);
}

void Vtb_rsp_mux___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root__trace_cleanup\n"); );
    // Body
    Vtb_rsp_mux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_rsp_mux___024root*>(voidSelf);
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
