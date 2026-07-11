`timescale 1ns / 1ps

module tb_rsp_mux;

  // VCD dump
  initial begin
    $dumpfile("waves/rsp_mux.vcd");
    $dumpvars(0, tb_rsp_mux);
  end

  // Watchdog
  initial begin
    #200ns;
    $display("WATCHDOG EXPIRED");
    $finish;
  end

  // Parameters (match DUT defaults)
  parameter int NUM_BANKS = 4;
  parameter int NUM_REQ_PORTS = 4;
  parameter int DATA_WIDTH = 32;
  parameter int ID_WIDTH = 4;
  parameter int TOTAL_ID_BITS = 6;
  parameter int PORT_ID_BITS = 2;

  // DUT signals
  logic [    NUM_BANKS-1:0]                    pp1_valid;
  logic [    NUM_BANKS-1:0][   DATA_WIDTH-1:0] pp1_rdata;
  logic [    NUM_BANKS-1:0][TOTAL_ID_BITS-1:0] pp1_id;
  logic [    NUM_BANKS-1:0]                    pp1_we;
  logic [    NUM_BANKS-1:0]                    pp1_err;

  logic [NUM_REQ_PORTS-1:0]                    rsp_fifo_ready;

  logic [NUM_REQ_PORTS-1:0]                    rsp_valid;
  logic [NUM_REQ_PORTS-1:0][   DATA_WIDTH-1:0] rsp_data;
  logic [NUM_REQ_PORTS-1:0][     ID_WIDTH-1:0] rsp_id;
  logic [NUM_REQ_PORTS-1:0]                    rsp_err;

  logic [    NUM_BANKS-1:0]                    bank_pp1_ready;

  // DUT instantiation
  rsp_mux #(
      .NUM_BANKS    (NUM_BANKS),
      .NUM_REQ_PORTS(NUM_REQ_PORTS),
      .DATA_WIDTH   (DATA_WIDTH),
      .ID_WIDTH     (ID_WIDTH),
      .TOTAL_ID_BITS(TOTAL_ID_BITS),
      .PORT_ID_BITS (PORT_ID_BITS)
  ) dut (
      .pp1_valid     (pp1_valid),
      .pp1_rdata     (pp1_rdata),
      .pp1_id        (pp1_id),
      .pp1_we        (pp1_we),
      .pp1_err       (pp1_err),
      .rsp_fifo_ready(rsp_fifo_ready),
      .rsp_valid     (rsp_valid),
      .rsp_data      (rsp_data),
      .rsp_id        (rsp_id),
      .rsp_err       (rsp_err),
      .bank_pp1_ready(bank_pp1_ready)
  );

  // Clock generation (used to step the testbench)
  logic clk;
  initial clk = 0;
  always #5 clk = ~clk;

  // Test tracking
  int error_count = 0;
  int test_id = 0;

  // Helper: drive known-good defaults
  task automatic drive_default();
    pp1_valid      = '0;
    pp1_rdata      = '0;
    pp1_id         = '0;
    pp1_we         = '0;
    pp1_err        = '0;
    rsp_fifo_ready = '1;  // all FIFOs ready by default
  endtask

  // Helper: self-checking assertion
  task automatic check(input bit cond, input string msg);
    if (!cond) begin
      $display("[ERROR] Test %0d : %s @ time %0t", test_id, msg, $time);
      error_count++;
    end else begin
      $display("[OK]    Test %0d : %s @ time %0t", test_id, msg, $time);
    end
  endtask

  //========================================================================
  // Test Tasks
  //========================================================================

  // TC_MUX_01 — All Banks Idle: All Outputs Zero
  task automatic tc_mux_01();
    test_id = 1;
    $display("\n=== Test %0d: All Banks Idle ===", test_id);
    drive_default();
    pp1_valid      = 4'b0000;
    rsp_fifo_ready = 4'hF;

    @(posedge clk);
    #1;  // let combinatorial outputs settle

    check(rsp_valid == 4'b0000, "rsp_valid all zero");
    check(rsp_data == '0, "rsp_data all zero");
    check(rsp_id == '0, "rsp_id all zero");
    check(rsp_err == 4'b0000, "rsp_err all zero");
    check(bank_pp1_ready == 4'hF, "bank_pp1_ready all 1 (bubbles free)");
    check(dut.bank_granted == 4'b0000, "bank_granted all zero");
  endtask

  // TC_MUX_02 — Single Bank, Single Port: Basic Routing
  task automatic tc_mux_02();
    test_id = 2;
    $display("\n=== Test %0d: Single Bank Single Port ===", test_id);
    drive_default();
    pp1_valid[2]   = 1'b1;
    pp1_rdata[2]   = 32'hDEAD_BEEF;
    pp1_id[2]      = 6'b01_0011;  // port=1, txn_id=3
    pp1_we[2]      = 1'b0;
    pp1_err[2]     = 1'b0;
    rsp_fifo_ready = 4'hF;

    @(posedge clk);
    #1;

    check(rsp_valid[1] == 1'b1, "rsp_valid[1] asserted");
    check(rsp_data[1] == 32'hDEAD_BEEF, "rsp_data[1] = DEAD_BEEF");
    check(rsp_id[1] == 4'h3, "rsp_id[1] = txn_id 3");
    check(rsp_err[1] == 1'b0, "rsp_err[1] = 0");
    check(bank_pp1_ready[2] == 1'b1, "bank_pp1_ready[2] = 1");
    check(dut.bank_granted[2] == 1'b1, "bank_granted[2] = 1");
    check(rsp_valid[0] == 0 && rsp_valid[2] == 0 && rsp_valid[3] == 0, "other rsp_valid zero");
    check(bank_pp1_ready[0] == 1 && bank_pp1_ready[1] == 1 && bank_pp1_ready[3] == 1,
          "idle banks pp1_ready=1");
  endtask

  // TC_MUX_03 — Write Response: rsp_data Forced Zero, rsp_valid Still Asserts
  task automatic tc_mux_03();
    test_id = 3;
    $display("\n=== Test %0d: Write Response ===", test_id);
    drive_default();
    pp1_valid[0]   = 1'b1;
    pp1_we[0]      = 1'b1;
    pp1_rdata[0]   = 32'hFFFF_FFFF;
    pp1_id[0]      = 6'b00_0101;  // port=0, txn_id=5
    pp1_err[0]     = 1'b0;
    rsp_fifo_ready = 4'hF;

    @(posedge clk);
    #1;

    check(rsp_valid[0] == 1'b1, "rsp_valid[0] asserted for write");
    check(rsp_data[0] == 32'h0000_0000, "rsp_data[0] forced zero for write");
    check(rsp_id[0] == 4'h5, "rsp_id[0] = txn_id 5");
    check(rsp_err[0] == 1'b0, "rsp_err[0] = 0");
    check(bank_pp1_ready[0] == 1'b1, "bank_pp1_ready[0] = 1");
    check(dut.bank_granted[0] == 1'b1, "bank_granted[0] = 1");
  endtask

  // TC_MUX_04 — ID Stripping: Port Prefix Removed, txn_id Preserved
  task automatic tc_mux_04();
    test_id = 4;
    $display("\n=== Test %0d: ID Stripping ===", test_id);
    drive_default();
    pp1_valid[1]   = 1'b1;
    pp1_id[1]      = 6'b11_1010;  // port=3, txn_id=0xA
    pp1_we[1]      = 1'b0;
    pp1_err[1]     = 1'b0;
    rsp_fifo_ready = 4'hF;

    @(posedge clk);
    #1;

    check(rsp_valid[3] == 1'b1, "rsp_valid[3] asserted");
    check(rsp_id[3] == 4'hA, "rsp_id[3] = txn_id 0xA (prefix stripped)");
    check(dut.bank_granted[1] == 1'b1, "bank_granted[1] = 1");
    check(bank_pp1_ready[1] == 1'b1, "bank_pp1_ready[1] = 1");
  endtask

  // TC_MUX_05 — Error Flag Forwarded to Correct Port
  task automatic tc_mux_05();
    test_id = 5;
    $display("\n=== Test %0d: Error Forwarded ===", test_id);
    drive_default();
    pp1_valid[3]   = 1'b1;
    pp1_err[3]     = 1'b1;
    pp1_id[3]      = 6'b10_0000;  // port=2, txn_id=0
    pp1_we[3]      = 1'b0;
    pp1_rdata[3]   = 32'h0;
    rsp_fifo_ready = 4'hF;

    @(posedge clk);
    #1;

    check(rsp_err[2] == 1'b1, "rsp_err[2] = 1");
    check(rsp_valid[2] == 1'b1, "rsp_valid[2] asserted");
    check(rsp_data[2] == 32'h0, "rsp_data[2] = 0");
    check(rsp_id[2] == 4'h0, "rsp_id[2] = 0");
    check(bank_pp1_ready[3] == 1'b1, "bank_pp1_ready[3] = 1");
    check(dut.bank_granted[3] == 1'b1, "bank_granted[3] = 1");
    check(rsp_err[0] == 0 && rsp_err[1] == 0 && rsp_err[3] == 0, "other rsp_err zero");
  endtask

  // TC_MUX_06 — Collision: Two Banks Target Same Port, Lowest Bank Wins
  task automatic tc_mux_06();
    test_id = 6;
    $display("\n=== Test %0d: Collision Lowest Bank Wins ===", test_id);
    drive_default();
    pp1_valid         = 4'b1010;  // banks 1 and 3
    pp1_id[1]         = 6'b00_0000;  // port 0
    pp1_id[3]         = 6'b00_0000;  // port 0
    pp1_rdata[1]      = 32'h1111_1111;
    pp1_rdata[3]      = 32'h3333_3333;
    pp1_we[1]         = 1'b0;
    pp1_we[3]         = 1'b0;
    pp1_err[1]        = 1'b0;
    pp1_err[3]        = 1'b0;
    rsp_fifo_ready[0] = 1'b1;

    @(posedge clk);
    #1;

    check(dut.bank_granted[1] == 1'b1, "bank_granted[1] = 1 (lowest wins)");
    check(dut.bank_granted[3] == 1'b0, "bank_granted[3] = 0 (stalled)");
    check(rsp_valid == 4'b0001, "rsp_valid only port 0");
    check(rsp_data[0] == 32'h1111_1111, "rsp_data[0] from bank 1");
    check(bank_pp1_ready[1] == 1'b1, "bank_pp1_ready[1] = 1");
    check(bank_pp1_ready[3] == 1'b0, "bank_pp1_ready[3] = 0 (stalled)");
  endtask

  // TC_MUX_07 — No Collision: Two Banks Target Different Ports, Both Granted
  task automatic tc_mux_07();
    test_id = 7;
    $display("\n=== Test %0d: No Collision Both Granted ===", test_id);
    drive_default();
    pp1_valid      = 4'b0101;  // banks 0 and 2
    pp1_id[0]      = 6'b01_0000;  // port 1
    pp1_id[2]      = 6'b11_0000;  // port 3
    pp1_rdata[0]   = 32'hAAAA_AAAA;
    pp1_rdata[2]   = 32'hBBBB_BBBB;
    pp1_we[0]      = 1'b0;
    pp1_we[2]      = 1'b0;
    pp1_err[0]     = 1'b0;
    pp1_err[2]     = 1'b0;
    rsp_fifo_ready = 4'hF;

    @(posedge clk);
    #1;

    check(dut.bank_granted[0] == 1'b1, "bank_granted[0] = 1");
    check(dut.bank_granted[2] == 1'b1, "bank_granted[2] = 1");
    check(rsp_valid[1] == 1'b1, "rsp_valid[1] = 1 (bank 0 → port 1)");
    check(rsp_valid[3] == 1'b1, "rsp_valid[3] = 1 (bank 2 → port 3)");
    check(rsp_data[1] == 32'hAAAA_AAAA, "rsp_data[1] correct");
    check(rsp_data[3] == 32'hBBBB_BBBB, "rsp_data[3] correct");
    check(bank_pp1_ready[0] == 1'b1, "bank_pp1_ready[0] = 1");
    check(bank_pp1_ready[2] == 1'b1, "bank_pp1_ready[2] = 1");
    check(rsp_valid[0] == 0 && rsp_valid[2] == 0, "other rsp_valid zero");
  endtask

  // TC_MUX_08 — rsp_fifo_ready=0: Bank Blocked Even If Lowest
  task automatic tc_mux_08();
    test_id = 8;
    $display("\n=== Test %0d: FIFO Full Blocks Bank ===", test_id);
    drive_default();
    pp1_valid[0]      = 1'b1;
    pp1_id[0]         = 6'b10_0000;  // port 2
    rsp_fifo_ready    = 4'b1111;
    rsp_fifo_ready[2] = 1'b0;  // port 2 full

    @(posedge clk);
    #1;

    check(dut.bank_granted[0] == 1'b0, "bank_granted[0] = 0 (FIFO full)");
    check(rsp_valid[2] == 1'b0, "rsp_valid[2] = 0");
    check(bank_pp1_ready[0] == 1'b0, "bank_pp1_ready[0] = 0 (stalled)");
  endtask

  // TC_MUX_09 — bank_pp1_ready for Invalid (Bubble) Banks
  task automatic tc_mux_09();
    test_id = 9;
    $display("\n=== Test %0d: Bubble Banks Always Ready ===", test_id);
    drive_default();
    pp1_valid      = 4'b0001;  // only bank 0
    pp1_id[0]      = 6'b00_0000;  // port 0
    rsp_fifo_ready = 4'hF;

    @(posedge clk);
    #1;

    check(bank_pp1_ready[0] == 1'b1, "bank_pp1_ready[0] = 1 (granted)");
    check(bank_pp1_ready[1] == 1'b1, "bank_pp1_ready[1] = 1 (bubble)");
    check(bank_pp1_ready[2] == 1'b1, "bank_pp1_ready[2] = 1 (bubble)");
    check(bank_pp1_ready[3] == 1'b1, "bank_pp1_ready[3] = 1 (bubble)");
  endtask

  // TC_MUX_10 — All Banks Valid, All Target Different Ports: Peak Throughput
  task automatic tc_mux_10();
    test_id = 10;
    $display("\n=== Test %0d: Peak Throughput ===", test_id);
    drive_default();
    pp1_valid      = 4'hF;
    pp1_id[0]      = 6'b00_0001;  // port 0, txn 1
    pp1_id[1]      = 6'b01_0010;  // port 1, txn 2
    pp1_id[2]      = 6'b10_0011;  // port 2, txn 3
    pp1_id[3]      = 6'b11_0100;  // port 3, txn 4
    pp1_rdata[0]   = 32'h1111_1111;
    pp1_rdata[1]   = 32'h2222_2222;
    pp1_rdata[2]   = 32'h3333_3333;
    pp1_rdata[3]   = 32'h4444_4444;
    pp1_we         = 4'b0000;
    pp1_err        = 4'b0000;
    rsp_fifo_ready = 4'hF;

    @(posedge clk);
    #1;

    check(dut.bank_granted == 4'hF, "bank_granted all 1");
    check(rsp_valid == 4'hF, "all rsp_valid asserted");
    check(bank_pp1_ready == 4'hF, "all bank_pp1_ready 1");
    check(rsp_data[0] == 32'h1111_1111, "rsp_data[0] correct");
    check(rsp_data[1] == 32'h2222_2222, "rsp_data[1] correct");
    check(rsp_data[2] == 32'h3333_3333, "rsp_data[2] correct");
    check(rsp_data[3] == 32'h4444_4444, "rsp_data[3] correct");
    check(rsp_id[0] == 4'h1, "rsp_id[0] = txn 1");
    check(rsp_id[1] == 4'h2, "rsp_id[1] = txn 2");
    check(rsp_id[2] == 4'h3, "rsp_id[2] = txn 3");
    check(rsp_id[3] == 4'h4, "rsp_id[3] = txn 4");
  endtask

  // TC_MUX_11 — All Banks Target Same Port: Only Bank 0 Wins, Rest Stalled
  task automatic tc_mux_11();
    test_id = 11;
    $display("\n=== Test %0d: All Banks Same Port ===", test_id);
    drive_default();
    pp1_valid         = 4'hF;
    pp1_id[0]         = 6'b00_0001;  // port 0, txn 1
    pp1_id[1]         = 6'b00_0010;  // port 0, txn 2
    pp1_id[2]         = 6'b00_0011;  // port 0, txn 3
    pp1_id[3]         = 6'b00_0100;  // port 0, txn 4
    pp1_rdata[0]      = 32'h1111_1111;
    pp1_rdata[1]      = 32'h2222_2222;
    pp1_rdata[2]      = 32'h3333_3333;
    pp1_rdata[3]      = 32'h4444_4444;
    pp1_we            = 4'b0000;
    pp1_err           = 4'b0000;
    rsp_fifo_ready[0] = 1'b1;

    @(posedge clk);
    #1;

    check(dut.bank_granted[0] == 1'b1, "bank_granted[0] = 1 (only winner)");
    check(dut.bank_granted[1] == 1'b0, "bank_granted[1] = 0");
    check(dut.bank_granted[2] == 1'b0, "bank_granted[2] = 0");
    check(dut.bank_granted[3] == 1'b0, "bank_granted[3] = 0");
    check(rsp_valid[0] == 1'b1, "rsp_valid[0] = 1");
    check(rsp_data[0] == 32'h1111_1111, "rsp_data[0] from bank 0");
    check(rsp_id[0] == 4'h1, "rsp_id[0] = txn 1 from bank 0");
    check(bank_pp1_ready[0] == 1'b1, "bank_pp1_ready[0] = 1");
    check(bank_pp1_ready[1] == 1'b0, "bank_pp1_ready[1] = 0");
    check(bank_pp1_ready[2] == 1'b0, "bank_pp1_ready[2] = 0");
    check(bank_pp1_ready[3] == 1'b0, "bank_pp1_ready[3] = 0");
  endtask

  // TC_MUX_12 — Partial rsp_fifo_ready: Some Ports Ready, Some Not
  task automatic tc_mux_12();
    test_id = 12;
    $display("\n=== Test %0d: Partial Ready Isolation ===", test_id);
    drive_default();
    pp1_valid[0]   = 1'b1;
    pp1_id[0]      = 6'b00_0001;  // port 0
    pp1_valid[1]   = 1'b1;
    pp1_id[1]      = 6'b01_0010;  // port 1
    pp1_valid[2]   = 1'b1;
    pp1_id[2]      = 6'b10_0011;  // port 2
    pp1_valid[3]   = 1'b0;
    pp1_rdata[0]   = 32'hAAAA_AAAA;
    pp1_rdata[1]   = 32'hBBBB_BBBB;
    pp1_rdata[2]   = 32'hCCCC_CCCC;
    pp1_we         = 4'b0000;
    pp1_err        = 4'b0000;
    rsp_fifo_ready = 4'b1101;  // port 1 = 0, others = 1

    @(posedge clk);
    #1;

    check(dut.bank_granted[0] == 1'b1, "bank_granted[0] = 1 (port 0 ready)");
    check(dut.bank_granted[1] == 1'b0, "bank_granted[1] = 0 (port 1 full)");
    check(dut.bank_granted[2] == 1'b1, "bank_granted[2] = 1 (port 2 ready)");
    check(rsp_valid[0] == 1'b1, "rsp_valid[0] = 1");
    check(rsp_valid[1] == 1'b0, "rsp_valid[1] = 0");
    check(rsp_valid[2] == 1'b1, "rsp_valid[2] = 1");
    check(bank_pp1_ready[0] == 1'b1, "bank_pp1_ready[0] = 1");
    check(bank_pp1_ready[1] == 1'b0, "bank_pp1_ready[1] = 0");
    check(bank_pp1_ready[2] == 1'b1, "bank_pp1_ready[2] = 1");
    check(bank_pp1_ready[3] == 1'b1, "bank_pp1_ready[3] = 1 (bubble)");
  endtask

  //========================================================================
  // Main Test Sequence
  //========================================================================
  initial begin
    $display("TB START");

    // Run all 12 directed tests
    tc_mux_01();
    tc_mux_02();
    tc_mux_03();
    tc_mux_04();
    tc_mux_05();
    tc_mux_06();
    tc_mux_07();
    tc_mux_08();
    tc_mux_09();
    tc_mux_10();
    tc_mux_11();
    tc_mux_12();

    // Summary
    $display("\n=== TESTBENCH SUMMARY ===");
    if (error_count == 0) begin
      $display("ALL TESTS PASSED");
    end else begin
      $display("%0d TEST(S) FAILED", error_count);
    end
    $finish;
  end

endmodule
