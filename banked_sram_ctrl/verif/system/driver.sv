`timescale 1ns / 1ps
module driver #(
    parameter int NUM_BANKS = 4,
    parameter int BANK_DEPTH = 256,
    parameter int DATA_WIDTH = 32,
    parameter int ADDR_WIDTH = 10,
    parameter int NUM_REQ_PORTS = 4,
    parameter int QUEUE_DEPTH = 4,
    parameter int ID_WIDTH = 4
) (
    input  logic                                       clk,
    input  logic                                       rst_n,
    // Request outputs (to DUT)
    output logic [NUM_REQ_PORTS-1:0]                   req_valid,
    input  logic [NUM_REQ_PORTS-1:0]                   req_ready,
    output logic [NUM_REQ_PORTS-1:0][  ADDR_WIDTH-1:0] req_addr,
    output logic [NUM_REQ_PORTS-1:0][  DATA_WIDTH-1:0] req_data,
    output logic [NUM_REQ_PORTS-1:0][STROBE_WIDTH-1:0] req_strobe,
    output logic [NUM_REQ_PORTS-1:0][    ID_WIDTH-1:0] req_id,
    output logic [NUM_REQ_PORTS-1:0]                   req_we,
    // CSR outputs
    output logic                                       csr_req,
    output logic [   CSR_ADDR_W-1:0]                   csr_addr,
    input  logic [             31:0]                   csr_rdata,
    input  logic                                       csr_ack
);
  localparam int STROBE_WIDTH = DATA_WIDTH / 8;
  localparam int CSR_ADDR_W = $clog2(
      2 * NUM_REQ_PORTS + NUM_BANKS * NUM_REQ_PORTS + NUM_REQ_PORTS + NUM_BANKS
  );

  initial begin
    req_valid = '0;
    req_we = '0;
    req_addr = '0;
    req_data = '0;
    req_strobe = '0;
    req_id = '0;
    csr_req = 0;
    csr_addr = '0;
  end

  task automatic send(input int port, input logic [DATA_WIDTH-1:0] data,
                      input logic [ADDR_WIDTH-1:0] addr, input logic we,
                      input logic [STROBE_WIDTH-1:0] strobe, input logic [ID_WIDTH-1:0] id);
    int timeout = 0;
    req_valid[port] = 1;
    req_addr[port] = addr;
    req_data[port] = data;
    req_we[port] = we;
    req_strobe[port] = strobe;
    req_id[port] = id;
    @(posedge clk);
    while (!req_ready[port]) begin  //waits for req_ready = 1 else timeout --> error
      if (++timeout > 20) begin
        $display("[DRV ERROR] timeout port=%0d", port);
        break;
      end
      @(posedge clk);
    end
    #1;
    req_valid[port] = 0;
  endtask

  task automatic csr_read(input logic [CSR_ADDR_W-1:0] addr_in, output logic [31:0] value);
    int timeout = 0;
    csr_req  = 1;
    csr_addr = addr_in;
    @(posedge clk);
    #1;
    csr_req = 0;
    while (!csr_ack) begin
      @(posedge clk);
      #1;
      if (++timeout > 20) begin
        $display("[DRV ERROR] CSR timeout");
        break;
      end
    end
    value = csr_rdata;
    @(posedge clk);
    #1;
  endtask
  // #1 to prevent simulation race conditions and to prevent the tb to not observe the old value while values are changing.
endmodule
