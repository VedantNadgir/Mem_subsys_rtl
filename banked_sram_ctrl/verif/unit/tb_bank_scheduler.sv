`timescale 1ns / 1ps

module tb_bank_scheduler;

  // VCD dump
  initial begin
    $dumpfile("waves/bank_scheduler.vcd");
    $dumpvars(0, tb_bank_scheduler);
  end

  // Watchdog
  initial begin
    #500ns;
    $display("WATCHDOG EXPIRED");
    $finish;
  end

  // Parameters (ADDR_WIDTH=12 to support OOB tests)
  localparam int ADDR_WIDTH = 12;
  localparam int BANK_SEL_BITS = 2;
  localparam int BANK_ADDR_BITS = 8;
  localparam int DATA_WIDTH = 32;
  localparam int STROBE_WIDTH = 4;
  localparam int TOTAL_ID_BITS = 6;
  localparam int NUM_REQ_PORTS = 4;
  localparam int PORT_ID_BITS = 2;

  // DUT signals
  logic                      clk;
  logic                      rst_n;

  // Arbiter interface
  logic                      grant_valid;
  logic [    ADDR_WIDTH-1:0] grant_addr;
  logic [    DATA_WIDTH-1:0] grant_data;
  logic [  STROBE_WIDTH-1:0] grant_strobe;
  logic                      grant_we;
  logic [ TOTAL_ID_BITS-1:0] grant_id;
  logic                      grant_ready;

  // SRAM interface
  logic                      sram_we;
  logic [BANK_ADDR_BITS-1:0] sram_addr;
  logic [    DATA_WIDTH-1:0] sram_wdata;
  logic [  STROBE_WIDTH-1:0] sram_bwe;
  logic [    DATA_WIDTH-1:0] sram_rdata;

  // PP1 output
  logic                      pp1_valid;
  logic [    DATA_WIDTH-1:0] pp1_rdata;
  logic [ TOTAL_ID_BITS-1:0] pp1_id;
  logic                      pp1_we;
  logic                      pp1_err;

  // Backpressure
  logic                      bank_pp1_ready;

  // DUT instantiation
  bank_scheduler #(
      .ADDR_WIDTH    (ADDR_WIDTH),
      .BANK_SEL_BITS (BANK_SEL_BITS),
      .BANK_ADDR_BITS(BANK_ADDR_BITS),
      .DATA_WIDTH    (DATA_WIDTH),
      .STROBE_WIDTH  (STROBE_WIDTH),
      .TOTAL_ID_BITS (TOTAL_ID_BITS),
      .NUM_REQ_PORTS (NUM_REQ_PORTS),
      .PORT_ID_BITS  (PORT_ID_BITS)
  ) dut (
      .clk           (clk),
      .rst_n         (rst_n),
      .grant_valid   (grant_valid),
      .grant_addr    (grant_addr),
      .grant_data    (grant_data),
      .grant_strobe  (grant_strobe),
      .grant_we      (grant_we),
      .grant_id      (grant_id),
      .grant_ready   (grant_ready),
      .sram_we       (sram_we),
      .sram_addr     (sram_addr),
      .sram_wdata    (sram_wdata),
      .sram_bwe      (sram_bwe),
      .sram_rdata    (sram_rdata),
      .pp1_valid     (pp1_valid),
      .pp1_rdata     (pp1_rdata),
      .pp1_id        (pp1_id),
      .pp1_we        (pp1_we),
      .pp1_err       (pp1_err),
      .bank_pp1_ready(bank_pp1_ready)
  );

  // Clock generation
  initial clk = 0;
  always #5 clk = ~clk;

  // Initial reset
  initial begin
    rst_n = 0;
    drive_default();
    repeat (3) @(posedge clk);
    rst_n = 1;
  end

  // Test tracking
  int error_count = 0;
  int test_id = 0;

  // Helper: drive known-good defaults
  task automatic drive_default();
    grant_valid    = 1'b0;
    grant_addr     = '0;
    grant_data     = '0;
    grant_strobe   = 4'hF;
    grant_we       = 1'b0;
    grant_id       = '0;
    bank_pp1_ready = 1'b1;
    sram_rdata     = '0;
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

  // Add this helper task
  task automatic drain_pipeline();
    bank_pp1_ready = 1'b1;
    grant_valid = 1'b0;
    while (pp1_valid || dut.pp0_valid) begin
      @(posedge clk);
      #1;
    end
  endtask

  //========================================================================
  // Test Tasks
  //========================================================================

  // TC_BS_01 — Reset: Both Pipeline Stages Empty, grant_ready=1
  task automatic tc_bs_01();
    test_id = 1;
    $display("\n=== Test %0d: Reset ===", test_id);
    drive_default();
    rst_n = 0;
    repeat (2) @(posedge clk);
    #1;
    check(dut.pp0_valid == 1'b0, "pp0_valid=0 after reset");
    check(pp1_valid == 1'b0, "pp1_valid=0 after reset");
    check(grant_ready == 1'b1, "grant_ready=1 after reset");
    check(dut.pp1_ready == 1'b1, "pp1_ready=1 after reset");
    check(sram_we == 1'b0, "sram_we=0 after reset");
    check(pp1_err == 1'b0, "pp1_err=0 after reset");
    rst_n = 1;
  endtask

  // TC_BS_02 — Basic Read: Full 3-Cycle Latency Trace
  task automatic tc_bs_02();
    test_id = 2;
    $display("\n=== Test %0d: Basic Read 3-Cycle Latency ===", test_id);
    drive_default();
    sram_rdata     = 32'hCAFE_BABE;

    // Cycle 0: Issue grant
    grant_valid    = 1'b1;
    grant_addr     = 12'h085;  // [9:2] = 0x21
    grant_we       = 1'b0;
    grant_id       = 6'h1A;
    bank_pp1_ready = 1'b1;

    @(posedge clk);
    #1;
    check(dut.pp0_valid == 1'b1, "C1: pp0_valid=1");
    check(dut.pp0_addr == 8'h21, "C1: pp0_addr=0x21");
    check(dut.pp0_we == 1'b0, "C1: pp0_we=0");
    check(dut.pp0_err == 1'b0, "C1: pp0_err=0");
    check(sram_addr == 8'h21, "C1: sram_addr=0x21");
    check(sram_we == 1'b0, "C1: sram_we=0");
    check(grant_ready == 1'b1, "C1: grant_ready=1");

    // Cycle 1: Grant stops, SRAM data available for PP1 capture
    grant_valid = 1'b0;

    @(posedge clk);
    #1;
    check(pp1_valid == 1'b1, "C2: pp1_valid=1");
    check(pp1_rdata == 32'hCAFE_BABE, "C2: pp1_rdata=CAFE_BABE");
    check(pp1_id == 6'h1A, "C2: pp1_id=0x1A");
    check(pp1_we == 1'b0, "C2: pp1_we=0");
    check(pp1_err == 1'b0, "C2: pp1_err=0");

    // Cycle 2: Bubble exits PP1
    @(posedge clk);
    #1;
    check(pp1_valid == 1'b0, "C3: pp1_valid=0 (bubble exited)");
  endtask

  // TC_BS_03 — Basic Write: sram_we and sram_wdata Asserted
  task automatic tc_bs_03();
    test_id = 3;
    $display("\n=== Test %0d: Basic Write ===", test_id);
    drive_default();

    // Cycle 0
    grant_valid    = 1'b1;
    grant_addr     = 12'h004;  // [9:2] = 0x01
    grant_data     = 32'hDEAD_BEEF;
    grant_strobe   = 4'hF;
    grant_we       = 1'b1;
    bank_pp1_ready = 1'b1;

    @(posedge clk);
    #1;
    check(dut.pp0_valid == 1'b1, "pp0_valid=1");
    check(dut.pp0_we == 1'b1, "pp0_we=1");
    check(dut.pp0_err == 1'b0, "pp0_err=0");
    check(sram_addr == 8'h01, "sram_addr=0x01");
    check(sram_we == 1'b1, "sram_we=1");
    check(sram_wdata == 32'hDEAD_BEEF, "sram_wdata correct");
    check(sram_bwe == 4'hF, "sram_bwe=4'hF");

    // Cycle 1
    grant_valid = 1'b0;

    @(posedge clk);
    #1;
    check(pp1_valid == 1'b1, "pp1_valid=1");
    check(pp1_we == 1'b1, "pp1_we=1");
    check(pp1_err == 1'b0, "pp1_err=0");
  endtask

  // TC_BS_04 — Partial Write: Byte Enable per Strobe Bit
  task automatic tc_bs_04();
    test_id = 4;
    $display("\n=== Test %0d: Partial Write Byte Enable ===", test_id);
    drive_default();

    grant_valid    = 1'b1;
    grant_addr     = 12'h008;  // [9:2] = 0x02
    grant_data     = 32'hABCD_EF12;
    grant_strobe   = 4'b0110;
    grant_we       = 1'b1;
    bank_pp1_ready = 1'b1;

    @(posedge clk);
    #1;
    check(sram_we == 1'b1, "sram_we=1");
    check(sram_wdata == 32'hABCD_EF12, "sram_wdata correct");
    check(sram_bwe == 4'b0110, "sram_bwe=4'b0110");
    check(sram_bwe[0] == 1'b0, "sram_bwe[0]=0");
    check(sram_bwe[3] == 1'b0, "sram_bwe[3]=0");
    check(sram_bwe[1] == 1'b1, "sram_bwe[1]=1");
    check(sram_bwe[2] == 1'b1, "sram_bwe[2]=1");
  endtask

  // TC_BS_05 — OOB Write: sram_we Suppressed, Error Response Generated
  task automatic tc_bs_05();
    test_id = 5;
    $display("\n=== Test %0d: OOB Write ===", test_id);
    drive_default();

    grant_valid    = 1'b1;
    grant_addr     = 12'hC04;  // [11:10]=2'b11 → OOB
    grant_we       = 1'b1;
    grant_strobe   = 4'hF;
    grant_data     = 32'h1234_5678;
    bank_pp1_ready = 1'b1;

    @(posedge clk);
    #1;
    check(dut.addr_oob == 1'b1, "addr_oob=1");
    check(dut.pp0_valid == 1'b1, "pp0_valid=1");
    check(dut.pp0_err == 1'b1, "pp0_err=1");
    check(dut.pp0_we == 1'b1, "pp0_we=1");
    check(sram_we == 1'b0, "sram_we=0 (suppressed by OOB)");
    check(sram_bwe == 4'h0, "sram_bwe=0");

    // Cycle 1: PP1 captures error response
    grant_valid = 1'b0;

    @(posedge clk);
    #1;
    check(pp1_valid == 1'b1, "pp1_valid=1");
    check(pp1_err == 1'b1, "pp1_err=1");
    check(pp1_we == 1'b1, "pp1_we=1");
    check(pp1_rdata == '0, "pp1_rdata=0");
  endtask

  // TC_BS_06 — OOB Read: pp1_rdata Forced Zero Despite SRAM Data
  task automatic tc_bs_06();
    test_id = 6;
    $display("\n=== Test %0d: OOB Read ===", test_id);
    drive_default();
    sram_rdata     = 32'hFFFF_FFFF;

    grant_valid    = 1'b1;
    grant_addr     = 12'hC04;  // OOB
    grant_we       = 1'b0;
    bank_pp1_ready = 1'b1;

    @(posedge clk);
    #1;
    check(dut.pp0_err == 1'b1, "pp0_err=1");
    check(sram_we == 1'b0, "sram_we=0");

    grant_valid = 1'b0;

    @(posedge clk);
    #1;
    check(pp1_valid == 1'b1, "pp1_valid=1");
    check(pp1_err == 1'b1, "pp1_err=1");
    check(pp1_rdata == 32'h0000_0000, "pp1_rdata=0 (forced, not 0xFFFFFFFF)");
    check(pp1_we == 1'b0, "pp1_we=0");
  endtask

  // TC_BS_07 — PP0 Full, PP1 Full: grant_ready=0 (Full Pipeline Stall)
  task automatic tc_bs_07();
    test_id = 7;
    $display("\n=== Test %0d: Full Pipeline Stall ===", test_id);
    drive_default();

    // Fill PP0
    grant_valid = 1'b1;
    grant_addr  = 12'h004;
    grant_we    = 1'b0;
    bank_pp1_ready = 1'b1;

    @(posedge clk);
    #1;  // PP0 full

    // Fill PP1 (back-to-back grant while PP1 drains)
    grant_valid = 1'b1;
    grant_addr  = 12'h008;

    @(posedge clk);
    #1;  // PP0 and PP1 both full
    check(dut.pp0_valid == 1'b1, "pp0_valid=1");
    check(pp1_valid == 1'b1, "pp1_valid=1");

    // Stall: prevent PP1 from draining
    bank_pp1_ready = 1'b0;
    grant_valid    = 1'b0;
    #1;

    check(dut.pp1_ready == 1'b0, "pp1_ready=0");
    check(grant_ready == 1'b0, "grant_ready=0");

    // Hold stall for 2 cycles
    repeat (2) begin
      @(posedge clk);
      #1;
      check(dut.pp0_valid == 1'b1, "pp0_valid stable during stall");
      check(pp1_valid == 1'b1, "pp1_valid stable during stall");
      check(grant_ready == 1'b0, "grant_ready=0 during stall");
    end
  endtask

  task automatic tc_bs_08();
    test_id = 8;
    $display("\n=== Test %0d: PP0 Full PP1 Empty ===", test_id);
    drive_default();
    drain_pipeline();

    // Cycle 0: Fill PP0, PP1 is empty so captures bubble
    grant_valid = 1'b1;
    grant_addr  = 12'h004;
    grant_we    = 1'b0;
    bank_pp1_ready = 1'b1;

    @(posedge clk);
    #1;

    check(dut.pp0_valid == 1'b1, "pp0_valid=1");
    check(pp1_valid == 1'b0, "pp1_valid=0 (captured bubble)");
    check(dut.pp1_ready == 1'b1, "pp1_ready=1");
    check(grant_ready == 1'b1, "grant_ready=1");

    // Cycle 1: Stop granting; PP1 captures PP0, PP0 captures bubble
    grant_valid = 1'b0;
    @(posedge clk);
    #1;
    check(pp1_valid == 1'b1, "pp1_valid=1 (captured PP0)");
    check(dut.pp0_valid == 1'b0, "pp0_valid=0 (captured bubble)");
  endtask

  // TC_BS_09 — bank_pp1_ready=0: PP1 Holds, SRAM Address Stable
  task automatic tc_bs_09();
    logic [BANK_ADDR_BITS-1:0] addr_before;
    test_id = 9;
    $display("\n=== Test %0d: bank_pp1_ready=0 Addr Stable ===", test_id);
    drive_default();

    // Fill PP0 and PP1
    grant_valid    = 1'b1;
    grant_addr     = 12'h010;  // [9:2] = 0x04
    grant_we       = 1'b0;
    bank_pp1_ready = 1'b1;

    @(posedge clk);
    #1;  // PP0 = txn A

    grant_valid = 1'b1;
    grant_addr  = 12'h014;  // [9:2] = 0x05
    @(posedge clk);
    #1;  // PP0 = txn B, PP1 = txn A

    // Stall
    bank_pp1_ready = 1'b0;
    grant_valid    = 1'b0;
    #1;

    addr_before = sram_addr;
    check(grant_ready == 1'b0, "grant_ready=0");

    // 3 stall cycles
    repeat (3) begin
      @(posedge clk);
      #1;
      check(sram_addr == addr_before, "sram_addr stable during stall");
      check(pp1_valid == 1'b1, "pp1_valid=1 during stall");
      check(dut.pp0_valid == 1'b1, "pp0_valid=1 during stall");
    end
  endtask

  // TC_BS_10 — Pipeline Bubble: grant_valid=0 While grant_ready=1
  task automatic tc_bs_10();
    test_id = 10;
    $display("\n=== Test %0d: Bubble Propagation ===", test_id);
    drive_default();

    // Cycle 0: Real transaction
    grant_valid = 1'b1;
    grant_addr  = 12'h004;
    grant_we    = 1'b0;
    grant_id    = 6'h01;
    bank_pp1_ready = 1'b1;

    @(posedge clk);
    #1;
    check(dut.pp0_valid == 1'b1, "C1: pp0_valid=1");

    // Cycle 1: Bubble
    grant_valid = 1'b0;

    @(posedge clk);
    #1;
    check(pp1_valid == 1'b1, "C2: pp1_valid=1 (real txn in PP1)");
    check(dut.pp0_valid == 1'b0, "C2: pp0_valid=0 (bubble)");

    // Cycle 2: Bubble exits
    @(posedge clk);
    #1;
    check(pp1_valid == 1'b0, "C3: pp1_valid=0 (bubble exited)");
    check(dut.pp0_valid == 1'b0, "C3: pp0_valid=0");
  endtask

  task automatic tc_bs_11();
    test_id = 11;
    $display("\n=== Test %0d: Back-to-Back Grants ===", test_id);
    drive_default();

    // Cycle 0: Grant A enters PP0
    grant_valid    = 1'b1;
    grant_addr     = 12'h004;  // [9:2] = 0x01
    grant_id       = 6'h01;
    grant_we       = 1'b0;
    sram_rdata     = 32'hDADA_0001;  // SRAM data for A
    bank_pp1_ready = 1'b1;

    @(posedge clk);
    #1;
    check(dut.pp0_valid == 1'b1, "C1: pp0_valid=1");
    check(dut.pp0_id == 6'h01, "C1: pp0_id=A");
    check(sram_addr == 8'h01, "C1: sram_addr=A");

    // Cycle 1: Grant B enters PP0, PP1 captures A from PP0
    // IMPORTANT: sram_rdata must still hold A's data through this posedge
    // because PP1 samples sram_rdata at the clock edge.
    grant_valid = 1'b1;
    grant_addr  = 12'h008;  // [9:2] = 0x02
    grant_id    = 6'h02;
    // sram_rdata = 32'hDADA_0001  (still A's data!)

    @(posedge clk);
    #1;
    check(pp1_valid == 1'b1, "C2: pp1_valid=1");
    check(pp1_id == 6'h01, "C2: pp1_id=A");
    check(pp1_rdata == 32'hDADA_0001, "C2: pp1_rdata=A");
    check(dut.pp0_valid == 1'b1, "C2: pp0_valid=1");
    check(dut.pp0_id == 6'h02, "C2: pp0_id=B");
    check(sram_addr == 8'h02, "C2: sram_addr=B");

    // NOW switch to B's data for the next capture
    sram_rdata  = 32'hDADA_0002;

    // Cycle 2: No more grants, PP1 captures B from PP0
    grant_valid = 1'b0;

    @(posedge clk);
    #1;
    check(pp1_valid == 1'b1, "C3: pp1_valid=1");
    check(pp1_id == 6'h02, "C3: pp1_id=B");
    check(pp1_rdata == 32'hDADA_0002, "C3: pp1_rdata=B");
    check(dut.pp0_valid == 1'b0, "C3: pp0_valid=0");
  endtask

  // TC_BS_12 — Write Response: pp1_we=1 Forwarded, pp1_rdata Not Zeroed Here
  task automatic tc_bs_12();
    test_id = 12;
    $display("\n=== Test %0d: Write Response Not Zeroed ===", test_id);
    drive_default();

    // Cycle 0: Normal (non-OOB) write
    grant_valid    = 1'b1;
    grant_addr     = 12'h020;  // non-OOB
    grant_we       = 1'b1;
    grant_data     = 32'hBEEF_0000;
    grant_strobe   = 4'hF;
    sram_rdata     = 32'hAAAA_AAAA;  // Spurious SRAM data
    bank_pp1_ready = 1'b1;

    @(posedge clk);
    #1;
    check(dut.pp0_valid == 1'b1, "pp0_valid=1");
    check(dut.pp0_err == 1'b0, "pp0_err=0");
    check(sram_we == 1'b1, "sram_we=1");

    // Cycle 1
    grant_valid = 1'b0;

    @(posedge clk);
    #1;
    check(pp1_valid == 1'b1, "pp1_valid=1");
    check(pp1_we == 1'b1, "pp1_we=1");
    check(pp1_err == 1'b0, "pp1_err=0");
    check(pp1_rdata == 32'hAAAA_AAAA, "pp1_rdata=SRAM data (not zeroed here)");
  endtask

  //========================================================================
  // Main Test Sequence
  //========================================================================
  initial begin
    $display("TB START");

    // Wait for initial reset release
    @(posedge rst_n);
    @(posedge clk);

    // Run all 12 directed tests
    tc_bs_01();
    tc_bs_02();
    tc_bs_03();
    tc_bs_04();
    tc_bs_05();
    tc_bs_06();
    tc_bs_07();
    tc_bs_08();
    tc_bs_09();
    tc_bs_10();
    tc_bs_11();
    tc_bs_12();

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
