// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_rsp_fifo__Syms.h"


void Vtb_rsp_fifo___024root__trace_chg_0_sub_0(Vtb_rsp_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_rsp_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root__trace_chg_0\n"); );
    // Body
    Vtb_rsp_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_rsp_fifo___024root*>(voidSelf);
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_rsp_fifo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_rsp_fifo___024root__trace_chg_dtype____0(Vtb_rsp_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*63:0*/, 4>& __VdtypeVar);

void Vtb_rsp_fifo___024root__trace_chg_0_sub_0(Vtb_rsp_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root__trace_chg_0_sub_0\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_rsp_fifo__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_rsp_fifo__DOT__push_valid));
        bufp->chgQData(oldp+2,(vlSelfRef.tb_rsp_fifo__DOT__push_data),64);
        bufp->chgBit(oldp+4,(vlSelfRef.tb_rsp_fifo__DOT__pop_ready));
        bufp->chgQData(oldp+5,(vlSelfRef.tb_rsp_fifo__DOT__A),64);
        bufp->chgQData(oldp+7,(vlSelfRef.tb_rsp_fifo__DOT__B),64);
        bufp->chgQData(oldp+9,(vlSelfRef.tb_rsp_fifo__DOT__D0),64);
        bufp->chgQData(oldp+11,(vlSelfRef.tb_rsp_fifo__DOT__D1),64);
        bufp->chgQData(oldp+13,(vlSelfRef.tb_rsp_fifo__DOT__D2),64);
        bufp->chgQData(oldp+15,(vlSelfRef.tb_rsp_fifo__DOT__D3),64);
        bufp->chgQData(oldp+17,(vlSelfRef.tb_rsp_fifo__DOT__D4),64);
        bufp->chgQData(oldp+19,(vlSelfRef.tb_rsp_fifo__DOT__D5),64);
        bufp->chgQData(oldp+21,(vlSelfRef.tb_rsp_fifo__DOT__D6),64);
        bufp->chgQData(oldp+23,(vlSelfRef.tb_rsp_fifo__DOT__D7),64);
        bufp->chgQData(oldp+25,(vlSelfRef.tb_rsp_fifo__DOT__observed[0]),64);
        bufp->chgQData(oldp+27,(vlSelfRef.tb_rsp_fifo__DOT__observed[1]),64);
        bufp->chgQData(oldp+29,(vlSelfRef.tb_rsp_fifo__DOT__observed[2]),64);
        bufp->chgQData(oldp+31,(vlSelfRef.tb_rsp_fifo__DOT__observed[3]),64);
        bufp->chgQData(oldp+33,(vlSelfRef.tb_rsp_fifo__DOT__observed[4]),64);
        bufp->chgQData(oldp+35,(vlSelfRef.tb_rsp_fifo__DOT__observed[5]),64);
        bufp->chgQData(oldp+37,(vlSelfRef.tb_rsp_fifo__DOT__observed[6]),64);
        bufp->chgQData(oldp+39,(vlSelfRef.tb_rsp_fifo__DOT__observed[7]),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+41,((4U > (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy))));
        bufp->chgBit(oldp+42,((0U != (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy))));
        bufp->chgQData(oldp+43,(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
                                [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr]),64);
        bufp->chgBit(oldp+45,((4U == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy))));
        bufp->chgBit(oldp+46,((0U == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy))));
        Vtb_rsp_fifo___024root__trace_chg_dtype____0(vlSelf, bufp, 47, vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem);
        bufp->chgCData(oldp+55,(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__wr_ptr),2);
        bufp->chgCData(oldp+56,(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr),2);
        bufp->chgCData(oldp+57,(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy),3);
    }
    bufp->chgBit(oldp+58,(vlSelfRef.tb_rsp_fifo__DOT__clk));
    bufp->chgIData(oldp+59,(vlSelfRef.tb_rsp_fifo__DOT__error_count),32);
    bufp->chgIData(oldp+60,(vlSelfRef.tb_rsp_fifo__DOT__test_id),32);
}

void Vtb_rsp_fifo___024root__trace_chg_dtype____0(Vtb_rsp_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*63:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root__trace_chg_dtype____0\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[0]),64);
    bufp->chgQData(oldp+2,(__VdtypeVar[1]),64);
    bufp->chgQData(oldp+4,(__VdtypeVar[2]),64);
    bufp->chgQData(oldp+6,(__VdtypeVar[3]),64);
}

void Vtb_rsp_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root__trace_cleanup\n"); );
    // Body
    Vtb_rsp_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_rsp_fifo___024root*>(voidSelf);
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
