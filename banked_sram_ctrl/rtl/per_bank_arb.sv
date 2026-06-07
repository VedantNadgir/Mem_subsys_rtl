module per_bank_arb #(
    parameter int NUM_REQ_PORTS = 4
) (
    input logic clk,
    input logic rst_n,

    //Request vector from top level (alr bank filtered)
    input logic [NUM_REQ_PORTS-1:0] req_valid,

    //Grant output (stable when grant_ready=0)
    output logic grant_valid,
    output logic [$clog2(NUM_REQ_PORTS)-1:0] grant_port,

    //Backpressure from downstream pipeline
    input logic grant_ready,
    output logic [NUM_REQ_PORTS-1:0] conflict_mask
);
  localparam int port_width = $clog2(NUM_REQ_PORTS);
  logic [port_width-1:0] priority_ptr;
  logic contention;  //multiple requests

  //Detect Contention (if >1 req) so we only rotate pointer when true arbitration occurs
  always_comb begin
    contention = ($countones(req_valid) > 1);
  end

  //Combinational next-state
  logic grant_valid_nxt;
  logic [port_width-1:0] grant_port_nxt;

  //Registered output (held when grant_ready=0)
  logic grant_valid_q;
  logic [port_width-1:0] grant_port_q;

  //Combinational priority search: start at priority_ptr, wrap around
  always_comb begin
    grant_port_nxt  = '0;
    grant_valid_nxt = 1'b0;
    for (int i = 0; i < NUM_REQ_PORTS; i++) begin
      //NUM_REQ_PORTS need not be a power of 2; costs a bit of gates for modulo operation
      int idx = (priority_ptr + i) % NUM_REQ_PORTS;
      if (!grant_port_nxt && req_valid[idx]) begin
        grant_port_nxt  = port_width'(idx);
        grant_valid_nxt = 1'b1;
      end
    end
  end
  //conflict mask: 1-hot of ports that presented a valid request but lost
  always_comb begin
    conflict_mask = '0;
    if (contention) begin
      for (int i = 0; i < NUM_REQ_PORTS; i++) begin
        conflict_mask[i] = (req_valid[i] && grant_port_nxt != i);
      end
    end
  end

  //Hold registers: update only when grant_ready is high OR when currently idle
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      grant_port_q  <= '0;
      grant_valid_q <= 1'b0;
    end else if (grant_valid || !grant_valid_q) begin
      grant_valid_q <= grant_valid_nxt;
      grant_port_q  <= grant_port_nxt;
    end
  end

  assign grant_valid = grant_valid_q;
  assign grant_port  = grant_port_q;

  //priority pointer update
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      priority_ptr <= '0;
    end else begin
      if (grant_valid && grant_ready && contention) begin
        priority_ptr <= (grant_port + 1'b1) % NUM_REQ_PORTS;
      end
    end
  end
endmodule
