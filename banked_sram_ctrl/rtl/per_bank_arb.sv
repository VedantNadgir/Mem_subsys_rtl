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
  logic [port_width-1:0] ptr;
  logic contention;
  always_comb contention = ($countones(req_valid) > 1);
  //Rotate --> Priority encode --> Rotate (Modified RR)
  //Step 1: rotate req_valid right by priority_ptr
  //Step 2: priority encode - isolate lowest set bit of rotate r exactly 1 bit set in priority_out (winner in rotated space)
  //Step 3: rotate priority_out left by ptr, grant = 1 hot winner in original port numbering
  logic [NUM_REQ_PORTS-1:0] tmp_r, rotate_r;
  logic [NUM_REQ_PORTS-1:0] priority_out;
  logic [NUM_REQ_PORTS-1:0] grant, tmp_l;

  assign {tmp_r, rotate_r} = ({2{req_valid}} >> ptr);
  assign priority_out = rotate_r & ~(rotate_r - 1'b1);
  assign {grant, tmp_l} = ({2{priority_out}} << ptr);

  //1 hot grant --> binary grant port
  always_comb begin
    grant_valid = |grant;
    grant_port  = '0;
    for (int i = 0; i < NUM_REQ_PORTS; i++) begin
      if (grant[i]) begin
        grant_port = port_width'(i);
      end
    end
  end

  //Priority pointer update
  //Advance if:
  //grant_valid = 1
  //grant_ready = 1 (pp0 consumed the grant this cycle)
  //contention = 1 (No rotation on single port grants)
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      ptr <= 0;
    end else begin
      if (grant_valid && grant_ready && contention) begin
        ptr <= port_width'((int'(grant_port) + 1) % NUM_REQ_PORTS);
      end
    end
  end

  //Conflict mask: 1-hot of ports that presented a valid request but lost
  always_comb begin
    conflict_mask = '0;
    if (grant_valid && contention) begin
      conflict_mask = req_valid & ~grant;
    end
  end
endmodule
