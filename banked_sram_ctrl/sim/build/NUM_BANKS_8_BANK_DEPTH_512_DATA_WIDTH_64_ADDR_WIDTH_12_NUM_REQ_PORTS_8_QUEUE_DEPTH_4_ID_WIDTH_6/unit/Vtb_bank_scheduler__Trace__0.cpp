// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_bank_scheduler__Syms.h"


void Vtb_bank_scheduler___024root__trace_chg_0_sub_0(Vtb_bank_scheduler___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_bank_scheduler___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root__trace_chg_0\n"); );
    // Body
    Vtb_bank_scheduler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_bank_scheduler___024root*>(voidSelf);
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_bank_scheduler___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_bank_scheduler___024root__trace_chg_0_sub_0(Vtb_bank_scheduler___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root__trace_chg_0_sub_0\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_bank_scheduler__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_bank_scheduler__DOT__grant_valid));
        bufp->chgSData(oldp+2,(vlSelfRef.tb_bank_scheduler__DOT__grant_addr),12);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_bank_scheduler__DOT__grant_data),32);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_bank_scheduler__DOT__grant_strobe),4);
        bufp->chgBit(oldp+5,(vlSelfRef.tb_bank_scheduler__DOT__grant_we));
        bufp->chgCData(oldp+6,(vlSelfRef.tb_bank_scheduler__DOT__grant_id),6);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_bank_scheduler__DOT__sram_rdata),32);
        bufp->chgBit(oldp+8,(vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+9,((0U != (3U & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__grant_addr) 
                                           >> 0x0000000aU)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+10,(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we));
        bufp->chgCData(oldp+11,(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_addr),8);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_data),32);
        bufp->chgCData(oldp+13,(((0xfffffff8U & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe) 
                                                 & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we) 
                                                    << 3U))) 
                                 | ((0xfffffffcU & 
                                     ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe) 
                                      & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we) 
                                         << 2U))) | 
                                    (3U & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe) 
                                           & (- (IData)((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we)))))))),4);
        bufp->chgBit(oldp+14,(vlSelfRef.tb_bank_scheduler__DOT__pp1_valid));
        bufp->chgIData(oldp+15,(vlSelfRef.tb_bank_scheduler__DOT__pp1_rdata),32);
        bufp->chgCData(oldp+16,(vlSelfRef.tb_bank_scheduler__DOT__pp1_id),6);
        bufp->chgBit(oldp+17,(vlSelfRef.tb_bank_scheduler__DOT__pp1_we));
        bufp->chgBit(oldp+18,(vlSelfRef.tb_bank_scheduler__DOT__pp1_err));
        bufp->chgBit(oldp+19,(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid));
        bufp->chgCData(oldp+20,(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+21,(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_we));
        bufp->chgCData(oldp+22,(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_id),6);
        bufp->chgBit(oldp+23,(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_err));
    }
    bufp->chgBit(oldp+24,(vlSelfRef.tb_bank_scheduler__DOT__clk));
    bufp->chgBit(oldp+25,(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__grant_ready));
    bufp->chgIData(oldp+26,(vlSelfRef.tb_bank_scheduler__DOT__error_count),32);
    bufp->chgIData(oldp+27,(vlSelfRef.tb_bank_scheduler__DOT__test_id),32);
    bufp->chgBit(oldp+28,(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp1_ready));
}

void Vtb_bank_scheduler___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root__trace_cleanup\n"); );
    // Body
    Vtb_bank_scheduler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_bank_scheduler___024root*>(voidSelf);
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
