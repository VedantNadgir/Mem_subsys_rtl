// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_perf_counter__Syms.h"


void Vtb_perf_counter___024root__trace_chg_0_sub_0(Vtb_perf_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_perf_counter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root__trace_chg_0\n"); );
    // Body
    Vtb_perf_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_perf_counter___024root*>(voidSelf);
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_perf_counter___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_perf_counter___024root__trace_chg_0_sub_0(Vtb_perf_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root__trace_chg_0_sub_0\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_perf_counter__DOT__rst_n));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_perf_counter__DOT__req_accept),4);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_perf_counter__DOT__rsp_issue),4);
        bufp->chgSData(oldp+3,(vlSelfRef.tb_perf_counter__DOT__conflict),16);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_perf_counter__DOT__req_queue_full),4);
        bufp->chgCData(oldp+5,(vlSelfRef.tb_perf_counter__DOT__bank_idle),4);
        bufp->chgBit(oldp+6,(vlSelfRef.tb_perf_counter__DOT__csr_req));
        bufp->chgCData(oldp+7,(vlSelfRef.tb_perf_counter__DOT__csr_addr),5);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[3U]) 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgIData(oldp+8,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[0]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[1]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[2]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[3]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[4]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[5]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[6]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[7]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[8]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[9]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[10]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[11]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[12]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[13]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[14]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[15]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[16]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[17]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[18]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[19]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[20]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[21]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[22]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[23]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[24]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[25]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[26]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[27]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[28]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[29]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[30]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+40,(vlSelfRef.tb_perf_counter__DOT__csr_rdata),32);
        bufp->chgBit(oldp+41,(vlSelfRef.tb_perf_counter__DOT__csr_ack));
        bufp->chgIData(oldp+42,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__i),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__b),32);
    }
    bufp->chgBit(oldp+44,(vlSelfRef.tb_perf_counter__DOT__clk));
    bufp->chgIData(oldp+45,(vlSelfRef.tb_perf_counter__DOT__error_count),32);
    bufp->chgIData(oldp+46,(vlSelfRef.tb_perf_counter__DOT__test_id),32);
    bufp->chgIData(oldp+47,(vlSelfRef.tb_perf_counter__DOT__rdata),32);
}

void Vtb_perf_counter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root__trace_cleanup\n"); );
    // Body
    Vtb_perf_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_perf_counter___024root*>(voidSelf);
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
