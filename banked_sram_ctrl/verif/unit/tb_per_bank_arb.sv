// tb_req_fifo.sv
// 1. Clock generation
// 2. Reset generation
// 3. DUT instantiation
// 4. Helper tasks
// 5. Directed tests
// 6. Pass/fail summary

`timescale 1ns / 1ps

module tb_per_bank_arb;

  initial begin
    $dumpfile("waves/per_bank_arb.vcd");
    $dumpvars(0, tb_per_bank_arb);
  end
  initial begin
    #600ns;
    $display("WATCHDOG EXPIRED");
    $finish;
  end

  //Parameter
  localparam int NUM_REQ_PORTS = 4;

  //DUT signals
  logic clk;
  logic rst_n;

  //Request vector from top level (alr bank filtered)
  logic [NUM_REQ_PORTS-1:0] req_valid;

  //Grant output (stable when grant_ready=0)
  logic grant_valid;
  logic [$clog2(NUM_REQ_PORTS)-1:0] grant_port;

  //Backpressure from downstream pipeline
  logic grant_ready;
  logic [NUM_REQ_PORTS-1:0] conflict_mask;

  //Test Variables

  //DUT instantiation
  per_bank_arb #(
      .NUM_REQ_PORTS(NUM_REQ_PORTS)
  ) dut (
      .clk(clk),
      .rst_n(rst_n),
      .req_valid(req_valid),
      .grant_valid(grant_valid),
      .grant_port(grant_port),
      .grant_ready(grant_ready),
      .conflict_mask(conflict_mask)
  );
endmodule
