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

void Vtb_sys___024root__trace_chg_dtype____0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*50:0*/, 4>& __VdtypeVar);
void Vtb_sys___024root__trace_chg_dtype____1(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*36:0*/, 4>& __VdtypeVar);
void Vtb_sys___024root__trace_chg_dtype____2(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 18>& __VdtypeVar);

void Vtb_sys___024root__trace_chg_0_sub_0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_0_sub_0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_sys__DOT__rst_n));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid),2);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we),2);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr),20);
        bufp->chgQData(oldp+4,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data),64);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe),8);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id),8);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready),2);
        bufp->chgQData(oldp+9,((((QData)((IData)((0x000003ffU 
                                                  & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr))) 
                                 << 0x00000029U) | 
                                (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data)) 
                                  << 9U) | (QData)((IData)(
                                                           ((0x000001e0U 
                                                             & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                                << 5U)) 
                                                            | ((0x0000001eU 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we))))))))),51);
        bufp->chgBit(oldp+11,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid))));
        bufp->chgQData(oldp+12,((((QData)((IData)((0x000003ffU 
                                                   & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data)) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                                 << 5U)) 
                                                             | ((0x0000001eU 
                                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we))))))))),51);
        bufp->chgQData(oldp+14,((((QData)((IData)((0x000003ffU 
                                                   & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                      >> 0x0000000aU)))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(
                                                   (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
                                                    >> 0x00000020U))) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                                 << 1U)) 
                                                             | ((0x0000001eU 
                                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                                    >> 3U)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 1U))))))))),51);
        bufp->chgBit(oldp+16,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 1U))));
        bufp->chgQData(oldp+17,((((QData)((IData)((0x000003ffU 
                                                   & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                      >> 0x0000000aU)))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(
                                                   (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
                                                    >> 0x00000020U))) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                                 << 1U)) 
                                                             | ((0x0000001eU 
                                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                                    >> 3U)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 1U))))))))),51);
        bufp->chgBit(oldp+19,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready))));
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 1U))));
        bufp->chgIData(oldp+21,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+23,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready),2);
        bufp->chgCData(oldp+24,((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                  << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))),2);
        bufp->chgCData(oldp+25,(((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))),2);
        bufp->chgQData(oldp+26,((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 5U))) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                     >> 5U))))),64);
        bufp->chgCData(oldp+28,(((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U))))),8);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_sys__DOT__csr_rdata),32);
        bufp->chgBit(oldp+30,(vlSelfRef.tb_sys__DOT__csr_ack));
        bufp->chgCData(oldp+31,((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                  << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))),2);
        bufp->chgWData(oldp+32,(vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt),102);
        bufp->chgCData(oldp+36,(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid),8);
        bufp->chgCData(oldp+37,(((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant)) 
                                   << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant)) 
                                             << 2U)) 
                                 | (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)) 
                                     << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant))))),4);
        bufp->chgCData(oldp+38,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arb__grant_port) 
                                   << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arb__grant_port) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port) 
                                     << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__)))),4);
        bufp->chgCData(oldp+39,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid),4);
        bufp->chgWData(oldp+40,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata),128);
        bufp->chgIData(oldp+44,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id),20);
        bufp->chgCData(oldp+45,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we),4);
        bufp->chgCData(oldp+46,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err),4);
        bufp->chgCData(oldp+47,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                   << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                     << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready)))),4);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid),2);
        bufp->chgCData(oldp+49,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready),2);
        bufp->chgCData(oldp+50,((((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                  << 1U) | (4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))),2);
        bufp->chgCData(oldp+51,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict),8);
        bufp->chgCData(oldp+52,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__bank_idle),4);
        bufp->chgCData(oldp+53,((3U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready)))),2);
        bufp->chgCData(oldp+54,((((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                  << 1U) | (4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))),2);
        bufp->chgCData(oldp+55,((((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                  << 1U) | (0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))),2);
        bufp->chgCData(oldp+56,((((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                  << 1U) | (0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))),2);
        bufp->chgQData(oldp+57,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data),64);
        bufp->chgCData(oldp+59,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id),8);
        bufp->chgCData(oldp+60,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err),2);
        bufp->chgCData(oldp+61,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid),2);
        bufp->chgBit(oldp+62,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant))));
        bufp->chgBit(oldp+63,(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__));
        bufp->chgCData(oldp+64,(((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                 & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)) 
                                    & (- (IData)((VL_LTS_III(32, 1U, 
                                                             VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                  & (0U 
                                                     != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)))))))),2);
        bufp->chgBit(oldp+65,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr));
        bufp->chgBit(oldp+66,(VL_LTS_III(32, 1U, VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid)))));
        bufp->chgCData(oldp+67,((3U & (((0x0000000fU 
                                         & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                             << 2U) 
                                            | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                        >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                       >> 2U))),2);
        bufp->chgCData(oldp+68,((3U & ((0x0000000fU 
                                        & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                       >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)))),2);
        bufp->chgCData(oldp+69,((3U & ((~ (((0x0000000fU 
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
        bufp->chgCData(oldp+70,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant),2);
        bufp->chgCData(oldp+71,((3U & (((~ (((0x0000000fU 
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
        bufp->chgBit(oldp+72,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgIData(oldp+73,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata),32);
        bufp->chgCData(oldp+74,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id),5);
        bufp->chgBit(oldp+75,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+76,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+77,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+78,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgCData(oldp+79,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+80,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+81,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_id),5);
        bufp->chgBit(oldp+82,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+83,((3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                       >> 2U))),2);
        bufp->chgBit(oldp+84,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant))));
        bufp->chgBit(oldp+85,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port));
        bufp->chgCData(oldp+86,((3U & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                        >> 2U) & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)) 
                                                  & (- (IData)(
                                                               (VL_LTS_III(32, 1U, 
                                                                           VL_COUNTONES_I(
                                                                                (3U 
                                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                                >> 2U)))) 
                                                                & (0U 
                                                                   != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant))))))))),2);
        bufp->chgBit(oldp+87,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr));
        bufp->chgBit(oldp+88,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                (3U 
                                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                    >> 2U))))));
        bufp->chgCData(oldp+89,((3U & (((0x0000000fU 
                                         & ((0x0000000cU 
                                             & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                            | (3U & 
                                               ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                >> 2U)))) 
                                        >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                       >> 2U))),2);
        bufp->chgCData(oldp+90,((3U & ((0x0000000fU 
                                        & ((0x0000000cU 
                                            & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                           | (3U & 
                                              ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                               >> 2U)))) 
                                       >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)))),2);
        bufp->chgCData(oldp+91,((3U & ((~ (((0x0000000fU 
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
        bufp->chgCData(oldp+92,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant),2);
        bufp->chgCData(oldp+93,((3U & (((~ (((0x0000000fU 
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
        bufp->chgBit(oldp+94,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgIData(oldp+95,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata),32);
        bufp->chgCData(oldp+96,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id),5);
        bufp->chgBit(oldp+97,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+98,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+99,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+100,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgCData(oldp+101,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+102,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+103,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_id),5);
        bufp->chgBit(oldp+104,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+105,((3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                        >> 4U))),2);
        bufp->chgBit(oldp+106,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant))));
        bufp->chgBit(oldp+107,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arb__grant_port));
        bufp->chgCData(oldp+108,((3U & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                         >> 4U) & (
                                                   (~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant)) 
                                                   & (- (IData)(
                                                                (VL_LTS_III(32, 1U, 
                                                                            VL_COUNTONES_I(
                                                                                (3U 
                                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                                >> 4U)))) 
                                                                 & (0U 
                                                                    != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant))))))))),2);
        bufp->chgBit(oldp+109,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr));
        bufp->chgBit(oldp+110,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                     >> 4U))))));
        bufp->chgCData(oldp+111,((3U & (((0x0000000fU 
                                          & ((0x0000000cU 
                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                 >> 2U)) 
                                             | (3U 
                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                   >> 4U)))) 
                                         >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+112,((3U & ((0x0000000fU 
                                         & ((0x0000000cU 
                                             & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                >> 2U)) 
                                            | (3U & 
                                               ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                >> 4U)))) 
                                        >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)))),2);
        bufp->chgCData(oldp+113,((3U & ((~ (((0x0000000fU 
                                              & ((0x0000000cU 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                     >> 2U)) 
                                                 | (3U 
                                                    & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                       >> 4U)))) 
                                             >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                            - (IData)(1U))) 
                                        & ((0x0000000fU 
                                            & ((0x0000000cU 
                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                   >> 2U)) 
                                               | (3U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                     >> 4U)))) 
                                           >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr))))),2);
        bufp->chgCData(oldp+114,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant),2);
        bufp->chgCData(oldp+115,((3U & (((~ (((0x0000000fU 
                                               & ((0x0000000cU 
                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                      >> 2U)) 
                                                  | (3U 
                                                     & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                        >> 4U)))) 
                                              >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                             - (IData)(1U))) 
                                         & ((0x0000000fU 
                                             & ((0x0000000cU 
                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                    >> 2U)) 
                                                | (3U 
                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                      >> 4U)))) 
                                            >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr))) 
                                        << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)))),2);
        bufp->chgBit(oldp+116,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgIData(oldp+117,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_rdata),32);
        bufp->chgCData(oldp+118,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_id),5);
        bufp->chgBit(oldp+119,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+120,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+121,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+122,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgCData(oldp+123,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+124,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+125,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_id),5);
        bufp->chgBit(oldp+126,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+127,((3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                        >> 6U))),2);
        bufp->chgBit(oldp+128,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant))));
        bufp->chgBit(oldp+129,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arb__grant_port));
        bufp->chgCData(oldp+130,((3U & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                         >> 6U) & (
                                                   (~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant)) 
                                                   & (- (IData)(
                                                                (VL_LTS_III(32, 1U, 
                                                                            VL_COUNTONES_I(
                                                                                (3U 
                                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                                >> 6U)))) 
                                                                 & (0U 
                                                                    != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant))))))))),2);
        bufp->chgBit(oldp+131,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr));
        bufp->chgBit(oldp+132,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                     >> 6U))))));
        bufp->chgCData(oldp+133,((3U & (((0x0000000fU 
                                          & ((0x0000000cU 
                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                 >> 4U)) 
                                             | (3U 
                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                   >> 6U)))) 
                                         >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+134,((3U & ((0x0000000fU 
                                         & ((0x0000000cU 
                                             & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                >> 4U)) 
                                            | (3U & 
                                               ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                >> 6U)))) 
                                        >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)))),2);
        bufp->chgCData(oldp+135,((3U & ((~ (((0x0000000fU 
                                              & ((0x0000000cU 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                     >> 4U)) 
                                                 | (3U 
                                                    & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                       >> 6U)))) 
                                             >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                            - (IData)(1U))) 
                                        & ((0x0000000fU 
                                            & ((0x0000000cU 
                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                   >> 4U)) 
                                               | (3U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                     >> 6U)))) 
                                           >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr))))),2);
        bufp->chgCData(oldp+136,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant),2);
        bufp->chgCData(oldp+137,((3U & (((~ (((0x0000000fU 
                                               & ((0x0000000cU 
                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                      >> 4U)) 
                                                  | (3U 
                                                     & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                        >> 6U)))) 
                                              >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                             - (IData)(1U))) 
                                         & ((0x0000000fU 
                                             & ((0x0000000cU 
                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                    >> 4U)) 
                                                | (3U 
                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                      >> 6U)))) 
                                            >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr))) 
                                        << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)))),2);
        bufp->chgBit(oldp+138,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgIData(oldp+139,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_rdata),32);
        bufp->chgCData(oldp+140,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_id),5);
        bufp->chgBit(oldp+141,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+142,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+143,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+144,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgCData(oldp+145,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+146,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+147,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_id),5);
        bufp->chgBit(oldp+148,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgBit(oldp+149,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+150,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+151,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr]),51);
        bufp->chgBit(oldp+153,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+154,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 155, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+163,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+164,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+165,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy),3);
        bufp->chgBit(oldp+166,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+167,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+168,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr]),51);
        bufp->chgBit(oldp+170,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+171,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 172, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+180,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+181,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+182,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy),3);
        bufp->chgQData(oldp+183,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data)) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err))))))),37);
        bufp->chgQData(oldp+185,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+187,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid))));
        bufp->chgBit(oldp+188,((4U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+189,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data)) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err))))))),37);
        bufp->chgBit(oldp+191,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+192,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+194,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+195,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 196, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+204,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+205,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+206,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
        bufp->chgQData(oldp+207,((((QData)((IData)(
                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data 
                                                    >> 0x00000020U))) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                                                 >> 3U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 1U))))))),37);
        bufp->chgQData(oldp+209,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+211,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 1U))));
        bufp->chgBit(oldp+212,((4U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+213,((((QData)((IData)(
                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data 
                                                    >> 0x00000020U))) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                                                 >> 3U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 1U))))))),37);
        bufp->chgBit(oldp+215,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+216,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+218,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+219,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 220, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+228,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+229,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+230,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
        Vtb_sys___024root__trace_chg_dtype____2(vlSelf, bufp, 231, vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter);
        bufp->chgIData(oldp+249,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__i),32);
        bufp->chgIData(oldp+250,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__b),32);
        bufp->chgCData(oldp+251,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports),4);
        bufp->chgBit(oldp+252,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p));
        bufp->chgBit(oldp+253,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found));
        bufp->chgCData(oldp+254,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        __Vtemp_2[0U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr];
        __Vtemp_2[1U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr];
        __Vtemp_2[2U] = (IData)((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr])) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr]))));
        __Vtemp_2[3U] = (IData)(((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr]))) 
                                 >> 0x00000020U));
        bufp->chgWData(oldp+255,(__Vtemp_2),128);
        bufp->chgIData(oldp+259,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
        bufp->chgIData(oldp+260,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
        bufp->chgIData(oldp+261,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
        bufp->chgIData(oldp+262,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+263,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
                                   << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop))),2);
        bufp->chgCData(oldp+264,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready) 
                                    << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) 
                                      << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready)))),4);
        bufp->chgCData(oldp+265,(((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11) 
                                      << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_14) 
                                        << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_13))) 
                                   << 4U) | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19))))),8);
        bufp->chgCData(oldp+266,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we) 
                                    << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we) 
                                      << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we)))),4);
        bufp->chgIData(oldp+267,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                    << 0x00000018U) 
                                   | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                      << 0x00000010U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                      << 8U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr)))),32);
        __Vtemp_4[0U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data;
        __Vtemp_4[1U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data;
        __Vtemp_4[2U] = (IData)((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data)) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data))));
        __Vtemp_4[3U] = (IData)(((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data))) 
                                 >> 0x00000020U));
        bufp->chgWData(oldp+268,(__Vtemp_4),128);
        bufp->chgSData(oldp+272,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                      << 8U)) | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe)))),16);
        bufp->chgCData(oldp+273,((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19))),2);
        bufp->chgQData(oldp+274,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt),51);
        bufp->chgBit(oldp+276,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgSData(oldp+277,((0x000003ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                         >> 0x00000029U)))),10);
        bufp->chgIData(oldp+278,((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                          >> 9U))),32);
        bufp->chgCData(oldp+279,((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                         >> 5U)))),4);
        bufp->chgBit(oldp+280,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt))));
        bufp->chgBit(oldp+281,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+282,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgIData(oldp+283,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data),32);
        bufp->chgCData(oldp+284,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe),4);
        bufp->chgCData(oldp+285,((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16))),2);
        bufp->chgQData(oldp+286,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt),51);
        bufp->chgBit(oldp+288,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgSData(oldp+289,((0x000003ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                         >> 0x00000029U)))),10);
        bufp->chgIData(oldp+290,((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                          >> 9U))),32);
        bufp->chgCData(oldp+291,((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                         >> 5U)))),4);
        bufp->chgBit(oldp+292,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt))));
        bufp->chgBit(oldp+293,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+294,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgIData(oldp+295,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data),32);
        bufp->chgCData(oldp+296,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe),4);
        bufp->chgCData(oldp+297,((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_14) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_13))),2);
        bufp->chgQData(oldp+298,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt),51);
        bufp->chgBit(oldp+300,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgSData(oldp+301,((0x000003ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                                         >> 0x00000029U)))),10);
        bufp->chgIData(oldp+302,((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                          >> 9U))),32);
        bufp->chgCData(oldp+303,((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                                         >> 5U)))),4);
        bufp->chgBit(oldp+304,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt))));
        bufp->chgBit(oldp+305,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+306,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgIData(oldp+307,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data),32);
        bufp->chgCData(oldp+308,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe),4);
        bufp->chgCData(oldp+309,((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10))),2);
        bufp->chgQData(oldp+310,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt),51);
        bufp->chgBit(oldp+312,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgSData(oldp+313,((0x000003ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                                         >> 0x00000029U)))),10);
        bufp->chgIData(oldp+314,((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                          >> 9U))),32);
        bufp->chgCData(oldp+315,((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                                         >> 5U)))),4);
        bufp->chgBit(oldp+316,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt))));
        bufp->chgBit(oldp+317,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+318,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgIData(oldp+319,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data),32);
        bufp->chgCData(oldp+320,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe),4);
        bufp->chgBit(oldp+321,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+322,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop));
    }
    bufp->chgBit(oldp+323,(vlSelfRef.tb_sys__DOT__clk));
    bufp->chgBit(oldp+324,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_req));
    bufp->chgCData(oldp+325,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_addr),5);
    bufp->chgCData(oldp+326,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept),2);
    bufp->chgCData(oldp+327,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue),2);
    bufp->chgCData(oldp+328,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__) 
                               << 4U) | (0x0000000fU 
                                         & (IData)(
                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                    >> 1U))))),5);
    bufp->chgCData(oldp+329,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port) 
                               << 4U) | (0x0000000fU 
                                         & (IData)(
                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                    >> 1U))))),5);
    bufp->chgCData(oldp+330,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arb__grant_port) 
                               << 4U) | (0x0000000fU 
                                         & (IData)(
                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                                    >> 1U))))),5);
    bufp->chgCData(oldp+331,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arb__grant_port) 
                               << 4U) | (0x0000000fU 
                                         & (IData)(
                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                                    >> 1U))))),5);
    bufp->chgCData(oldp+332,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->chgCData(oldp+333,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->chgIData(oldp+334,(vlSelfRef.tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__z),32);
    bufp->chgIData(oldp+335,(vlSelfRef.tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__y),32);
    bufp->chgIData(oldp+336,(vlSelfRef.tb_sys__DOT__u_env__DOT__test_id),32);
    bufp->chgIData(oldp+337,(vlSelfRef.tb_sys__DOT__u_env__DOT__total_errors),32);
}

void Vtb_sys___024root__trace_chg_dtype____0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*50:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_dtype____0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[0]),51);
    bufp->chgQData(oldp+2,(__VdtypeVar[1]),51);
    bufp->chgQData(oldp+4,(__VdtypeVar[2]),51);
    bufp->chgQData(oldp+6,(__VdtypeVar[3]),51);
}

void Vtb_sys___024root__trace_chg_dtype____1(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*36:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_dtype____1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[0]),37);
    bufp->chgQData(oldp+2,(__VdtypeVar[1]),37);
    bufp->chgQData(oldp+4,(__VdtypeVar[2]),37);
    bufp->chgQData(oldp+6,(__VdtypeVar[3]),37);
}

void Vtb_sys___024root__trace_chg_dtype____2(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 18>& __VdtypeVar) {
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
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->chgIData(oldp+16,(__VdtypeVar[16]),32);
    bufp->chgIData(oldp+17,(__VdtypeVar[17]),32);
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
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
