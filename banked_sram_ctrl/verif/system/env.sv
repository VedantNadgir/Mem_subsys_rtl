`timescale 1ns / 1ps
module env #(
    parameter int NUM_BANKS = 4,
    parameter int BANK_DEPTH = 256,
    parameter int DATA_WIDTH = 32,
    parameter int ADDR_WIDTH = 10,
    parameter int NUM_REQ_PORTS = 4,
    parameter int QUEUE_DEPTH = 4,
    parameter int ID_WIDTH = 4
) (
    input  logic                                       clk,
    input  logic                                       rst_n,
    output logic [NUM_REQ_PORTS-1:0]                   req_valid,
    input  logic [NUM_REQ_PORTS-1:0]                   req_ready,
    output logic [NUM_REQ_PORTS-1:0][  ADDR_WIDTH-1:0] req_addr,
    output logic [NUM_REQ_PORTS-1:0][  DATA_WIDTH-1:0] req_data,
    output logic [NUM_REQ_PORTS-1:0][STROBE_WIDTH-1:0] req_strobe,
    output logic [NUM_REQ_PORTS-1:0][    ID_WIDTH-1:0] req_id,
    output logic [NUM_REQ_PORTS-1:0]                   req_we,
    input  logic [NUM_REQ_PORTS-1:0]                   rsp_valid,
    output logic [NUM_REQ_PORTS-1:0]                   rsp_ready,
    input  logic [NUM_REQ_PORTS-1:0][  DATA_WIDTH-1:0] rsp_data,
    input  logic [NUM_REQ_PORTS-1:0][    ID_WIDTH-1:0] rsp_id,
    input  logic [NUM_REQ_PORTS-1:0]                   rsp_err,
    output logic                                       csr_req,
    output logic [   CSR_ADDR_W-1:0]                   csr_addr_out,
    input  logic [             31:0]                   csr_rdata,
    input  logic                                       csr_ack
);
  localparam int STROBE_WIDTH = DATA_WIDTH / 8;
  localparam int BANK_SEL_BITS = $clog2(NUM_BANKS);
  localparam int BANK_ADDR_BITS = $clog2(BANK_DEPTH);
  localparam int CSR_ADDR_W = $clog2(
      2 * NUM_REQ_PORTS + NUM_BANKS * NUM_REQ_PORTS + NUM_REQ_PORTS + NUM_BANKS
  );
  localparam int MAX_ADDR = (1 << ADDR_WIDTH) - 1;

  function automatic logic [ADDR_WIDTH-1:0] make_addr(input int bank, input int row);
    return ADDR_WIDTH'({row[BANK_ADDR_BITS-1:0], bank[BANK_SEL_BITS-1:0]});
  endfunction

  logic [NUM_REQ_PORTS-1:0]                   drv_req_valid;
  logic [NUM_REQ_PORTS-1:0][  ADDR_WIDTH-1:0] drv_req_addr;
  logic [NUM_REQ_PORTS-1:0][  DATA_WIDTH-1:0] drv_req_data;
  logic [NUM_REQ_PORTS-1:0][STROBE_WIDTH-1:0] drv_req_strobe;
  logic [NUM_REQ_PORTS-1:0][    ID_WIDTH-1:0] drv_req_id;
  logic [NUM_REQ_PORTS-1:0]                   drv_req_we;
  logic                                       drv_csr_req;
  logic [   CSR_ADDR_W-1:0]                   drv_csr_addr;
  logic [NUM_REQ_PORTS-1:0]                   mon_rsp_ready;

  assign req_valid    = drv_req_valid;
  assign req_addr     = drv_req_addr;
  assign req_data     = drv_req_data;
  assign req_strobe   = drv_req_strobe;
  assign req_id       = drv_req_id;
  assign req_we       = drv_req_we;
  assign csr_req      = drv_csr_req;
  assign csr_addr_out = drv_csr_addr;
  assign rsp_ready    = mon_rsp_ready;

  driver #(
      .NUM_BANKS(NUM_BANKS),
      .BANK_DEPTH(BANK_DEPTH),
      .DATA_WIDTH(DATA_WIDTH),
      .ADDR_WIDTH(ADDR_WIDTH),
      .NUM_REQ_PORTS(NUM_REQ_PORTS),
      .QUEUE_DEPTH(QUEUE_DEPTH),
      .ID_WIDTH(ID_WIDTH)
  ) u_drv (
      .clk(clk),
      .rst_n(rst_n),
      .req_valid(drv_req_valid),
      .req_ready(req_ready),
      .req_addr(drv_req_addr),
      .req_data(drv_req_data),
      .req_strobe(drv_req_strobe),
      .req_id(drv_req_id),
      .req_we(drv_req_we),
      .csr_req(drv_csr_req),
      .csr_addr(drv_csr_addr),
      .csr_rdata(csr_rdata),
      .csr_ack(csr_ack)
  );

  monitor #(
      .NUM_BANKS(NUM_BANKS),
      .BANK_DEPTH(BANK_DEPTH),
      .DATA_WIDTH(DATA_WIDTH),
      .ADDR_WIDTH(ADDR_WIDTH),
      .NUM_REQ_PORTS(NUM_REQ_PORTS),
      .QUEUE_DEPTH(QUEUE_DEPTH),
      .ID_WIDTH(ID_WIDTH)
  ) u_mon (
      .clk(clk),
      .rst_n(rst_n),
      .rsp_valid(rsp_valid),
      .rsp_ready(mon_rsp_ready),
      .rsp_data(rsp_data),
      .rsp_id(rsp_id),
      .rsp_err(rsp_err)
  );

  scoreboard #(
      .NUM_BANKS(NUM_BANKS),
      .BANK_DEPTH(BANK_DEPTH),
      .DATA_WIDTH(DATA_WIDTH),
      .ADDR_WIDTH(ADDR_WIDTH),
      .NUM_REQ_PORTS(NUM_REQ_PORTS),
      .QUEUE_DEPTH(QUEUE_DEPTH),
      .ID_WIDTH(ID_WIDTH)
  ) u_sb (
      .clk  (clk),
      .rst_n(rst_n)
  );
  int test_id = 0;
  int total_errors = 0;

  task automatic reset_dut();
    repeat (4) @(posedge clk);
    #1;
    for (int a = 0; a <= MAX_ADDR; a++) begin
      u_sb.gold_mem[a]  = '0;
      u_sb.gold_init[a] = 0;
    end
    $display("[ENV] Reset released at %0t", $time);
    repeat (2) @(posedge clk);
    #1;
  endtask

  task automatic do_write(input int port, input logic [ADDR_WIDTH-1:0] addr,
                          input logic [DATA_WIDTH-1:0] data, input logic [STROBE_WIDTH-1:0] strobe,
                          input logic [ID_WIDTH-1:0] txn_id);

    logic [DATA_WIDTH-1:0] rd;
    logic [ID_WIDTH-1:0] ri;
    logic re;
    u_drv.send(port, data, addr, 1'b1, strobe, txn_id);
    u_mon.wait_rsp(port, rd, ri, re);
    u_sb.check_write_ack(rd, ri, txn_id, re);
    u_sb.predict_write(addr, data, strobe);
  endtask

  task automatic do_read(input int port, input logic [ADDR_WIDTH-1:0] addr,
                         input logic [ID_WIDTH-1:0] txn_id);
    logic [DATA_WIDTH-1:0] rd;
    logic [ID_WIDTH-1:0] ri;
    logic re;
    u_drv.send(port, '0, addr, 1'b0, '1, txn_id);
    u_mon.wait_rsp(port, rd, ri, re);
    u_sb.check_read(addr, rd, ri, txn_id, re);
  endtask

  task automatic do_csr(input logic [CSR_ADDR_W-1:0] addr, output logic [31:0] val);
    u_drv.csr_read(addr, val);
  endtask

  `include "tests/smoke.sv"
  `include "tests/conflict.sv"
  `include "tests/backpressure.sv"
  `include "tests/random.sv"
  `include "tests/stress.sv"

  task automatic run_all();
    run_smoke();
    run_conflict();
    run_backpressure();
    run_random();
    run_stress();
    u_sb.report();
    total_errors = u_sb.error_count;
  endtask
endmodule
