//This is the core pipeline. It contains PP0 (arbiter-to-SRAM), the SRAM command interface,
// and PP1 (SRAM-to-response). It also computes OOB and gates the SRAM write-enable.
module bank_scheduler #(
    parameter int ADDR_WIDTH     = 10,
    parameter int BANK_SEL_BITS  = 2,
    parameter int BANK_ADDR_BITS = 8,
    parameter int DATA_WIDTH     = 32,
    parameter int STROBE_WIDTH   = 4,
    parameter int TOTAL_ID_BITS  = 6,   //PORT_ID_BITS + ID_WIDTH (2+4) bits
    parameter int NUM_REQ_PORTS  = 4,
    parameter int PORT_ID_BITS   = 2
) (
    input logic clk,
    input logic rst_n,

    //From arbiter (combinational grant, valid for 1 cycle unless held)
    input logic                  grant_valid,
    input logic [ADDR_WIDTH-1:0] grant_addr,

    input logic [   DATA_WIDTH-1:0] grant_data,
    input logic [ STROBE_WIDTH-1:0] grant_strobe,
    input logic                     grant_we,
    input logic [TOTAL_ID_BITS-1:0] grant_id,

    //Backpressure to arbiter
    output logic grant_ready,

    //To SRAM array (registered outputs - drawn from PP0)
    output logic                      sram_we,
    output logic [BANK_ADDR_BITS-1:0] sram_addr,
    output logic [    DATA_WIDTH-1:0] sram_wdata,
    output logic [  STROBE_WIDTH-1:0] sram_bwe,    //sram byte write enable

    //From SRAM array
    input logic [DATA_WIDTH-1:0] sram_rdata,

    //To Response Mux (PP1 output)
    output logic                     pp1_valid,
    output logic [   DATA_WIDTH-1:0] pp1_rdata,
    output logic [TOTAL_ID_BITS-1:0] pp1_id,
    output logic                     pp1_we,     // so mux can zero data for writes
    output logic                     pp1_err,

    //Backpressure from the rsp_mux (bank_pp1_ready tells this scheduler it may advance PP1)
    input logic bank_pp1_ready
);
  //PP0 stage: Captures the grant
  logic pp0_valid;
  logic [BANK_ADDR_BITS-1:0] pp0_addr;
  logic [DATA_WIDTH-1:0] pp0_data;
  logic [STROBE_WIDTH-1:0] pp0_strobe;
  logic pp0_we;
  logic [TOTAL_ID_BITS-1:0] pp0_id;
  logic pp0_err;

  //Out of range check OR unused upper address bits
  logic addr_oob;
  if (ADDR_WIDTH > (BANK_SEL_BITS + BANK_ADDR_BITS)) begin : gen_oob_check
    //uses reduction OR for the upper address bits (checks if there are any 1s in the upper unused addresses)
    assign addr_oob = |grant_addr[ADDR_WIDTH-1:BANK_SEL_BITS+BANK_ADDR_BITS];
  end else begin : gen_not_oob
    assign addr_oob = 1'b0;
  end

  //Pipeline Backpressure:
  // PP1 can shift if it is empty or if rsp_mux says this bank mayadvance.
  // PP0 can shift if it is empty of if PP1 can shift
  logic pp1_ready;
  assign pp1_ready   = !pp1_valid || bank_pp1_ready;
  assign grant_ready = !pp0_valid || pp1_ready;

  //PP0 load
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      pp0_valid <= 1'b0;
    end else if (grant_ready) begin
      pp0_valid <= grant_valid;
      pp0_addr <= grant_addr[BANK_SEL_BITS+BANK_ADDR_BITS-1 : BANK_SEL_BITS];
      pp0_id <= grant_id;
      pp0_err <= addr_oob;
      pp0_we <= grant_we;
      pp0_strobe <= grant_strobe;
      pp0_data <= grant_data;
    end
  end

  //SRAM command outpits (direct from PP0's FF for clean timing)
  //Suppress memory writes when OOB to avoid physical memory corruption
  assign sram_addr = pp0_addr;
  assign sram_we = pp0_valid && !pp0_err && pp0_we;
  assign sram_wdata = pp0_data;

  genvar i;
  generate
    for (i = 0; i < STROBE_WIDTH; i++) begin : gen_bwe
      assign sram_bwe[i] = pp0_valid && !pp0_err && pp0_we && pp0_strobe[i];
    end
  endgenerate

  //PP1 stage: Captures SRAM read data.
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      pp1_valid <= 1'b0;
    end else if (pp1_ready) begin
      pp1_valid <= pp0_valid;
      pp1_err <= pp0_err;
      pp1_id <= pp0_id;
      pp1_we <= pp0_we;
      //If OOB data is force to be 0; otherwise SRAM read data assigned.
      //For writes this value is not used as the mux ignores it.
      pp1_rdata <= pp0_err ? '0 : sram_rdata;
    end
  end
endmodule
