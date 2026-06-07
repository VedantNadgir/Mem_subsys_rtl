package sram_ctrl_pkg;

  // User Parameters (with Default Values) --> Override at instantiation
  parameter int NUM_BANKS = 4;
  parameter int BANK_DEPTH = 256;
  parameter int DATA_WIDTH = 32;
  parameter int ADDR_WIDTH = 10;
  parameter int NUM_REQ_PORTS = 4;
  parameter int QUEUE_DEPTH = 4;
  parameter int ID_WIDTH = 4;

  // Derived (localparam - do not Override)
  localparam int BANK_SEL_BITS = $clog2(NUM_BANKS);
  localparam int BANK_ADDR_BITS = $clog2(BANK_DEPTH);
  localparam int PORT_ID_BITS = $clog2(NUM_REQ_PORTS);
  localparam int TOTAL_ID_BITS = ID_WIDTH + PORT_ID_BITS;  //txn id
  localparam int STROBE_WIDTH = DATA_WIDTH / 8;

  // Structs
  typedef struct packed {
    logic [ADDR_WIDTH-1:0]   addr;
    logic [DATA_WIDTH-1:0]   data;
    logic [STROBE_WIDTH-1:0] strobe;
    logic [ID_WIDTH-1:0]     id;
    logic                    we;
  } req_pkt_t;

  typedef struct packed {
    logic [DATA_WIDTH-1:0] data;
    logic [ID_WIDTH-1:0]   id;
    logic                  err;
  } rsp_pkt_t;

endpackage
