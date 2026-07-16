// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_req_fifo__Syms.h"


void Vtb_req_fifo___024root__trace_chg_0_sub_0(Vtb_req_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_req_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root__trace_chg_0\n"); );
    // Body
    Vtb_req_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_req_fifo___024root*>(voidSelf);
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_req_fifo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_req_fifo___024root__trace_chg_dtype____0(Vtb_req_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*63:0*/, 4>& __VdtypeVar);

void Vtb_req_fifo___024root__trace_chg_0_sub_0(Vtb_req_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root__trace_chg_0_sub_0\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgQData(oldp+0,(vlSelfRef.tb_req_fifo__DOT__A),64);
        bufp->chgQData(oldp+2,(vlSelfRef.tb_req_fifo__DOT__B),64);
        bufp->chgQData(oldp+4,(vlSelfRef.tb_req_fifo__DOT__D0),64);
        bufp->chgQData(oldp+6,(vlSelfRef.tb_req_fifo__DOT__D1),64);
        bufp->chgQData(oldp+8,(vlSelfRef.tb_req_fifo__DOT__D2),64);
        bufp->chgQData(oldp+10,(vlSelfRef.tb_req_fifo__DOT__D3),64);
        bufp->chgQData(oldp+12,(vlSelfRef.tb_req_fifo__DOT__D4),64);
        bufp->chgQData(oldp+14,(vlSelfRef.tb_req_fifo__DOT__D5),64);
        bufp->chgQData(oldp+16,(vlSelfRef.tb_req_fifo__DOT__D6),64);
        bufp->chgQData(oldp+18,(vlSelfRef.tb_req_fifo__DOT__D7),64);
        bufp->chgQData(oldp+20,(vlSelfRef.tb_req_fifo__DOT__old_head),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+22,(vlSelfRef.tb_req_fifo__DOT__push_ready));
        bufp->chgBit(oldp+23,((0U != (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy))));
        bufp->chgQData(oldp+24,(vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                                [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]),64);
        bufp->chgBit(oldp+26,((4U == (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy))));
        bufp->chgBit(oldp+27,((0U == (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy))));
        Vtb_req_fifo___024root__trace_chg_dtype____0(vlSelf, bufp, 28, vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem);
        bufp->chgCData(oldp+36,(vlSelfRef.tb_req_fifo__DOT__dut__DOT__wr_ptr),2);
        bufp->chgCData(oldp+37,(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr),2);
        bufp->chgCData(oldp+38,(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy),3);
    }
    bufp->chgBit(oldp+39,(vlSelfRef.tb_req_fifo__DOT__clk));
    bufp->chgBit(oldp+40,(vlSelfRef.tb_req_fifo__DOT__rst_n));
    bufp->chgBit(oldp+41,(vlSelfRef.tb_req_fifo__DOT__push_valid));
    bufp->chgQData(oldp+42,(vlSelfRef.tb_req_fifo__DOT__push_data),64);
    bufp->chgBit(oldp+44,(vlSelfRef.tb_req_fifo__DOT__pop));
    bufp->chgIData(oldp+45,(vlSelfRef.tb_req_fifo__DOT__error_count),32);
    bufp->chgIData(oldp+46,(vlSelfRef.tb_req_fifo__DOT__test_id),32);
    bufp->chgCData(oldp+47,(vlSelfRef.tb_req_fifo__DOT__dut__DOT__nxt_occupancy),3);
}

void Vtb_req_fifo___024root__trace_chg_dtype____0(Vtb_req_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*63:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root__trace_chg_dtype____0\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[0]),64);
    bufp->chgQData(oldp+2,(__VdtypeVar[1]),64);
    bufp->chgQData(oldp+4,(__VdtypeVar[2]),64);
    bufp->chgQData(oldp+6,(__VdtypeVar[3]),64);
}

void Vtb_req_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root__trace_cleanup\n"); );
    // Body
    Vtb_req_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_req_fifo___024root*>(voidSelf);
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
