`timescale 1ns / 1ps

package verif_pkg;
  localparam int NUM_BANKS = 4;
  localparam int BANK_DEPTH = 256;
  localparam int DATA_WIDTH = 32;
  localparam int ADDR_WIDTH = 10;
  localparam int NUM_REQ_PORTS = 4;
  localparam int QUEUE_DEPTH = 4;
  localparam int ID_WIDTH = 4;
  localparam int STROBE_WIDTH = DATA_WIDTH / 8;
  localparam int BANK_SEL_BITS = $clog2(NUM_BANKS);
  localparam int BANK_ADDR_BITS = $clog2(BANK_DEPTH);
  localparam int MAX_ADDR = (1 << ADDR_WIDTH) - 1;
  localparam int CSR_ADDR_W = $clog2(
      2 * NUM_REQ_PORTS + NUM_BANKS * NUM_REQ_PORTS + NUM_REQ_PORTS + NUM_BANKS
  );

  localparam int OFF_REQ = 0;
  localparam int OFF_RSP = NUM_REQ_PORTS;
  localparam int OFF_CONF = 2 * NUM_REQ_PORTS;
  localparam int OFF_QF = OFF_CONF + NUM_BANKS * NUM_REQ_PORTS;
  localparam int OFF_IDLE = OFF_QF + NUM_REQ_PORTS;

  typedef enum logic {
    TXN_RD = 1'b0,
    TXN_WR = 1'b1
  } txn_type_e;

  typedef struct {
    txn_type_e txn_type;
    int port;
    logic [ADDR_WIDTH-1:0] addr;
    logic [DATA_WIDTH-1:0] data;
    logic [STROBE_WIDTH-1:0] strobe;
    logic [ID_WIDTH-1:0] id;
  } txn_t;

  function automatic logic [ADDR_WIDTH-1:0] make_addr(input int bank, input int row);
    return ADDR_WIDTH'({row[BANK_ADDR_BITS-1:0], bank[BANK_SEL_BITS-1:0]});
  endfunction
endpackage
