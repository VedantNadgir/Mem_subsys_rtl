// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_sys__Syms.h"


void Vtb_sys___024root__trace_chg_0_sub_0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_sys___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_0\n"); );
    // Body
    Vtb_sys___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_sys___024root*>(voidSelf);
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_sys___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_sys___024root__trace_chg_dtype____0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*18:0*/, 2>& __VdtypeVar);
void Vtb_sys___024root__trace_chg_dtype____1(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*10:0*/, 2>& __VdtypeVar);
void Vtb_sys___024root__trace_chg_dtype____2(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 12>& __VdtypeVar);

void Vtb_sys___024root__trace_chg_0_sub_0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_0_sub_0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_sys__DOT__rst_n));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid),2);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we),2);
        bufp->chgSData(oldp+3,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr),14);
        bufp->chgSData(oldp+4,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data),16);
        bufp->chgCData(oldp+5,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe),2);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id),4);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready),2);
        bufp->chgIData(oldp+8,(((0x0007f000U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                                                << 0x0000000cU)) 
                                | ((0x00000ff0U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
                                                   << 4U)) 
                                   | ((8U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                             << 3U)) 
                                      | ((6U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                << 1U)) 
                                         | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we))))))),19);
        bufp->chgBit(oldp+9,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid))));
        bufp->chgIData(oldp+10,(((0x0007f000U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                                                 << 0x0000000cU)) 
                                 | ((0x00000ff0U & 
                                     ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
                                      << 4U)) | ((8U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                     << 3U)) 
                                                 | ((6U 
                                                     & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we))))))),19);
        bufp->chgIData(oldp+11,(((0x0007f000U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                                                 << 5U)) 
                                 | ((0x00000ff0U & 
                                     ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
                                      >> 4U)) | ((8U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                     << 2U)) 
                                                 | ((6U 
                                                     & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                          >> 1U))))))),19);
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 1U))));
        bufp->chgIData(oldp+13,(((0x0007f000U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                                                 << 5U)) 
                                 | ((0x00000ff0U & 
                                     ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
                                      >> 4U)) | ((8U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                     << 2U)) 
                                                 | ((6U 
                                                     & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                          >> 1U))))))),19);
        bufp->chgBit(oldp+14,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready))));
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 1U))));
        bufp->chgIData(oldp+16,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+18,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready),2);
        bufp->chgCData(oldp+19,((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                  << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))),2);
        bufp->chgCData(oldp+20,(((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                        << 1U)) | (1U 
                                                   & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))),2);
        bufp->chgSData(oldp+21,(((0x0000ff00U & ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                  >> 3U) 
                                                 << 8U)) 
                                 | (0x000000ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 3U)))),16);
        bufp->chgCData(oldp+22,(((0x0000000cU & ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                  >> 1U) 
                                                 << 2U)) 
                                 | (3U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                          >> 1U)))),4);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_sys__DOT__csr_rdata),32);
        bufp->chgBit(oldp+24,(vlSelfRef.tb_sys__DOT__csr_ack));
        bufp->chgCData(oldp+25,((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                  << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))),2);
        bufp->chgQData(oldp+26,(vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt),38);
        bufp->chgCData(oldp+28,(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid),4);
        bufp->chgCData(oldp+29,((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)) 
                                  << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)))),2);
        bufp->chgCData(oldp+30,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port) 
                                  << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__))),2);
        bufp->chgCData(oldp+31,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid),2);
        bufp->chgSData(oldp+32,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata),16);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id),6);
        bufp->chgCData(oldp+34,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we),2);
        bufp->chgCData(oldp+35,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err),2);
        bufp->chgCData(oldp+36,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                  << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready))),2);
        bufp->chgCData(oldp+37,(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid),2);
        bufp->chgCData(oldp+38,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready),2);
        bufp->chgCData(oldp+39,((((2U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                  << 1U) | (2U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))),2);
        bufp->chgCData(oldp+40,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict),4);
        bufp->chgCData(oldp+41,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__bank_idle),2);
        bufp->chgCData(oldp+42,((3U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready)))),2);
        bufp->chgCData(oldp+43,((((2U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                  << 1U) | (2U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))),2);
        bufp->chgCData(oldp+44,((((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                  << 1U) | (0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))),2);
        bufp->chgCData(oldp+45,((((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                  << 1U) | (0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))),2);
        bufp->chgSData(oldp+46,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data),16);
        bufp->chgCData(oldp+47,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id),4);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err),2);
        bufp->chgCData(oldp+49,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid),2);
        bufp->chgBit(oldp+50,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant))));
        bufp->chgBit(oldp+51,(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__));
        bufp->chgCData(oldp+52,(((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                 & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)) 
                                    & (- (IData)((VL_LTS_III(32, 1U, 
                                                             VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                  & (0U 
                                                     != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)))))))),2);
        bufp->chgBit(oldp+53,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr));
        bufp->chgBit(oldp+54,(VL_LTS_III(32, 1U, VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid)))));
        bufp->chgCData(oldp+55,((3U & (((0x0000000fU 
                                         & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                             << 2U) 
                                            | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                        >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                       >> 2U))),2);
        bufp->chgCData(oldp+56,((3U & ((0x0000000fU 
                                        & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                       >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)))),2);
        bufp->chgCData(oldp+57,((3U & ((~ (((0x0000000fU 
                                             & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                            >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                           - (IData)(1U))) 
                                       & ((0x0000000fU 
                                           & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                          >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))))),2);
        bufp->chgCData(oldp+58,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant),2);
        bufp->chgCData(oldp+59,((3U & (((~ (((0x0000000fU 
                                              & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                             >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                            - (IData)(1U))) 
                                        & ((0x0000000fU 
                                            & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                << 2U) 
                                               | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                           >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))) 
                                       << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)))),2);
        bufp->chgBit(oldp+60,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgCData(oldp+61,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata),8);
        bufp->chgCData(oldp+62,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id),3);
        bufp->chgBit(oldp+63,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+64,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+65,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+66,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgBit(oldp+67,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+68,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_id),3);
        bufp->chgBit(oldp+69,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+70,((3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                       >> 2U))),2);
        bufp->chgBit(oldp+71,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant))));
        bufp->chgBit(oldp+72,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port));
        bufp->chgCData(oldp+73,((3U & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                        >> 2U) & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)) 
                                                  & (- (IData)(
                                                               (VL_LTS_III(32, 1U, 
                                                                           VL_COUNTONES_I(
                                                                                (3U 
                                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                                >> 2U)))) 
                                                                & (0U 
                                                                   != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant))))))))),2);
        bufp->chgBit(oldp+74,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr));
        bufp->chgBit(oldp+75,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                (3U 
                                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                    >> 2U))))));
        bufp->chgCData(oldp+76,((3U & (((0x0000000fU 
                                         & ((0x0000000cU 
                                             & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                            | (3U & 
                                               ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                >> 2U)))) 
                                        >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                       >> 2U))),2);
        bufp->chgCData(oldp+77,((3U & ((0x0000000fU 
                                        & ((0x0000000cU 
                                            & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                           | (3U & 
                                              ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                               >> 2U)))) 
                                       >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)))),2);
        bufp->chgCData(oldp+78,((3U & ((~ (((0x0000000fU 
                                             & ((0x0000000cU 
                                                 & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                | (3U 
                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                      >> 2U)))) 
                                            >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                           - (IData)(1U))) 
                                       & ((0x0000000fU 
                                           & ((0x0000000cU 
                                               & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                              | (3U 
                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                    >> 2U)))) 
                                          >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))))),2);
        bufp->chgCData(oldp+79,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant),2);
        bufp->chgCData(oldp+80,((3U & (((~ (((0x0000000fU 
                                              & ((0x0000000cU 
                                                  & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                 | (3U 
                                                    & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                       >> 2U)))) 
                                             >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                            - (IData)(1U))) 
                                        & ((0x0000000fU 
                                            & ((0x0000000cU 
                                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                               | (3U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                     >> 2U)))) 
                                           >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))) 
                                       << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)))),2);
        bufp->chgBit(oldp+81,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgCData(oldp+82,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata),8);
        bufp->chgCData(oldp+83,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id),3);
        bufp->chgBit(oldp+84,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+85,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+86,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+87,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgBit(oldp+88,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+89,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_id),3);
        bufp->chgBit(oldp+90,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgBit(oldp+91,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+92,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgIData(oldp+93,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr]),19);
        bufp->chgBit(oldp+94,((2U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+95,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 96, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgBit(oldp+98,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr));
        bufp->chgBit(oldp+99,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr));
        bufp->chgCData(oldp+100,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy),2);
        bufp->chgBit(oldp+101,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+102,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgIData(oldp+103,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr]),19);
        bufp->chgBit(oldp+104,((2U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+105,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 106, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgBit(oldp+108,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr));
        bufp->chgBit(oldp+109,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr));
        bufp->chgCData(oldp+110,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy),2);
        bufp->chgSData(oldp+111,(((0x000007f8U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data) 
                                                  << 3U)) 
                                  | ((6U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                            << 1U)) 
                                     | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err))))),11);
        bufp->chgSData(oldp+112,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),11);
        bufp->chgBit(oldp+113,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid))));
        bufp->chgBit(oldp+114,((2U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgSData(oldp+115,(((0x000007f8U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data) 
                                                  << 3U)) 
                                  | ((6U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                            << 1U)) 
                                     | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err))))),11);
        bufp->chgBit(oldp+116,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgSData(oldp+117,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),11);
        bufp->chgBit(oldp+118,((2U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+119,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 120, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgBit(oldp+122,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr));
        bufp->chgBit(oldp+123,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr));
        bufp->chgCData(oldp+124,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy),2);
        bufp->chgSData(oldp+125,(((0x000007f8U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data) 
                                                  >> 5U)) 
                                  | ((6U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                            >> 1U)) 
                                     | (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                              >> 1U))))),11);
        bufp->chgSData(oldp+126,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),11);
        bufp->chgBit(oldp+127,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 1U))));
        bufp->chgBit(oldp+128,((2U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgSData(oldp+129,(((0x000007f8U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data) 
                                                  >> 5U)) 
                                  | ((6U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                            >> 1U)) 
                                     | (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                              >> 1U))))),11);
        bufp->chgBit(oldp+130,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgSData(oldp+131,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),11);
        bufp->chgBit(oldp+132,((2U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+133,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 134, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgBit(oldp+136,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr));
        bufp->chgBit(oldp+137,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr));
        bufp->chgCData(oldp+138,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy),2);
        Vtb_sys___024root__trace_chg_dtype____2(vlSelf, bufp, 139, vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter);
        bufp->chgIData(oldp+151,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__i),32);
        bufp->chgIData(oldp+152,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__b),32);
        bufp->chgCData(oldp+153,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports),2);
        bufp->chgBit(oldp+154,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p));
        bufp->chgBit(oldp+155,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found));
        bufp->chgCData(oldp+156,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+157,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
                                   << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop))),2);
        bufp->chgCData(oldp+158,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) 
                                   << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready))),2);
        bufp->chgCData(oldp+159,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7)))),4);
        bufp->chgCData(oldp+160,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we) 
                                   << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we))),2);
        bufp->chgSData(oldp+161,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                   << 6U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr))),12);
        bufp->chgSData(oldp+162,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data) 
                                   << 8U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data))),16);
        bufp->chgCData(oldp+163,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                    & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                             & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we)))),2);
        bufp->chgCData(oldp+164,((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7))),2);
        bufp->chgIData(oldp+165,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt),19);
        bufp->chgBit(oldp+166,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgCData(oldp+167,((0x0000007fU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                 >> 0x0000000cU))),7);
        bufp->chgCData(oldp+168,((0x000000ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                 >> 4U))),8);
        bufp->chgBit(oldp+169,((1U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                      >> 3U))));
        bufp->chgBit(oldp+170,((1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt)));
        bufp->chgBit(oldp+171,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+172,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr),6);
        bufp->chgCData(oldp+173,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data),8);
        bufp->chgBit(oldp+174,(((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we))));
        bufp->chgBit(oldp+175,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe));
        bufp->chgCData(oldp+176,((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4))),2);
        bufp->chgIData(oldp+177,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt),19);
        bufp->chgBit(oldp+178,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgCData(oldp+179,((0x0000007fU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                 >> 0x0000000cU))),7);
        bufp->chgCData(oldp+180,((0x000000ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                 >> 4U))),8);
        bufp->chgBit(oldp+181,((1U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                      >> 3U))));
        bufp->chgBit(oldp+182,((1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt)));
        bufp->chgBit(oldp+183,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+184,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr),6);
        bufp->chgCData(oldp+185,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data),8);
        bufp->chgBit(oldp+186,(((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we))));
        bufp->chgBit(oldp+187,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe));
        bufp->chgBit(oldp+188,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+189,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop));
    }
    bufp->chgBit(oldp+190,(vlSelfRef.tb_sys__DOT__clk));
    bufp->chgBit(oldp+191,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_req));
    bufp->chgCData(oldp+192,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_addr),4);
    bufp->chgSData(oldp+193,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr]) 
                               << 8U) | vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr])),16);
    bufp->chgCData(oldp+194,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept),2);
    bufp->chgCData(oldp+195,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue),2);
    bufp->chgCData(oldp+196,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__) 
                               << 2U) | (3U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                               >> 1U)))),3);
    bufp->chgCData(oldp+197,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr]),8);
    bufp->chgCData(oldp+198,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port) 
                               << 2U) | (3U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                               >> 1U)))),3);
    bufp->chgCData(oldp+199,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr]),8);
    bufp->chgCData(oldp+200,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy),2);
    bufp->chgCData(oldp+201,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy),2);
    bufp->chgIData(oldp+202,(vlSelfRef.tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__z),32);
    bufp->chgIData(oldp+203,(vlSelfRef.tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__y),32);
    bufp->chgIData(oldp+204,(vlSelfRef.tb_sys__DOT__u_env__DOT__test_id),32);
    bufp->chgIData(oldp+205,(vlSelfRef.tb_sys__DOT__u_env__DOT__total_errors),32);
}

void Vtb_sys___024root__trace_chg_dtype____0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*18:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_dtype____0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),19);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),19);
}

void Vtb_sys___024root__trace_chg_dtype____1(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*10:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_dtype____1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),11);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),11);
}

void Vtb_sys___024root__trace_chg_dtype____2(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 12>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_dtype____2\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
}

void Vtb_sys___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_cleanup\n"); );
    // Body
    Vtb_sys___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_sys___024root*>(voidSelf);
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
