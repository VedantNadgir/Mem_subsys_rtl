module perf_counter #(
    parameter int NUM_REQ_PORTS = 4,
    parameter int NUM_BANKS = 4,
    parameter int ID_WIDTH = 4
) (
    input logic clk,
    input logic rst_n,

    //event strobes (1 cycle per event)
    input logic [NUM_REQ_PORTS-1:0] req_accept,  //request pushed to req_fifo
    input logic [NUM_REQ_PORTS-1:0] rsp_issue,  //response popped from rsp_fifo
    input logic [NUM_BANKS-1:0][NUM_REQ_PORTS-1:0] conflict,  //arbiter lost per bank/port
    input logic [NUM_REQ_PORTS-1:0] req_queue_full,
    input logic [NUM_BANKS-1:0] bank_idle,  //no req_valid for this bank this cycle

    //CSR read port
    input logic csr_req,
    input logic [$clog2(
2*NUM_REQ_PORTS +
                    NUM_BANKS*NUM_REQ_PORTS +
                    NUM_REQ_PORTS + NUM_BANKS
)-1:0] csr_addr,
    output logic [31:0] csr_rdata,
    output logic csr_ack
);
  localparam int N_counter = (2*NUM_REQ_PORTS +NUM_BANKS*NUM_REQ_PORTS +
                    NUM_REQ_PORTS + NUM_BANKS);
  localparam int AW = $clog2(N_counter);
  logic [31:0] counter[0:N_counter-1];

  //address decode helpers
  localparam int OFF_REQ = 0;
  localparam int OFF_RSP = NUM_REQ_PORTS;
  localparam int OFF_CONF = 2 * NUM_REQ_PORTS;
  localparam int OFF_QF = OFF_CONF + NUM_BANKS * NUM_REQ_PORTS;
  localparam int OFF_IDLE = OFF_QF + NUM_REQ_PORTS;

  //Increment logic (saturating)
  function automatic logic [31:0] sat_inc(logic [31:0] val, logic en);
    return en ? ((val == 32'hFFFF_FFFF) ? val : val + 1'b1) : val;
  endfunction

  integer i, x;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      for (i = 0; i < N_counter; i++) counter[i] <= 32'd0;
    end else begin
      //req_count
      for (i = 0; i < NUM_REQ_PORTS; i++) begin
        counter[OFF_REQ+i] <= sat_inc(counter[OFF_REQ+i], req_accept[i]);
      end
      //rsp_count
      for (i = 0; i < NUM_REQ_PORTS; i++) begin
        counter[OFF_RSP+i] <= sat_inc(counter[OFF_RSP+i], rsp_issue[i]);
      end

      //conflict_count[bank][port]
      for (b = 0; b < NUM_BANKS; b++) begin
        for (i = 0; i < NUM_REQ_PORTS; i++) begin
          counter[OFF_CONF+b*NUM_REQ_PORTS+i] <=
              sat_inc(counter[OFF_CONF+b*NUM_REQ_PORTS+i], conflict[b][i]);
        end
      end

      // queue_full_count
      for (i = 0; i < NUM_REQ_PORTS; i++) begin
        counter[OFF_QF+i] <= sat_inc(counter[OFF_QF+i], req_queue_full[i]);
      end

      // idle_count
      for (b = 0; b < NUM_BANKS; b++) begin
        counter[OFF_IDLE+b] <= sat_inc(counter[OFF_IDLE+b], bank_idle[b]);
      end
    end
  end

  //registered read
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      csr_rdata <= 32'd0;
      csr_ack   <= 1'b0;
    end else begin
      csr_ack <= csr_req;
      if (csr_req) begin
        csr_rdata <= counter[csr_addr];
      end
    end
  end
endmodule
