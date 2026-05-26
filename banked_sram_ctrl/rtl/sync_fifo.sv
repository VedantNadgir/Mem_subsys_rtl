//Fall through style FIFO: Fall-through FIFOs (also known as First Word Fall Through or FWFT) are a variant of First-In-First-Out memory
//where the first data word written to an empty FIFO becomes immediately available at the output,
//bypassing the typical one-clock-cycle latency found in standard synchronous FIFOs.

module sync_fifo #(
    parameter int QUEUE_DEPTH = 4,
    parameter int DATA_WIDTH  = 32
) (
    input logic clk,
    input logic rst_n,

    //Producer side (requestor --> FIFO queue)
    input logic                  valid_in,
    input logic [DATA_WIDTH-1:0] data_in,
    input logic                  ready_out,

    //Consumer side (FIFO queue --> arbiter)
    output logic                  valid_out,
    output logic [DATA_WIDTH-1:0] data_out,
    output logic                  ready_in
);

  localparam int ptr_width = $clog2(
      QUEUE_DEPTH
  ) + 1;  // Pointer width = $clog2(QUEUE_DEPTH) + 1 (extra bit for full/empty distinction)
  localparam int depth_width = $clog2(QUEUE_DEPTH);

  logic [DATA_WIDTH-1:0] fifo_mem[0:QUEUE_DEPTH-1];
  logic [ptr_width-1:0] wr_ptr;
  logic [ptr_width-1:0] rd_ptr;

  logic [ptr_width-1:0] occupancy;
  logic [ptr_width-1:0] nxt_occupancy;
  logic empty;
  logic full;
  logic nxt_full;
  logic wr_accept;
  logic rd_accept;

  assign occupancy = wr_ptr - rd_ptr;

  assign empty = (occupancy == '0);
  assign full = (occupancy == ptr_width'(QUEUE_DEPTH)); //to match same bit length during comparision
  assign wr_accept = valid_in && ready_out;
  assign rd_accept = valid_out && ready_in;

  assign nxt_occupancy = occupancy + ptr_width'(wr_accept) - ptr_width'(rd_accept); // After this cycle: add 1 if write, subtract 1 if read
  assign nxt_full = (nxt_occupancy == ptr_width'(QUEUE_DEPTH));

  assign valid_out = !empty;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      wr_ptr <= '0;
      rd_ptr <= '0;
      data_out <= '0;
      ready_out <= 1'b1;  //ready to accept writes
    end else begin
      //write side
      if (wr_accept) begin
        fifo_mem[wr_ptr[depth_width-1:0]] <= data_in;
        wr_ptr <= wr_ptr + 1'b1;
      end

      //read side
      if (rd_accept) begin
        rd_ptr <= rd_ptr + 1'b1;
      end

      if (rd_accept) begin
        if ((occupancy == 1) && wr_accept) begin
          data_out <= data_in;
        end else if (occupancy > 1) begin
          logic [ptr_width-1:0] rd_ptr_plus1 = rd_ptr + 1'b1;
          data_out <= fifo_mem[rd_ptr_plus1[depth_width-1:0]];
        end

      end else if (empty && wr_accept) begin
        data_out <= data_in;
      end

      ready_out <= !nxt_full;
    end
  end
endmodule

//Instantiation of req_fifo and rsp_fifo
//   sync_fifo #(
//     .QUEUE_DEPTH(8),
//     .DATA_WIDTH(32)
//   ) req_fifo(
//     .clk(clk),
//     .rst_n(rst_n),
//     .valid_in(req_valid_in),
//     .data_in(req_data_in),
//     .ready_out(req_ready_out),
//     .valid_out(req_valid_out),
//     .data_out(req_data_out),
//     .ready_in(req_ready_in)
//   );

//     sync_fifo #(
//     .QUEUE_DEPTH(4),
//     .DATA_WIDTH(32)
//   ) u_rsp_fifo (
//     .clk(clk),
//     .rst_n(rst_n),
//     .valid_in(rsp_valid_in),
//     .data_in(rsp_data_in),
//     .ready_out(rsp_ready_out),
//     .valid_out(rsp_valid_out),
//     .data_out(rsp_data_out),
//     .ready_in(rsp_ready_in)
//   );
