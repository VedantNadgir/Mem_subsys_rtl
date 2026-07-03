`timescale 1ns / 1ps
import verif_pkg::*;

module tb_sys;
  logic clk;
  logic rst_n;
  initial clk = 1'b0;
  always #5 clk = ~clk;

  logic [NUM_REQ_PORTS-1:0] req_valid, req_ready, req_we;
  logic [NUM_REQ_PORTS-1:0][  ADDR_WIDTH-1:0] req_addr;
  logic [NUM_REQ_PORTS-1:0][  DATA_WIDTH-1:0] req_data;
  logic [NUM_REQ_PORTS-1:0][STROBE_WIDTH-1:0] req_strobe;
  logic [NUM_REQ_PORTS-1:0][    ID_WIDTH-1:0] req_id;
  logic [NUM_REQ_PORTS-1:0] rsp_valid, rsp_ready, rsp_err;
  logic [NUM_REQ_PORTS-1:0][DATA_WIDTH-1:0] rsp_data;
  logic [NUM_REQ_PORTS-1:0][  ID_WIDTH-1:0] rsp_id;
  logic                                     csr_req;
  logic [   CSR_ADDR_W-1:0]                 csr_addr_sig;
  logic [             31:0]                 csr_rdata;
  logic                                     csr_ack;

  banked_sram_ctrl #(
      .NUM_BANKS(NUM_BANKS),
      .BANK_DEPTH(BANK_DEPTH),
      .DATA_WIDTH(DATA_WIDTH),
      .ADDR_WIDTH(ADDR_WIDTH),
      .NUM_REQ_PORTS(NUM_REQ_PORTS),
      .QUEUE_DEPTH(QUEUE_DEPTH),
      .ID_WIDTH(ID_WIDTH)
  ) u_dut (
      .clk(clk),
      .rst_n(rst_n),
      .req_valid(req_valid),
      .req_ready(req_ready),
      .req_addr(req_addr),
      .req_data(req_data),
      .req_strobe(req_strobe),
      .req_id(req_id),
      .req_we(req_we),
      .rsp_valid(rsp_valid),
      .rsp_ready(rsp_ready),
      .rsp_data(rsp_data),
      .rsp_id(rsp_id),
      .rsp_err(rsp_err),
      .csr_req(csr_req),
      .csr_addr(csr_addr_sig),
      .csr_rdata(csr_rdata),
      .csr_ack(csr_ack)
  );

  env u_env (
      .clk(clk),
      .rst_n(rst_n),
      .req_valid(req_valid),
      .req_ready(req_ready),
      .req_addr(req_addr),
      .req_data(req_data),
      .req_strobe(req_strobe),
      .req_id(req_id),
      .req_we(req_we),
      .rsp_valid(rsp_valid),
      .rsp_ready(rsp_ready),
      .rsp_data(rsp_data),
      .rsp_id(rsp_id),
      .rsp_err(rsp_err),
      .csr_req(csr_req),
      .csr_addr_out(csr_addr_sig),
      .csr_rdata(csr_rdata),
      .csr_ack(csr_ack)
  );
  initial begin
    #500_000;
    $display("[WATCHDOG] Expired");
    $finish;
  end
  initial begin
    rst_n = 0;
    repeat (4) @(posedge clk);
    #1;
    rst_n = 1;
    u_env.reset_dut();
    u_env.run_all();
    $display("\n========================================");
    $display("  RESULT: %s", u_env.total_errors == 0 ? "ALL PASSED" : $sformatf
             ("%0d ERRORS", u_env.total_errors));
    $display("========================================\n");
    $finish;
  end
endmodule
