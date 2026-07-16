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

extern const VlUnpacked<CData/*0:0*/, 16> Vtb_sys__ConstPool__TABLE_h8665d168_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtb_sys__ConstPool__TABLE_ha1fb25ee_0;
void Vtb_sys___024root__trace_chg_dtype____0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*23:0*/, 4>& __VdtypeVar);
void Vtb_sys___024root__trace_chg_dtype____1(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*12:0*/, 4>& __VdtypeVar);
void Vtb_sys___024root__trace_chg_dtype____2(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

void Vtb_sys___024root__trace_chg_0_sub_0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_0_sub_0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_sys__DOT__rst_n));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid),4);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we),4);
        bufp->chgQData(oldp+3,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr),40);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data),32);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe),4);
        bufp->chgSData(oldp+7,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id),16);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready),4);
        bufp->chgIData(oldp+9,(((0x00ffc000U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                                                << 0x0000000eU)) 
                                | ((0x00003fc0U & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
                                                   << 6U)) 
                                   | ((0x00000020U 
                                       & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                          << 5U)) | 
                                      ((0x0000001eU 
                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                           << 1U)) 
                                       | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we))))))),24);
        bufp->chgBit(oldp+10,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid))));
        bufp->chgIData(oldp+11,(((0x00ffc000U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                                                 << 0x0000000eU)) 
                                 | ((0x00003fc0U & 
                                     (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
                                      << 6U)) | ((0x00000020U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                     << 5U)) 
                                                 | ((0x0000001eU 
                                                     & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we))))))),24);
        bufp->chgIData(oldp+12,(((0x00ffc000U & ((IData)(
                                                         (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                          >> 0x0000000aU)) 
                                                 << 0x0000000eU)) 
                                 | ((0x00003fc0U & 
                                     (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
                                      >> 2U)) | ((0x00000020U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                     << 4U)) 
                                                 | ((0x0000001eU 
                                                     & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                        >> 3U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                          >> 1U))))))),24);
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 1U))));
        bufp->chgIData(oldp+14,(((0x00ffc000U & ((IData)(
                                                         (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                          >> 0x0000000aU)) 
                                                 << 0x0000000eU)) 
                                 | ((0x00003fc0U & 
                                     (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
                                      >> 2U)) | ((0x00000020U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                     << 4U)) 
                                                 | ((0x0000001eU 
                                                     & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                        >> 3U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                          >> 1U))))))),24);
        bufp->chgIData(oldp+15,(((0x00ffc000U & ((IData)(
                                                         (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                          >> 0x00000014U)) 
                                                 << 0x0000000eU)) 
                                 | ((0x00003fc0U & 
                                     (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
                                      >> 0x0000000aU)) 
                                    | ((0x00000020U 
                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                           << 3U)) 
                                       | ((0x0000001eU 
                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                              >> 7U)) 
                                          | (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                   >> 2U))))))),24);
        bufp->chgBit(oldp+16,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 2U))));
        bufp->chgIData(oldp+17,(((0x00ffc000U & ((IData)(
                                                         (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                          >> 0x00000014U)) 
                                                 << 0x0000000eU)) 
                                 | ((0x00003fc0U & 
                                     (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
                                      >> 0x0000000aU)) 
                                    | ((0x00000020U 
                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                           << 3U)) 
                                       | ((0x0000001eU 
                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                              >> 7U)) 
                                          | (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                   >> 2U))))))),24);
        bufp->chgIData(oldp+18,(((0x00ffc000U & ((IData)(
                                                         (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                          >> 0x0000001eU)) 
                                                 << 0x0000000eU)) 
                                 | ((0x00003fc0U & 
                                     (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
                                      >> 0x00000012U)) 
                                    | ((0x00000020U 
                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                           << 2U)) 
                                       | ((0x0000001eU 
                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                              >> 0x0000000bU)) 
                                          | (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                   >> 3U))))))),24);
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 3U))));
        bufp->chgIData(oldp+20,(((0x00ffc000U & ((IData)(
                                                         (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                          >> 0x0000001eU)) 
                                                 << 0x0000000eU)) 
                                 | ((0x00003fc0U & 
                                     (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
                                      >> 0x00000012U)) 
                                    | ((0x00000020U 
                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                           << 2U)) 
                                       | ((0x0000001eU 
                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                              >> 0x0000000bU)) 
                                          | (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                   >> 3U))))))),24);
        bufp->chgBit(oldp+21,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready))));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 1U))));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 2U))));
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 3U))));
        bufp->chgIData(oldp+25,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+27,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready),4);
        bufp->chgCData(oldp+28,(((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                   << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                             << 2U)) 
                                 | (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                     << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))))),4);
        bufp->chgCData(oldp+29,(((((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                          << 1U)) | 
                                   (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr])) 
                                  << 2U) | ((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   << 1U)) 
                                            | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))),4);
        bufp->chgIData(oldp+30,(((((0x0000ff00U & (
                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U) 
                                                   << 8U)) 
                                   | (0x000000ffU & 
                                      (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                       >> 5U))) << 0x00000010U) 
                                 | ((0x0000ff00U & 
                                     ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                       >> 5U) << 8U)) 
                                    | (0x000000ffU 
                                       & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                          >> 5U))))),32);
        bufp->chgSData(oldp+31,(((((0x000000f0U & (
                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 1U) 
                                                   << 4U)) 
                                   | (0x0000000fU & 
                                      (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                       >> 1U))) << 8U) 
                                 | ((0x000000f0U & 
                                     ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                       >> 1U) << 4U)) 
                                    | (0x0000000fU 
                                       & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                          >> 1U))))),16);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_sys__DOT__csr_rdata),32);
        bufp->chgBit(oldp+33,(vlSelfRef.tb_sys__DOT__csr_ack));
        bufp->chgCData(oldp+34,(((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                   << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                             << 2U)) 
                                 | (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                     << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))),4);
        bufp->chgWData(oldp+35,(vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt),96);
        bufp->chgSData(oldp+38,(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid),16);
        bufp->chgCData(oldp+39,((((((IData)(Vtb_sys__ConstPool__TABLE_h8665d168_0
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                    << 1U) | Vtb_sys__ConstPool__TABLE_h8665d168_0
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                  << 2U) | (((IData)(Vtb_sys__ConstPool__TABLE_h8665d168_0
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                             << 1U) 
                                            | Vtb_sys__ConstPool__TABLE_h8665d168_0
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]))),4);
        bufp->chgCData(oldp+40,((((((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                    << 2U) | Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                  << 4U) | (((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                             << 2U) 
                                            | Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]))),8);
        bufp->chgCData(oldp+41,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid),4);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id),24);
        bufp->chgCData(oldp+44,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we),4);
        bufp->chgCData(oldp+45,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err),4);
        bufp->chgCData(oldp+46,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                   << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                     << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready)))),4);
        bufp->chgCData(oldp+47,(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid),4);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready),4);
        bufp->chgCData(oldp+49,(((((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                   << 3U) | ((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                             << 2U)) 
                                 | (((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                     << 1U) | (4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))))),4);
        bufp->chgSData(oldp+50,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict),16);
        bufp->chgCData(oldp+51,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__bank_idle),4);
        bufp->chgCData(oldp+52,((0x0000000fU & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready)))),4);
        bufp->chgCData(oldp+53,(((((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                   << 3U) | ((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                             << 2U)) 
                                 | (((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                     << 1U) | (4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))),4);
        bufp->chgCData(oldp+54,(((((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                   << 3U) | ((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                             << 2U)) 
                                 | (((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                     << 1U) | (0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))),4);
        bufp->chgCData(oldp+55,(((((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                   << 3U) | ((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                             << 2U)) 
                                 | (((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                     << 1U) | (0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))))),4);
        bufp->chgIData(oldp+56,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data),32);
        bufp->chgSData(oldp+57,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id),16);
        bufp->chgCData(oldp+58,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err),4);
        bufp->chgCData(oldp+59,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid),4);
        bufp->chgBit(oldp+60,(Vtb_sys__ConstPool__TABLE_h8665d168_0
                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+61,(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]),2);
        bufp->chgCData(oldp+62,(((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                 & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)) 
                                    & (- (IData)((VL_LTS_III(32, 1U, 
                                                             VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                  & Vtb_sys__ConstPool__TABLE_h8665d168_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant])))))),4);
        bufp->chgCData(oldp+63,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr),2);
        bufp->chgBit(oldp+64,(VL_LTS_III(32, 1U, VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid)))));
        bufp->chgCData(oldp+65,((0x0000000fU & (((0x000000ffU 
                                                  & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                >> 4U))),4);
        bufp->chgCData(oldp+66,((0x0000000fU & ((0x000000ffU 
                                                 & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgCData(oldp+67,((0x0000000fU & ((~ 
                                                 (((0x000000ffU 
                                                    & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                        << 4U) 
                                                       | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                   >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                                & ((0x000000ffU 
                                                    & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                        << 4U) 
                                                       | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                   >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))))),4);
        bufp->chgCData(oldp+68,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant),4);
        bufp->chgCData(oldp+69,((0x0000000fU & (((~ 
                                                  (((0x000000ffU 
                                                     & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                         << 4U) 
                                                        | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                   - (IData)(1U))) 
                                                 & ((0x000000ffU 
                                                     & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                         << 4U) 
                                                        | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))) 
                                                << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgBit(oldp+70,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgCData(oldp+71,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata),8);
        bufp->chgCData(oldp+72,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id),6);
        bufp->chgBit(oldp+73,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+74,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+75,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+76,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgBit(oldp+77,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+78,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_id),6);
        bufp->chgBit(oldp+79,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+80,((0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                >> 4U))),4);
        bufp->chgBit(oldp+81,(Vtb_sys__ConstPool__TABLE_h8665d168_0
                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+82,(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]),2);
        bufp->chgCData(oldp+83,((0x0000000fU & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                 >> 4U) 
                                                & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)) 
                                                   & (- (IData)(
                                                                (VL_LTS_III(32, 1U, 
                                                                            VL_COUNTONES_I(
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                                >> 4U)))) 
                                                                 & Vtb_sys__ConstPool__TABLE_h8665d168_0
                                                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]))))))),4);
        bufp->chgCData(oldp+84,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr),2);
        bufp->chgBit(oldp+85,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                (0x0000000fU 
                                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                    >> 4U))))));
        bufp->chgCData(oldp+86,((0x0000000fU & (((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                           >> 4U)))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                >> 4U))),4);
        bufp->chgCData(oldp+87,((0x0000000fU & ((0x000000ffU 
                                                 & ((0x000000f0U 
                                                     & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                          >> 4U)))) 
                                                >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgCData(oldp+88,((0x0000000fU & ((~ 
                                                 (((0x000000ffU 
                                                    & ((0x000000f0U 
                                                        & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                       | (0x0000000fU 
                                                          & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                             >> 4U)))) 
                                                   >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                                & ((0x000000ffU 
                                                    & ((0x000000f0U 
                                                        & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                       | (0x0000000fU 
                                                          & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                             >> 4U)))) 
                                                   >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))))),4);
        bufp->chgCData(oldp+89,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant),4);
        bufp->chgCData(oldp+90,((0x0000000fU & (((~ 
                                                  (((0x000000ffU 
                                                     & ((0x000000f0U 
                                                         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                        | (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                              >> 4U)))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                   - (IData)(1U))) 
                                                 & ((0x000000ffU 
                                                     & ((0x000000f0U 
                                                         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                        | (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                              >> 4U)))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))) 
                                                << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgBit(oldp+91,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgCData(oldp+92,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata),8);
        bufp->chgCData(oldp+93,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id),6);
        bufp->chgBit(oldp+94,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+95,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+96,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+97,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgBit(oldp+98,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+99,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_id),6);
        bufp->chgBit(oldp+100,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+101,((0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                 >> 8U))),4);
        bufp->chgBit(oldp+102,(Vtb_sys__ConstPool__TABLE_h8665d168_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+103,(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]),2);
        bufp->chgCData(oldp+104,((0x0000000fU & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant)) 
                                                    & (- (IData)(
                                                                 (VL_LTS_III(32, 1U, 
                                                                             VL_COUNTONES_I(
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                                >> 8U)))) 
                                                                  & Vtb_sys__ConstPool__TABLE_h8665d168_0
                                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]))))))),4);
        bufp->chgCData(oldp+105,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr),2);
        bufp->chgBit(oldp+106,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (0x0000000fU 
                                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                     >> 8U))))));
        bufp->chgCData(oldp+107,((0x0000000fU & (((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                          >> 4U)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 8U)))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                                 >> 4U))),4);
        bufp->chgCData(oldp+108,((0x0000000fU & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                         >> 4U)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                           >> 8U)))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgCData(oldp+109,((0x0000000fU & ((~ 
                                                  (((0x000000ffU 
                                                     & ((0x000000f0U 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 4U)) 
                                                        | (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                              >> 8U)))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                                   - (IData)(1U))) 
                                                 & ((0x000000ffU 
                                                     & ((0x000000f0U 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 4U)) 
                                                        | (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                              >> 8U)))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr))))),4);
        bufp->chgCData(oldp+110,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant),4);
        bufp->chgCData(oldp+111,((0x0000000fU & (((~ 
                                                   (((0x000000ffU 
                                                      & ((0x000000f0U 
                                                          & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                             >> 4U)) 
                                                         | (0x0000000fU 
                                                            & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                               >> 8U)))) 
                                                     >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                                    - (IData)(1U))) 
                                                  & ((0x000000ffU 
                                                      & ((0x000000f0U 
                                                          & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                             >> 4U)) 
                                                         | (0x0000000fU 
                                                            & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                               >> 8U)))) 
                                                     >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr))) 
                                                 << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgBit(oldp+112,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgCData(oldp+113,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_rdata),8);
        bufp->chgCData(oldp+114,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_id),6);
        bufp->chgBit(oldp+115,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+116,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+117,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+118,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgBit(oldp+119,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+120,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_id),6);
        bufp->chgBit(oldp+121,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+122,((0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                 >> 0x0000000cU))),4);
        bufp->chgBit(oldp+123,(Vtb_sys__ConstPool__TABLE_h8665d168_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+124,(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]),2);
        bufp->chgCData(oldp+125,((0x0000000fU & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                  >> 0x0000000cU) 
                                                 & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant)) 
                                                    & (- (IData)(
                                                                 (VL_LTS_III(32, 1U, 
                                                                             VL_COUNTONES_I(
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                                >> 0x0000000cU)))) 
                                                                  & Vtb_sys__ConstPool__TABLE_h8665d168_0
                                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]))))))),4);
        bufp->chgCData(oldp+126,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr),2);
        bufp->chgBit(oldp+127,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (0x0000000fU 
                                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                     >> 0x0000000cU))))));
        bufp->chgCData(oldp+128,((0x0000000fU & (((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                          >> 8U)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 0x0000000cU)))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                                 >> 4U))),4);
        bufp->chgCData(oldp+129,((0x0000000fU & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                         >> 8U)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                           >> 0x0000000cU)))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgCData(oldp+130,((0x0000000fU & ((~ 
                                                  (((0x000000ffU 
                                                     & ((0x000000f0U 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 8U)) 
                                                        | (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                              >> 0x0000000cU)))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                                   - (IData)(1U))) 
                                                 & ((0x000000ffU 
                                                     & ((0x000000f0U 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 8U)) 
                                                        | (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                              >> 0x0000000cU)))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr))))),4);
        bufp->chgCData(oldp+131,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant),4);
        bufp->chgCData(oldp+132,((0x0000000fU & (((~ 
                                                   (((0x000000ffU 
                                                      & ((0x000000f0U 
                                                          & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                             >> 8U)) 
                                                         | (0x0000000fU 
                                                            & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                               >> 0x0000000cU)))) 
                                                     >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                                    - (IData)(1U))) 
                                                  & ((0x000000ffU 
                                                      & ((0x000000f0U 
                                                          & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                             >> 8U)) 
                                                         | (0x0000000fU 
                                                            & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                               >> 0x0000000cU)))) 
                                                     >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr))) 
                                                 << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgBit(oldp+133,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgCData(oldp+134,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_rdata),8);
        bufp->chgCData(oldp+135,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_id),6);
        bufp->chgBit(oldp+136,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+137,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+138,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+139,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgBit(oldp+140,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+141,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_id),6);
        bufp->chgBit(oldp+142,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgBit(oldp+143,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+144,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgIData(oldp+145,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr]),24);
        bufp->chgBit(oldp+146,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+147,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 148, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+152,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+153,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+154,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy),3);
        bufp->chgBit(oldp+155,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+156,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgIData(oldp+157,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr]),24);
        bufp->chgBit(oldp+158,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+159,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 160, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+164,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+165,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+166,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy),3);
        bufp->chgBit(oldp+167,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+168,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgIData(oldp+169,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr]),24);
        bufp->chgBit(oldp+170,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+171,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 172, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+176,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+177,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+178,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy),3);
        bufp->chgBit(oldp+179,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+180,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgIData(oldp+181,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr]),24);
        bufp->chgBit(oldp+182,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+183,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 184, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+188,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+189,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+190,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy),3);
        bufp->chgSData(oldp+191,(((0x00001fe0U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data 
                                                  << 5U)) 
                                  | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       << 1U)) | (1U 
                                                  & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err))))),13);
        bufp->chgSData(oldp+192,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),13);
        bufp->chgBit(oldp+193,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid))));
        bufp->chgBit(oldp+194,((4U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgSData(oldp+195,(((0x00001fe0U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data 
                                                  << 5U)) 
                                  | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       << 1U)) | (1U 
                                                  & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err))))),13);
        bufp->chgBit(oldp+196,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgSData(oldp+197,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),13);
        bufp->chgBit(oldp+198,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+199,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 200, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+204,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+205,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+206,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
        bufp->chgSData(oldp+207,(((0x00001fe0U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data 
                                                  >> 3U)) 
                                  | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       >> 3U)) | (1U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                     >> 1U))))),13);
        bufp->chgSData(oldp+208,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),13);
        bufp->chgBit(oldp+209,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 1U))));
        bufp->chgBit(oldp+210,((4U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgSData(oldp+211,(((0x00001fe0U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data 
                                                  >> 3U)) 
                                  | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       >> 3U)) | (1U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                     >> 1U))))),13);
        bufp->chgBit(oldp+212,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgSData(oldp+213,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),13);
        bufp->chgBit(oldp+214,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+215,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 216, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+220,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+221,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+222,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
        bufp->chgSData(oldp+223,(((0x00001fe0U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data 
                                                  >> 0x0000000bU)) 
                                  | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       >> 7U)) | (1U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                     >> 2U))))),13);
        bufp->chgSData(oldp+224,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),13);
        bufp->chgBit(oldp+225,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 2U))));
        bufp->chgBit(oldp+226,((4U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgSData(oldp+227,(((0x00001fe0U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data 
                                                  >> 0x0000000bU)) 
                                  | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       >> 7U)) | (1U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                     >> 2U))))),13);
        bufp->chgBit(oldp+228,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgSData(oldp+229,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),13);
        bufp->chgBit(oldp+230,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+231,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 232, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+236,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+237,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+238,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
        bufp->chgSData(oldp+239,(((0x00001fe0U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data 
                                                  >> 0x00000013U)) 
                                  | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       >> 0x0000000bU)) 
                                     | (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                              >> 3U))))),13);
        bufp->chgSData(oldp+240,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),13);
        bufp->chgBit(oldp+241,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 3U))));
        bufp->chgBit(oldp+242,((4U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgSData(oldp+243,(((0x00001fe0U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data 
                                                  >> 0x00000013U)) 
                                  | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       >> 0x0000000bU)) 
                                     | (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                              >> 3U))))),13);
        bufp->chgBit(oldp+244,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgSData(oldp+245,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),13);
        bufp->chgBit(oldp+246,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+247,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 248, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+252,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+253,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+254,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
        Vtb_sys___024root__trace_chg_dtype____2(vlSelf, bufp, 255, vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter);
        bufp->chgIData(oldp+287,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__i),32);
        bufp->chgIData(oldp+288,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__b),32);
        bufp->chgCData(oldp+289,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports),8);
        bufp->chgCData(oldp+290,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p),2);
        bufp->chgBit(oldp+291,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found));
        bufp->chgCData(oldp+292,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgIData(oldp+293,((((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr]) 
                                     << 8U) | vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr]) 
                                   << 0x00000010U) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr]) 
                                      << 8U) | vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr]))),32);
        bufp->chgCData(oldp+294,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr]),8);
        bufp->chgCData(oldp+295,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr]),8);
        bufp->chgCData(oldp+296,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr]),8);
        bufp->chgCData(oldp+297,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr]),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+298,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop) 
                                    << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
                                      << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop)))),4);
        bufp->chgCData(oldp+299,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready) 
                                    << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) 
                                      << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready)))),4);
        bufp->chgSData(oldp+300,((((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17) 
                                       << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19) 
                                         << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18))) 
                                    << 0x0000000cU) 
                                   | (((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_21) 
                                         << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20) 
                                                   << 2U)) 
                                       | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
                                           << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22))) 
                                      << 8U)) | (((
                                                   (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_29) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)))))),16);
        bufp->chgCData(oldp+301,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we) 
                                    << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we) 
                                      << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we)))),4);
        bufp->chgIData(oldp+302,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                    << 0x00000018U) 
                                   | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                      << 0x00000010U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                      << 8U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr)))),32);
        bufp->chgIData(oldp+303,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data) 
                                    << 0x00000018U) 
                                   | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data) 
                                      << 0x00000010U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data) 
                                      << 8U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data)))),32);
        bufp->chgCData(oldp+304,((((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                     & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we)) 
                                    << 3U) | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                               & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we)) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                       & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we)) 
                                      << 1U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we))))),4);
        bufp->chgCData(oldp+305,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_29) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)))),4);
        bufp->chgIData(oldp+306,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt),24);
        bufp->chgBit(oldp+307,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgSData(oldp+308,((0x000003ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                 >> 0x0000000eU))),10);
        bufp->chgCData(oldp+309,((0x000000ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                 >> 6U))),8);
        bufp->chgBit(oldp+310,((1U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                      >> 5U))));
        bufp->chgBit(oldp+311,((1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt)));
        bufp->chgBit(oldp+312,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+313,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgCData(oldp+314,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data),8);
        bufp->chgBit(oldp+315,(((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we))));
        bufp->chgBit(oldp+316,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe));
        bufp->chgCData(oldp+317,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26)))),4);
        bufp->chgIData(oldp+318,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt),24);
        bufp->chgBit(oldp+319,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgSData(oldp+320,((0x000003ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                 >> 0x0000000eU))),10);
        bufp->chgCData(oldp+321,((0x000000ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                 >> 6U))),8);
        bufp->chgBit(oldp+322,((1U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                      >> 5U))));
        bufp->chgBit(oldp+323,((1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt)));
        bufp->chgBit(oldp+324,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+325,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgCData(oldp+326,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data),8);
        bufp->chgBit(oldp+327,(((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we))));
        bufp->chgBit(oldp+328,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe));
        bufp->chgCData(oldp+329,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_21) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22)))),4);
        bufp->chgIData(oldp+330,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt),24);
        bufp->chgBit(oldp+331,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgSData(oldp+332,((0x000003ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                                 >> 0x0000000eU))),10);
        bufp->chgCData(oldp+333,((0x000000ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                                 >> 6U))),8);
        bufp->chgBit(oldp+334,((1U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                      >> 5U))));
        bufp->chgBit(oldp+335,((1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt)));
        bufp->chgBit(oldp+336,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+337,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgCData(oldp+338,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data),8);
        bufp->chgBit(oldp+339,(((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we))));
        bufp->chgBit(oldp+340,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe));
        bufp->chgCData(oldp+341,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18)))),4);
        bufp->chgIData(oldp+342,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt),24);
        bufp->chgBit(oldp+343,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgSData(oldp+344,((0x000003ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                                 >> 0x0000000eU))),10);
        bufp->chgCData(oldp+345,((0x000000ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                                 >> 6U))),8);
        bufp->chgBit(oldp+346,((1U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                      >> 5U))));
        bufp->chgBit(oldp+347,((1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt)));
        bufp->chgBit(oldp+348,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+349,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgCData(oldp+350,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data),8);
        bufp->chgBit(oldp+351,(((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we))));
        bufp->chgBit(oldp+352,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe));
        bufp->chgBit(oldp+353,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+354,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+355,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+356,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop));
    }
    bufp->chgBit(oldp+357,(vlSelfRef.tb_sys__DOT__clk));
    bufp->chgBit(oldp+358,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_req));
    bufp->chgCData(oldp+359,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_addr),5);
    bufp->chgCData(oldp+360,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept),4);
    bufp->chgCData(oldp+361,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue),4);
    bufp->chgCData(oldp+362,((((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                               << 4U) | (0x0000000fU 
                                         & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                            >> 1U)))),6);
    bufp->chgCData(oldp+363,((((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                               << 4U) | (0x0000000fU 
                                         & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                            >> 1U)))),6);
    bufp->chgCData(oldp+364,((((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                               << 4U) | (0x0000000fU 
                                         & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                            >> 1U)))),6);
    bufp->chgCData(oldp+365,((((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                               << 4U) | (0x0000000fU 
                                         & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                            >> 1U)))),6);
    bufp->chgCData(oldp+366,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->chgCData(oldp+367,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->chgCData(oldp+368,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->chgCData(oldp+369,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->chgIData(oldp+370,(vlSelfRef.tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__z),32);
    bufp->chgIData(oldp+371,(vlSelfRef.tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__y),32);
    bufp->chgIData(oldp+372,(vlSelfRef.tb_sys__DOT__u_env__DOT__test_id),32);
    bufp->chgIData(oldp+373,(vlSelfRef.tb_sys__DOT__u_env__DOT__total_errors),32);
}

void Vtb_sys___024root__trace_chg_dtype____0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*23:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_dtype____0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),24);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),24);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),24);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),24);
}

void Vtb_sys___024root__trace_chg_dtype____1(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*12:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_dtype____1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),13);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),13);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),13);
    bufp->chgSData(oldp+3,(__VdtypeVar[3]),13);
}

void Vtb_sys___024root__trace_chg_dtype____2(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
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
    bufp->chgIData(oldp+18,(__VdtypeVar[18]),32);
    bufp->chgIData(oldp+19,(__VdtypeVar[19]),32);
    bufp->chgIData(oldp+20,(__VdtypeVar[20]),32);
    bufp->chgIData(oldp+21,(__VdtypeVar[21]),32);
    bufp->chgIData(oldp+22,(__VdtypeVar[22]),32);
    bufp->chgIData(oldp+23,(__VdtypeVar[23]),32);
    bufp->chgIData(oldp+24,(__VdtypeVar[24]),32);
    bufp->chgIData(oldp+25,(__VdtypeVar[25]),32);
    bufp->chgIData(oldp+26,(__VdtypeVar[26]),32);
    bufp->chgIData(oldp+27,(__VdtypeVar[27]),32);
    bufp->chgIData(oldp+28,(__VdtypeVar[28]),32);
    bufp->chgIData(oldp+29,(__VdtypeVar[29]),32);
    bufp->chgIData(oldp+30,(__VdtypeVar[30]),32);
    bufp->chgIData(oldp+31,(__VdtypeVar[31]),32);
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
