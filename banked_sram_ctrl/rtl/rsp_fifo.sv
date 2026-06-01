//response side fifo
//Synchronous

module rsp_fifo #(
    parameter int DATA_WIDTH  = 64,  //Wdith of rsp_pkt_t
    parameter int QUEUE_DEPTH = 4
) (
    input logic clk,
    input logic rst_n,

    //Push from response mux
    input  logic                  push_valid,
    output logic                  push_ready,  // = !full
    input  logic [DATA_WIDTH-1:0] push_data,

    //Pop to requestor
    output logic                  pop_valid,  // = !empty
    input  logic                  pop_ready,
    output logic [DATA_WIDTH-1:0] pop_data,

    //Status
    output logic full,
    output logic empty
);
  localparam int ptr_width = $clog2(QUEUE_DEPTH);

  logic [DATA_WIDTH-1:0] fifo_mem[0:QUEUE_DEPTH-1];
  logic [ptr_width-1:0] wr_ptr, rd_ptr;
  logic [ptr_width:0] occupancy;

  assign push_ready = (occupancy < QUEUE_DEPTH);
  assign pop_valid = (occupancy != 0);
  assign full = (occupancy == QUEUE_DEPTH);
  assign empty = (occupancy == 0);
  assign pop_data = fifo_mem[rd_ptr];  // Registered output — rd_ptr flops address

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      wr_ptr <= '0;
      rd_ptr <= '0;
      occupancy <= '0;
    end else begin
      case ({
        push_valid && push_ready, pop_valid && pop_ready
      })
        2'b10:   occupancy <= occupancy + 1'b1;
        2'b01:   occupancy <= occupancy - 1'b1;
        default: occupancy <= occupancy;
      endcase
      if (push_valid && push_ready) begin
        fifo_mem[wr_ptr] <= push_data;
        wr_ptr <= wr_ptr + 1'b1;
      end
      if (pop_ready && pop_valid) begin
        rd_ptr <= rd_ptr + 1'b1;
      end
    end
  end
endmodule
