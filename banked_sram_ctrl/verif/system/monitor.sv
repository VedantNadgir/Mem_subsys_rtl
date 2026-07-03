`timescale 1ns / 1ps
import verif_pkg::*;
module monitor (
    input  logic                                     clk,
    input  logic                                     rst_n,
    input  logic [NUM_REQ_PORTS-1:0]                 rsp_valid,
    output logic [NUM_REQ_PORTS-1:0]                 rsp_ready,
    input  logic [NUM_REQ_PORTS-1:0][DATA_WIDTH-1:0] rsp_data,
    input  logic [NUM_REQ_PORTS-1:0][  ID_WIDTH-1:0] rsp_id,
    input  logic [NUM_REQ_PORTS-1:0]                 rsp_err
);
  initial rsp_ready = '1;
  task automatic wait_rsp(input int port, output logic [DATA_WIDTH-1:0] got_data,
                          output logic [ID_WIDTH-1:0] got_id, output logic got_err);
    int timeout = 0;
    while (!rsp_valid[port]) begin
      @(posedge clk);
      #1;
      if (++timeout > 300) begin
        $display("[MON ERR] wait_rsp timeout port=%0d @%0t", port, $time);
        got_data = 'x;
        got_id   = 'x;
        got_err  = 'x;
        return;
      end
    end
    got_data = rsp_data[port];
    got_id   = rsp_id[port];
    got_err  = rsp_err[port];
    @(posedge clk);
    #1;
  endtask

  task automatic hold_ready(input int port);
    rsp_ready[port] = 0;
  endtask

  task automatic release_ready(input int port);
    rsp_ready[port] = 1;
  endtask
endmodule
