module rsp_mux #(
    parameter int NUM_BANKS = 4,
    parameter int NUM_REQ_PORTS = 4,
    parameter int DATA_WIDTH = 32,
    parameter int ID_WIDTH = 4,
    parameter int TOTAL_ID_BITS = 6,
    parameter int PORT_ID_BITS = 2
) (
    input logic [NUM_BANKS-1:0] pp1_valid,
    input logic [NUM_BANKS-1:0][DATA_WIDTH-1:0] pp1_rdata,  //packed array
    input logic [NUM_BANKS-1:0][TOTAL_ID_BITS-1:0] pp1_id,
    input logic [NUM_BANKS-1:0] pp1_we,
    input logic [NUM_BANKS-1:0] pp1_err,

    //To response queues
    output logic [NUM_REQ_PORTS-1:0] rsp_valid,
    output logic [NUM_REQ_PORTS-1:0][DATA_WIDTH-1:0] rsp_data,
    output logic [NUM_REQ_PORTS-1:0][ID_WIDTH-1:0] rsp_id,
    output logic [NUM_REQ_PORTS-1:0] rsp_err,

    //Backpressure: which response queue can accept a push?
    input logic [NUM_REQ_PORTS-1:0] rsp_fifo_ready,

    // Back to each bank scheduler (per bank): your PP1 can advance this cycle
    output logic [NUM_BANKS-1:0] bank_pp1_ready
);
  //Extract destination port per bank
  logic [NUM_BANKS-1:0][PORT_ID_BITS-1:0] dest_ports;
  //local variables declared outside always_comb blocks
  logic [PORT_ID_BITS-1:0] p;
  logic found;

  genvar i;
  generate
    for (i = 0; i < NUM_BANKS; i++) begin : g_dest
      assign dest_ports[i] = pp1_id[i][TOTAL_ID_BITS-1:ID_WIDTH];
    end
  endgenerate

  //per-port grant matrix: which bank wins this port?
  logic [NUM_BANKS-1:0] bank_granted;
  always_comb begin
    bank_granted = '0;
    //For each port, grant the lowest-indexed bank req it
    for (int i = 0; i < NUM_REQ_PORTS; i++) begin
      found = 1'b0;
      for (int x = 0; x < NUM_BANKS; x++) begin
        if (!found && pp1_valid[x] && (int'(dest_ports[x]) == i) && rsp_fifo_ready[i]) begin
          bank_granted[x] = 1'b1;
          found = 1'b1;
        end
      end
    end
  end

  //Package output for response port
  always_comb begin
    rsp_valid = '0;
    rsp_data = '0;
    rsp_err = '0;
    rsp_id = '0;

    for (int x = 0; x < NUM_BANKS; x++) begin
      p = dest_ports[x];
      if (bank_granted[x]) begin
        rsp_valid[p] = 1'b1;
        rsp_data[p] = pp1_we[x] ? '0 : pp1_rdata[x];  //zero data on writes
        rsp_err[p] = pp1_err[x];
        rsp_id[p] = pp1_id[x][ID_WIDTH-1:0];  //Just the txn_id for request
      end
    end
  end

  //Banks PP1 can advance if: PP1 is invalid or (granted by rsp_mux and its target port accepts push)
  always_comb begin : pp1_adv
    for (int x = 0; x < NUM_BANKS; x++) begin
      if (!pp1_valid[x]) begin
        bank_pp1_ready[x] = 1'b1;
      end else if (bank_granted[x]) begin
        bank_pp1_ready[x] = 1'b1;
      end else begin
        bank_pp1_ready[x] = 1'b0;  //stalled -- another bank got this port or rsp_fifo -> full
      end
    end
  end
endmodule
