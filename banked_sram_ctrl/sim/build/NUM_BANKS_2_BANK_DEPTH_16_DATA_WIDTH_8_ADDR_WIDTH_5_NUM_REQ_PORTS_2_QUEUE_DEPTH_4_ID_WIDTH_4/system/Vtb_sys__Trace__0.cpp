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

void Vtb_sys___024root__trace_chg_dtype____0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*18:0*/, 4>& __VdtypeVar);
void Vtb_sys___024root__trace_chg_dtype____1(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*12:0*/, 4>& __VdtypeVar);
void Vtb_sys___024root__trace_chg_dtype____2(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 12>& __VdtypeVar);
void Vtb_sys___024root__trace_chg_dtype____3(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar);

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
        bufp->chgSData(oldp+3,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr),10);
        bufp->chgSData(oldp+4,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data),16);
        bufp->chgCData(oldp+5,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe),2);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id),8);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready),2);
        bufp->chgIData(oldp+8,(((0x0007c000U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                                                << 0x0000000eU)) 
                                | ((0x00003fc0U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
                                                   << 6U)) 
                                   | ((0x00000020U 
                                       & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                          << 5U)) | 
                                      ((0x0000001eU 
                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                           << 1U)) 
                                       | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we))))))),19);
        bufp->chgBit(oldp+9,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid))));
        bufp->chgIData(oldp+10,(((0x0007c000U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                                                 << 0x0000000eU)) 
                                 | ((0x00003fc0U & 
                                     ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
                                      << 6U)) | ((0x00000020U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                     << 5U)) 
                                                 | ((0x0000001eU 
                                                     & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we))))))),19);
        bufp->chgIData(oldp+11,(((0x0007c000U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                                                 << 9U)) 
                                 | ((0x00003fc0U & 
                                     ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
                                      >> 2U)) | ((0x00000020U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                     << 4U)) 
                                                 | ((0x0000001eU 
                                                     & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                        >> 3U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                          >> 1U))))))),19);
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 1U))));
        bufp->chgIData(oldp+13,(((0x0007c000U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                                                 << 9U)) 
                                 | ((0x00003fc0U & 
                                     ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
                                      >> 2U)) | ((0x00000020U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                     << 4U)) 
                                                 | ((0x0000001eU 
                                                     & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                        >> 3U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                          >> 1U))))))),19);
        bufp->chgBit(oldp+14,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready))));
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 1U))));
        bufp->chgCData(oldp+16,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[0]),8);
        bufp->chgCData(oldp+17,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[1]),8);
        bufp->chgCData(oldp+18,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[2]),8);
        bufp->chgCData(oldp+19,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[3]),8);
        bufp->chgCData(oldp+20,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[4]),8);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[5]),8);
        bufp->chgCData(oldp+22,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[6]),8);
        bufp->chgCData(oldp+23,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[7]),8);
        bufp->chgCData(oldp+24,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[8]),8);
        bufp->chgCData(oldp+25,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[9]),8);
        bufp->chgCData(oldp+26,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[10]),8);
        bufp->chgCData(oldp+27,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[11]),8);
        bufp->chgCData(oldp+28,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[12]),8);
        bufp->chgCData(oldp+29,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[13]),8);
        bufp->chgCData(oldp+30,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[14]),8);
        bufp->chgCData(oldp+31,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[15]),8);
        bufp->chgCData(oldp+32,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[16]),8);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[17]),8);
        bufp->chgCData(oldp+34,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[18]),8);
        bufp->chgCData(oldp+35,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[19]),8);
        bufp->chgCData(oldp+36,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[20]),8);
        bufp->chgCData(oldp+37,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[21]),8);
        bufp->chgCData(oldp+38,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[22]),8);
        bufp->chgCData(oldp+39,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[23]),8);
        bufp->chgCData(oldp+40,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[24]),8);
        bufp->chgCData(oldp+41,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[25]),8);
        bufp->chgCData(oldp+42,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[26]),8);
        bufp->chgCData(oldp+43,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[27]),8);
        bufp->chgCData(oldp+44,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[28]),8);
        bufp->chgCData(oldp+45,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[29]),8);
        bufp->chgCData(oldp+46,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[30]),8);
        bufp->chgCData(oldp+47,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[31]),8);
        bufp->chgBit(oldp+48,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[0]));
        bufp->chgBit(oldp+49,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[1]));
        bufp->chgBit(oldp+50,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[2]));
        bufp->chgBit(oldp+51,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[3]));
        bufp->chgBit(oldp+52,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[4]));
        bufp->chgBit(oldp+53,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[5]));
        bufp->chgBit(oldp+54,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[6]));
        bufp->chgBit(oldp+55,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[7]));
        bufp->chgBit(oldp+56,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[8]));
        bufp->chgBit(oldp+57,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[9]));
        bufp->chgBit(oldp+58,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[10]));
        bufp->chgBit(oldp+59,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[11]));
        bufp->chgBit(oldp+60,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[12]));
        bufp->chgBit(oldp+61,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[13]));
        bufp->chgBit(oldp+62,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[14]));
        bufp->chgBit(oldp+63,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[15]));
        bufp->chgBit(oldp+64,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[16]));
        bufp->chgBit(oldp+65,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[17]));
        bufp->chgBit(oldp+66,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[18]));
        bufp->chgBit(oldp+67,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[19]));
        bufp->chgBit(oldp+68,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[20]));
        bufp->chgBit(oldp+69,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[21]));
        bufp->chgBit(oldp+70,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[22]));
        bufp->chgBit(oldp+71,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[23]));
        bufp->chgBit(oldp+72,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[24]));
        bufp->chgBit(oldp+73,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[25]));
        bufp->chgBit(oldp+74,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[26]));
        bufp->chgBit(oldp+75,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[27]));
        bufp->chgBit(oldp+76,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[28]));
        bufp->chgBit(oldp+77,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[29]));
        bufp->chgBit(oldp+78,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[30]));
        bufp->chgBit(oldp+79,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[31]));
        bufp->chgIData(oldp+80,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count),32);
        bufp->chgIData(oldp+81,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+82,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready),2);
        bufp->chgCData(oldp+83,((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                  << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))),2);
        bufp->chgCData(oldp+84,(((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                        << 1U)) | (1U 
                                                   & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))),2);
        bufp->chgSData(oldp+85,(((0x0000ff00U & ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                  >> 5U) 
                                                 << 8U)) 
                                 | (0x000000ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 5U)))),16);
        bufp->chgCData(oldp+86,(((0x000000f0U & ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                  >> 1U) 
                                                 << 4U)) 
                                 | (0x0000000fU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 1U)))),8);
        bufp->chgIData(oldp+87,(vlSelfRef.tb_sys__DOT__csr_rdata),32);
        bufp->chgBit(oldp+88,(vlSelfRef.tb_sys__DOT__csr_ack));
        bufp->chgCData(oldp+89,((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                  << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))),2);
        bufp->chgQData(oldp+90,(vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt),38);
        bufp->chgCData(oldp+92,(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid),4);
        bufp->chgCData(oldp+93,((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)) 
                                  << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)))),2);
        bufp->chgCData(oldp+94,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port) 
                                  << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__))),2);
        bufp->chgCData(oldp+95,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid),2);
        bufp->chgSData(oldp+96,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata),16);
        bufp->chgSData(oldp+97,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id),10);
        bufp->chgCData(oldp+98,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we),2);
        bufp->chgCData(oldp+99,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err),2);
        bufp->chgCData(oldp+100,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                   << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready))),2);
        bufp->chgCData(oldp+101,(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid),2);
        bufp->chgCData(oldp+102,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready),2);
        bufp->chgCData(oldp+103,((((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                   << 1U) | (4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))),2);
        bufp->chgCData(oldp+104,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict),4);
        bufp->chgCData(oldp+105,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__bank_idle),2);
        bufp->chgCData(oldp+106,((3U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready)))),2);
        bufp->chgCData(oldp+107,((((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                   << 1U) | (4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))),2);
        bufp->chgCData(oldp+108,((((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                   << 1U) | (0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))),2);
        bufp->chgCData(oldp+109,((((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                   << 1U) | (0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))),2);
        bufp->chgSData(oldp+110,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data),16);
        bufp->chgCData(oldp+111,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id),8);
        bufp->chgCData(oldp+112,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err),2);
        bufp->chgCData(oldp+113,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid),2);
        bufp->chgBit(oldp+114,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant))));
        bufp->chgBit(oldp+115,(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__));
        bufp->chgCData(oldp+116,(((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                  & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)) 
                                     & (- (IData)((
                                                   VL_LTS_III(32, 1U, 
                                                              VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                   & (0U 
                                                      != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)))))))),2);
        bufp->chgBit(oldp+117,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr));
        bufp->chgBit(oldp+118,(VL_LTS_III(32, 1U, VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid)))));
        bufp->chgCData(oldp+119,((3U & (((0x0000000fU 
                                          & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                              << 2U) 
                                             | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                         >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+120,((3U & ((0x0000000fU 
                                         & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                             << 2U) 
                                            | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                        >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)))),2);
        bufp->chgCData(oldp+121,((3U & ((~ (((0x0000000fU 
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
        bufp->chgCData(oldp+122,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant),2);
        bufp->chgCData(oldp+123,((3U & (((~ (((0x0000000fU 
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
        bufp->chgBit(oldp+124,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgCData(oldp+125,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata),8);
        bufp->chgCData(oldp+126,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id),5);
        bufp->chgBit(oldp+127,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+128,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+129,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+130,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgBit(oldp+131,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+132,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_id),5);
        bufp->chgBit(oldp+133,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+134,((3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                        >> 2U))),2);
        bufp->chgBit(oldp+135,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant))));
        bufp->chgBit(oldp+136,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port));
        bufp->chgCData(oldp+137,((3U & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                         >> 2U) & (
                                                   (~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)) 
                                                   & (- (IData)(
                                                                (VL_LTS_III(32, 1U, 
                                                                            VL_COUNTONES_I(
                                                                                (3U 
                                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                                >> 2U)))) 
                                                                 & (0U 
                                                                    != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant))))))))),2);
        bufp->chgBit(oldp+138,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr));
        bufp->chgBit(oldp+139,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                     >> 2U))))));
        bufp->chgCData(oldp+140,((3U & (((0x0000000fU 
                                          & ((0x0000000cU 
                                              & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                             | (3U 
                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                   >> 2U)))) 
                                         >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+141,((3U & ((0x0000000fU 
                                         & ((0x0000000cU 
                                             & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                            | (3U & 
                                               ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                >> 2U)))) 
                                        >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)))),2);
        bufp->chgCData(oldp+142,((3U & ((~ (((0x0000000fU 
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
        bufp->chgCData(oldp+143,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant),2);
        bufp->chgCData(oldp+144,((3U & (((~ (((0x0000000fU 
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
        bufp->chgBit(oldp+145,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgCData(oldp+146,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata),8);
        bufp->chgCData(oldp+147,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id),5);
        bufp->chgBit(oldp+148,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+149,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+150,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+151,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgBit(oldp+152,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+153,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_id),5);
        bufp->chgBit(oldp+154,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgBit(oldp+155,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+156,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgIData(oldp+157,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr]),19);
        bufp->chgBit(oldp+158,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+159,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 160, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+164,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+165,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+166,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy),3);
        bufp->chgBit(oldp+167,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+168,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgIData(oldp+169,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr]),19);
        bufp->chgBit(oldp+170,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+171,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 172, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+176,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+177,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+178,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy),3);
        bufp->chgSData(oldp+179,(((0x00001fe0U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data) 
                                                  << 5U)) 
                                  | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       << 1U)) | (1U 
                                                  & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err))))),13);
        bufp->chgSData(oldp+180,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),13);
        bufp->chgBit(oldp+181,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid))));
        bufp->chgBit(oldp+182,((4U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgSData(oldp+183,(((0x00001fe0U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data) 
                                                  << 5U)) 
                                  | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       << 1U)) | (1U 
                                                  & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err))))),13);
        bufp->chgBit(oldp+184,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgSData(oldp+185,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),13);
        bufp->chgBit(oldp+186,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+187,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 188, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+192,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+193,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+194,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
        bufp->chgSData(oldp+195,(((0x00001fe0U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data) 
                                                  >> 3U)) 
                                  | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       >> 3U)) | (1U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                     >> 1U))))),13);
        bufp->chgSData(oldp+196,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),13);
        bufp->chgBit(oldp+197,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 1U))));
        bufp->chgBit(oldp+198,((4U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgSData(oldp+199,(((0x00001fe0U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data) 
                                                  >> 3U)) 
                                  | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       >> 3U)) | (1U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                     >> 1U))))),13);
        bufp->chgBit(oldp+200,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgSData(oldp+201,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),13);
        bufp->chgBit(oldp+202,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+203,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 204, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+208,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+209,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+210,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
        Vtb_sys___024root__trace_chg_dtype____2(vlSelf, bufp, 211, vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter);
        bufp->chgIData(oldp+223,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__i),32);
        bufp->chgIData(oldp+224,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__b),32);
        bufp->chgCData(oldp+225,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports),2);
        bufp->chgBit(oldp+226,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p));
        bufp->chgBit(oldp+227,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found));
        bufp->chgCData(oldp+228,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+229,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
                                   << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop))),2);
        bufp->chgCData(oldp+230,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) 
                                   << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready))),2);
        bufp->chgCData(oldp+231,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7)))),4);
        bufp->chgCData(oldp+232,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we) 
                                   << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we))),2);
        bufp->chgCData(oldp+233,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                   << 4U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr))),8);
        bufp->chgSData(oldp+234,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data) 
                                   << 8U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data))),16);
        bufp->chgCData(oldp+235,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                    & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                             & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we)))),2);
        bufp->chgCData(oldp+236,((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7))),2);
        bufp->chgIData(oldp+237,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt),19);
        bufp->chgBit(oldp+238,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgCData(oldp+239,((0x0000001fU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                 >> 0x0000000eU))),5);
        bufp->chgCData(oldp+240,((0x000000ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                 >> 6U))),8);
        bufp->chgBit(oldp+241,((1U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                      >> 5U))));
        bufp->chgBit(oldp+242,((1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt)));
        bufp->chgBit(oldp+243,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+244,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr),4);
        bufp->chgCData(oldp+245,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data),8);
        bufp->chgBit(oldp+246,(((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we))));
        bufp->chgBit(oldp+247,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe));
        bufp->chgCData(oldp+248,((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4))),2);
        bufp->chgIData(oldp+249,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt),19);
        bufp->chgBit(oldp+250,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgCData(oldp+251,((0x0000001fU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                 >> 0x0000000eU))),5);
        bufp->chgCData(oldp+252,((0x000000ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                 >> 6U))),8);
        bufp->chgBit(oldp+253,((1U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                      >> 5U))));
        bufp->chgBit(oldp+254,((1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt)));
        bufp->chgBit(oldp+255,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+256,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr),4);
        bufp->chgCData(oldp+257,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data),8);
        bufp->chgBit(oldp+258,(((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we))));
        bufp->chgBit(oldp+259,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe));
        bufp->chgBit(oldp+260,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+261,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop));
    }
    bufp->chgBit(oldp+262,(vlSelfRef.tb_sys__DOT__clk));
    bufp->chgBit(oldp+263,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_req));
    bufp->chgCData(oldp+264,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_addr),4);
    bufp->chgSData(oldp+265,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr]) 
                               << 8U) | vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr])),16);
    bufp->chgCData(oldp+266,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept),2);
    bufp->chgCData(oldp+267,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue),2);
    bufp->chgCData(oldp+268,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__) 
                               << 4U) | (0x0000000fU 
                                         & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                            >> 1U)))),5);
    bufp->chgCData(oldp+269,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr]),8);
    Vtb_sys___024root__trace_chg_dtype____3(vlSelf, bufp, 270, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem);
    bufp->chgCData(oldp+286,((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port) 
                               << 4U) | (0x0000000fU 
                                         & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                            >> 1U)))),5);
    bufp->chgCData(oldp+287,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr]),8);
    Vtb_sys___024root__trace_chg_dtype____3(vlSelf, bufp, 288, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem);
    bufp->chgCData(oldp+304,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->chgCData(oldp+305,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->chgIData(oldp+306,(vlSelfRef.tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__z),32);
    bufp->chgIData(oldp+307,(vlSelfRef.tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__y),32);
    bufp->chgIData(oldp+308,(vlSelfRef.tb_sys__DOT__u_env__DOT__test_id),32);
    bufp->chgIData(oldp+309,(vlSelfRef.tb_sys__DOT__u_env__DOT__total_errors),32);
}

void Vtb_sys___024root__trace_chg_dtype____0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*18:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_dtype____0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),19);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),19);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),19);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),19);
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

void Vtb_sys___024root__trace_chg_dtype____3(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_dtype____3\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[6]),8);
    bufp->chgCData(oldp+7,(__VdtypeVar[7]),8);
    bufp->chgCData(oldp+8,(__VdtypeVar[8]),8);
    bufp->chgCData(oldp+9,(__VdtypeVar[9]),8);
    bufp->chgCData(oldp+10,(__VdtypeVar[10]),8);
    bufp->chgCData(oldp+11,(__VdtypeVar[11]),8);
    bufp->chgCData(oldp+12,(__VdtypeVar[12]),8);
    bufp->chgCData(oldp+13,(__VdtypeVar[13]),8);
    bufp->chgCData(oldp+14,(__VdtypeVar[14]),8);
    bufp->chgCData(oldp+15,(__VdtypeVar[15]),8);
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
