`timescale 1ns / 1ps
module banked_sram_ctrl #(
    parameter int NUM_BANKS = 4,
    parameter int BANK_DEPTH = 256,
    parameter int DATA_WIDTH = 32,
    parameter int ADDR_WIDTH = 10,
    parameter int NUM_REQ_PORTS = 4,
    parameter int QUEUE_DEPTH = 4,
    parameter int ID_WIDTH = 4
) (
    input logic clk,
    input logic rst_n,

    //Request Ports
    input  logic [NUM_REQ_PORTS-1:0]                      req_valid,
    output logic [NUM_REQ_PORTS-1:0]                      req_ready,
    input  logic [NUM_REQ_PORTS-1:0][     ADDR_WIDTH-1:0] req_addr,
    input  logic [NUM_REQ_PORTS-1:0][     DATA_WIDTH-1:0] req_data,
    input  logic [NUM_REQ_PORTS-1:0][DATA_WIDTH/8 -1 : 0] req_strobe,
    input  logic [NUM_REQ_PORTS-1:0][       ID_WIDTH-1:0] req_id,      //txn_id
    input  logic [NUM_REQ_PORTS-1:0]                      req_we,

    //response ports
    output logic [NUM_REQ_PORTS-1:0] rsp_valid,
    input logic [NUM_REQ_PORTS-1:0] rsp_ready,
    output logic [NUM_REQ_PORTS-1:0][DATA_WIDTH-1:0] rsp_data,
    output logic [NUM_REQ_PORTS-1:0][ID_WIDTH-1:0] rsp_id,
    output logic [NUM_REQ_PORTS-1:0] rsp_err,

    //CSR status port
    input logic csr_req,
    input logic [$clog2(
2*NUM_REQ_PORTS +
                       NUM_BANKS*NUM_REQ_PORTS +
                       NUM_REQ_PORTS +
                       NUM_BANKS
)-1:0] csr_addr,
    output logic [31:0] csr_rdata,
    output logic csr_ack
);
  import sram_ctrl_pkg::*;
  //Derived parameters
  localparam int BANK_SEL_BITS = $clog2(NUM_BANKS);
  localparam int BANK_ADDR_BITS = $clog2(BANK_DEPTH);
  localparam int PORT_ID_BITS = $clog2(NUM_REQ_PORTS);
  localparam int TOTAL_ID_BITS = ID_WIDTH + PORT_ID_BITS;  //txn id + port_bits
  localparam int STROBE_WIDTH = DATA_WIDTH / 8;

  //Validity checks
  initial begin
    if ((NUM_BANKS & (NUM_BANKS - 1)) != 0) $fatal("NUM_BANKS must be a power of 2");
    if ((BANK_DEPTH & (BANK_DEPTH - 1)) != 0) $fatal("BANK_DEPTH must be power of 2");
    if ((QUEUE_DEPTH & (QUEUE_DEPTH - 1)) != 0) $fatal("QUEUE_DEPTH must be power of 2");
    if (NUM_REQ_PORTS < 1 || NUM_REQ_PORTS > 8) $fatal("NUM_REQ_PORTS out of range");
    if (ADDR_WIDTH < (BANK_SEL_BITS + BANK_ADDR_BITS)) $fatal("ADDR_WIDTH too small");
    if (!(DATA_WIDTH inside {8, 16, 32, 64, 128})) $fatal("DATA_WIDTH illegal");
    if (ID_WIDTH < 1 || ID_WIDTH > 8) $fatal("ID_WIDTH out of range");
  end

  //Flat arrays for FIFO datapaths (struct-based wiring)
  logic [NUM_REQ_PORTS-1:0] req_fifo_pop;
  logic [NUM_REQ_PORTS-1:0] req_fifo_head_valid;
  req_pkt_t [NUM_REQ_PORTS-1:0] req_fifo_head_pkt;

  //per-bank request validity
  logic [NUM_BANKS-1:0][NUM_REQ_PORTS-1:0] bank_req_valid;

  //Arbiter grants (per bank)
  logic [NUM_BANKS-1:0] arb_grant_valid;
  logic [NUM_BANKS-1:0][PORT_ID_BITS-1:0] arb_grant_port;
  logic [NUM_BANKS-1:0] arb_grant_ready;
  logic [NUM_BANKS-1:0][NUM_REQ_PORTS-1:0] bank_pop_array;

  //Bank scheduler <-> sram
  logic [NUM_BANKS-1:0] sram_we;
  logic [NUM_BANKS-1:0][BANK_ADDR_BITS-1:0] sram_addr;
  logic [NUM_BANKS-1:0][DATA_WIDTH-1:0] sram_wdata;
  logic [NUM_BANKS-1:0][STROBE_WIDTH-1:0] sram_bwe;
  logic [NUM_BANKS-1:0][DATA_WIDTH-1:0] sram_rdata;

  //PP1 output
  logic [NUM_BANKS-1:0] pp1_valid;
  logic [NUM_BANKS-1:0][DATA_WIDTH-1:0] pp1_rdata;
  logic [NUM_BANKS-1:0][TOTAL_ID_BITS-1:0] pp1_id;
  logic [NUM_BANKS-1:0] pp1_we;
  logic [NUM_BANKS-1:0] pp1_err;

  //Feedback from rsp_mux to bank_scheduler (stall on bank-to-port collision)
  logic [NUM_BANKS-1:0] bank_pp1_ready;

  //Response side
  logic [NUM_REQ_PORTS-1:0] rsp_fifo_push_valid;
  logic [NUM_REQ_PORTS-1:0] rsp_fifo_push_ready;
  logic [NUM_REQ_PORTS-1:0] rsp_fifo_full;

  //Counter events
  logic [NUM_REQ_PORTS-1:0] cnt_req_accept;
  logic [NUM_REQ_PORTS-1:0] cnt_rsp_issue;
  logic [NUM_BANKS-1:0][NUM_REQ_PORTS-1:0] cnt_conflict;
  logic [NUM_BANKS-1:0] cnt_bank_idle;
  logic [NUM_REQ_PORTS-1:0] cnt_queue_full;

  //Per port request queues
  genvar p;
  generate
    for (p = 0; p < NUM_REQ_PORTS; p++) begin : g_req_ports
      req_pkt_t push_pkt;
      assign push_pkt.addr = req_addr[p];
      assign push_pkt.data = req_data[p];
      assign push_pkt.strobe = req_strobe[p];
      assign push_pkt.id = req_id[p];
      assign push_pkt.we = req_we[p];

      assign cnt_req_accept[p] = req_valid[p] && req_ready[p];
      assign cnt_queue_full[p] = !req_ready[p];

      req_fifo #(
          .DATA_WIDTH ($bits(req_pkt_t)),
          .QUEUE_DEPTH(QUEUE_DEPTH)
      ) u_req_fifo (
          .clk(clk),
          .rst_n(rst_n),
          .push_valid(req_valid[p]),
          .push_ready(req_ready[p]),
          .push_data(push_pkt),
          .head_valid(req_fifo_head_valid[p]),
          .head_data(req_fifo_head_pkt[p]),
          .pop(req_fifo_pop[p]),
          .full(),
          .empty()
      );
    end
  endgenerate

  //per-bank arbitration & scheduling grid
  genvar i;
  generate
    for (i = 0; i < NUM_BANKS; i++) begin : g_bank
      always_comb begin
        for (int x = 0; x < NUM_REQ_PORTS; x++) begin
          bank_req_valid[i][x] = req_fifo_head_valid[x] && (req_fifo_head_pkt[x].addr[BANK_SEL_BITS-1:0] == BANK_SEL_BITS'(i));
        end
      end

      per_bank_arb #(
          .NUM_REQ_PORTS(NUM_REQ_PORTS)
      ) u_arb (
          .clk(clk),
          .rst_n(rst_n),
          .req_valid(bank_req_valid[i]),
          .grant_valid(arb_grant_valid[i]),
          .grant_port(arb_grant_port[i]),
          .grant_ready(arb_grant_ready[i]),
          .conflict_mask(cnt_conflict[i])
      );

      //pop the winning port's request queue
      //this creates per-bank pop signals; we OR them outside the generate
      logic [NUM_REQ_PORTS-1:0] bank_pop;
      always_comb begin
        for (int a = 0; a < NUM_REQ_PORTS; a++) begin
          bank_pop[a] = (arb_grant_valid[i] && arb_grant_ready[i] && (arb_grant_port[i] == PORT_ID_BITS'(a)));
        end
      end
      assign bank_pop_array[i] = bank_pop;

      //Mux the winning packet and assemble TOTAL_ID
      req_pkt_t grant_pkt;
      logic [TOTAL_ID_BITS-1:0] grant_id;

      always_comb begin
        grant_pkt = req_fifo_head_pkt[arb_grant_port[i]];
        grant_id  = {arb_grant_port[i], grant_pkt.id};
      end

      bank_scheduler #(
          .ADDR_WIDTH    (ADDR_WIDTH),
          .BANK_SEL_BITS (BANK_SEL_BITS),
          .BANK_ADDR_BITS(BANK_ADDR_BITS),
          .DATA_WIDTH    (DATA_WIDTH),
          .STROBE_WIDTH  (STROBE_WIDTH),
          .TOTAL_ID_BITS (TOTAL_ID_BITS),
          .NUM_REQ_PORTS (NUM_REQ_PORTS),
          .PORT_ID_BITS  (PORT_ID_BITS)
      ) u_scheduler (
          .clk           (clk),
          .rst_n         (rst_n),
          .grant_valid   (arb_grant_valid[i]),
          .grant_addr    (grant_pkt.addr),
          .grant_data    (grant_pkt.data),
          .grant_strobe  (grant_pkt.strobe),
          .grant_we      (grant_pkt.we),
          .grant_id      (grant_id),
          .grant_ready   (arb_grant_ready[i]),
          .sram_we       (sram_we[i]),
          .sram_addr     (sram_addr[i]),
          .sram_wdata    (sram_wdata[i]),
          .sram_bwe      (sram_bwe[i]),
          .sram_rdata    (sram_rdata[i]),
          .pp1_valid     (pp1_valid[i]),
          .pp1_rdata     (pp1_rdata[i]),
          .pp1_id        (pp1_id[i]),
          .pp1_we        (pp1_we[i]),
          .pp1_err       (pp1_err[i]),
          .bank_pp1_ready(bank_pp1_ready[i])
      );

      sram_array #(
          .DEPTH(BANK_DEPTH),
          .DATA_WIDTH(DATA_WIDTH)
      ) u_sram (
          .clk(clk),
          .we(sram_we[i]),
          .addr(sram_addr[i]),
          .wdata(sram_wdata[i]),
          .bwe(sram_bwe[i]),
          .rdata(sram_rdata[i])
      );

      assign cnt_bank_idle[i] = ~|bank_req_valid[i];
    end
  endgenerate

  //OR reduce all per bank pops into per port req fifo pop
  always_comb begin
    integer z, y;
    for (int z = 0; z < NUM_REQ_PORTS; z++) begin
      req_fifo_pop[z] = '0;
      for (int y = 0; y < NUM_BANKS; y++) begin
        req_fifo_pop[z] |= bank_pop_array[y][z];
      end
    end
  end

  //Response Mux + Response Fifos
  logic [NUM_BANKS-1:0][DATA_WIDTH-1:0] mux_pp1_rdata;
  logic [NUM_BANKS-1:0][TOTAL_ID_BITS-1:0] mux_pp1_id;
  logic [NUM_BANKS-1:0] mux_pp1_we;
  logic [NUM_BANKS-1:0] mux_pp1_err;
  logic [NUM_REQ_PORTS-1:0][DATA_WIDTH-1:0] mux_rsp_data;
  logic [NUM_REQ_PORTS-1:0][ID_WIDTH-1:0] mux_rsp_id;
  logic [NUM_REQ_PORTS-1:0] mux_rsp_err;

  always_comb begin
    for (int p = 0; p < NUM_BANKS; p++) begin
      mux_pp1_rdata[p] = pp1_rdata[p];
      mux_pp1_id[p] = pp1_id[p];
      mux_pp1_we[p] = pp1_we[p];
      mux_pp1_err[p] = pp1_err[p];
    end
  end

  rsp_mux #(
      .NUM_BANKS    (NUM_BANKS),
      .NUM_REQ_PORTS(NUM_REQ_PORTS),
      .DATA_WIDTH   (DATA_WIDTH),
      .ID_WIDTH     (ID_WIDTH),
      .TOTAL_ID_BITS(TOTAL_ID_BITS),
      .PORT_ID_BITS (PORT_ID_BITS)
  ) u_rsp_mux (
      .pp1_valid     (pp1_valid),
      .pp1_rdata     (mux_pp1_rdata),
      .pp1_id        (mux_pp1_id),
      .pp1_we        (mux_pp1_we),
      .pp1_err       (mux_pp1_err),
      .rsp_valid     (rsp_fifo_push_valid),
      .rsp_data      (mux_rsp_data),
      .rsp_id        (mux_rsp_id),
      .rsp_err       (mux_rsp_err),
      .rsp_fifo_ready(rsp_fifo_push_ready),
      .bank_pp1_ready(bank_pp1_ready)
  );

  //response fifo + counter connection
  generate
    for (p = 0; p < NUM_REQ_PORTS; p++) begin : g_rsp_ports
      rsp_pkt_t push_pkt, pop_pkt;
      assign push_pkt.data = mux_rsp_data[p];
      assign push_pkt.id = mux_rsp_id[p];
      assign push_pkt.err = mux_rsp_err[p];

      assign cnt_rsp_issue[p] = rsp_valid[p] && rsp_ready[p];

      rsp_fifo #(
          .DATA_WIDTH ($bits(rsp_pkt_t)),
          .QUEUE_DEPTH(QUEUE_DEPTH)
      ) u_rsp_fifo (
          .clk       (clk),
          .rst_n     (rst_n),
          .push_valid(rsp_fifo_push_valid[p]),
          .push_ready(rsp_fifo_push_ready[p]),
          .push_data (push_pkt),
          .pop_valid (rsp_valid[p]),
          .pop_ready (rsp_ready[p]),
          .pop_data  (pop_pkt),
          .full      (rsp_fifo_full[p]),
          .empty     ()
      );

      assign rsp_data[p] = pop_pkt.data;
      assign rsp_id[p]   = pop_pkt.id;
      assign rsp_err[p]  = pop_pkt.err;
    end
  endgenerate

  //performance counters
  perf_counter #(
      .NUM_REQ_PORTS(NUM_REQ_PORTS),
      .NUM_BANKS    (NUM_BANKS),
      .ID_WIDTH     (ID_WIDTH)
  ) u_perf (
      .clk           (clk),
      .rst_n         (rst_n),
      .req_accept    (cnt_req_accept),
      .rsp_issue     (cnt_rsp_issue),
      .conflict      (cnt_conflict),
      .req_queue_full(cnt_queue_full),
      .bank_idle     (cnt_bank_idle),
      .csr_req       (csr_req),
      .csr_addr      (csr_addr),
      .csr_rdata     (csr_rdata),
      .csr_ack       (csr_ack)
  );
endmodule
