
module per_bank_arb #(
    parameter int NUM_REQ_PORTS = 4
) (
    input                                    clk,
    input                                    rst_n,
    input  logic [        NUM_REQ_PORTS-1:0] req_valid,
    output logic [$clog2(NUM_REQ_PORTS)-1:0] grant_port,
    output logic                             grant_valid
);
  localparam int PORT_ID_BITS = $clog2(NUM_REQ_PORTS);
  logic [PORT_ID_BITS-1:0] priority_ptr;
  logic [PORT_ID_BITS:0] valid_count;
  logic contention;
  logic [PORT_ID_BITS-1:0] selected_port;

  //count requests
  always_comb begin
    valid_count = '0;
    for (int i = 0; i < NUM_REQ_PORTS; i++) begin
      valid_count += req_valid[i];
    end
  end

  assign contention  = (valid_count > 1);
  assign grant_valid = (valid_count > 0);

  //round robin
  always_comb begin
    selected_port = '0;
    for (int i = 0; i < NUM_REQ_PORTS; i++) begin
      int idx = (priority_ptr + i) % NUM_REQ_PORTS;
      if (req_valid[idx] && (selected_port === '0)) begin
        selected_port = idx;
      end
    end
  end

  assign grant_port = selected_port;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      priority_ptr <= '0;
    end else if (grant_valid && contention) begin
      priority_ptr <= (grant_port + 1'b1) % NUM_REQ_PORTS;
    end
  end
endmodule
