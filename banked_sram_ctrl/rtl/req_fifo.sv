//request side fifo
//Synchronous
`timescale 1ns / 1ps

module req_fifo #(
    parameter int DATA_WIDTH  = 64,  //Width of req_pkt_t
    parameter int QUEUE_DEPTH = 4
) (
    input logic clk,
    input logic rst_n,

    // Push interface (from requestor)
    input  logic                  push_valid,
    output logic                  push_ready,
    input  logic [DATA_WIDTH-1:0] push_data,

    //Head interface (to arbiter - combinational)
    output logic                  head_valid,
    output logic [DATA_WIDTH-1:0] head_data,

    //Pop control (from top-level arbiter grant logic)
    input logic pop,

    //Status
    output logic full,
    output logic empty
);
  localparam int ptr_width = $clog2(QUEUE_DEPTH);

  logic [DATA_WIDTH-1:0] fifo_mem[0:QUEUE_DEPTH-1];
  logic [ptr_width-1:0] wr_ptr, rd_ptr;
  logic [ptr_width:0] occupancy, nxt_occupancy;  //extra bit for full/empty logic

  //Combinational head - memory read is async; rd_ptr maay advance in same cycle
  //logic [ptr_width-1:0] nxt_rd_ptr;
  //assign nxt_rd_ptr = (pop && !empty) ? rd_ptr + 1'b1 : rd_ptr;
  assign head_data = fifo_mem[rd_ptr];  //fifo_mem[nxt_rd_ptr];
  assign head_valid = (occupancy != 0);
  assign full = (32'(occupancy) == QUEUE_DEPTH);
  assign empty = (occupancy == 0);

  always_comb begin
    nxt_occupancy = occupancy;
    if (push_valid && push_ready) nxt_occupancy++;
    if (pop && !empty) nxt_occupancy--;
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      wr_ptr <= '0;
      rd_ptr <= '0;
      occupancy <= '0;
      push_ready <= 1'b1;
    end else begin
      if (push_valid && push_ready) begin
        fifo_mem[wr_ptr] <= push_data;
        wr_ptr <= wr_ptr + 1'b1;
      end
      if (pop && !empty) begin
        rd_ptr <= rd_ptr + 1'b1;
      end
      occupancy  <= nxt_occupancy;
      push_ready <= (32'(nxt_occupancy) < QUEUE_DEPTH);
    end
  end
endmodule
