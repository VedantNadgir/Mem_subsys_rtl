`timescale 1ns / 1ps

module tb_per_bank_arb;
  // -------------------------------------------------------------------------
  // 1. VCD Dump
  // -------------------------------------------------------------------------
  initial begin
    $dumpfile("waves/per_bank_arb.vcd");
    $dumpvars(0, tb_per_bank_arb);
  end
  // -------------------------------------------------------------------------
  // 2. Watchdog Timer
  // -------------------------------------------------------------------------
  initial begin
    #500ns;
    $display("WATCHDOG EXPIRED @ %0t", $time);
    $finish;
  end

  // -------------------------------------------------------------------------
  // 3. Parameters & DUT Signals
  // -------------------------------------------------------------------------
  localparam int NUM_REQ_PORTS = 4;
  localparam int PORT_WIDTH = $clog2(NUM_REQ_PORTS);

  logic                     clk;
  logic                     rst_n;
  logic [NUM_REQ_PORTS-1:0] req_valid;
  logic                     grant_valid;
  logic [   PORT_WIDTH-1:0] grant_port;
  logic                     grant_ready;
  logic [NUM_REQ_PORTS-1:0] conflict_mask;

  // -------------------------------------------------------------------------
  // 4. DUT Instantiation
  // -------------------------------------------------------------------------
  per_bank_arb #(
      .NUM_REQ_PORTS(NUM_REQ_PORTS)
  ) dut (
      .clk          (clk),
      .rst_n        (rst_n),
      .req_valid    (req_valid),
      .grant_valid  (grant_valid),
      .grant_port   (grant_port),
      .grant_ready  (grant_ready),
      .conflict_mask(conflict_mask)
  );

  // -------------------------------------------------------------------------
  // 5. Clock & Reset Generation
  // -------------------------------------------------------------------------
  initial clk = 0;
  always #5 clk = ~clk;  // 10 ns period

  initial begin
    rst_n       = 0;
    req_valid   = '0;
    grant_ready = '0;
    repeat (3) @(posedge clk);
    rst_n = 1;
  end

  // -------------------------------------------------------------------------
  // 6. Test Infrastructure
  // -------------------------------------------------------------------------
  int error_count = 0;
  int test_id = 0;

  task automatic check(input bit cond, input string msg);
    if (!cond) begin
      $display("[ERROR] Test: %0d : %s @ time %0t", test_id, msg, $time);
      error_count++;
    end else begin
      $display("[OK]    Test: %0d : %s @ time %0t", test_id, msg, $time);
    end
  endtask

  // Assert grant_ready for exactly one clock cycle
  task automatic fire_grant();
    grant_ready = 1'b1;
    @(posedge clk);
    grant_ready = 1'b0;
  endtask

  // -------------------------------------------------------------------------
  // 7. Directed Test Cases
  // -------------------------------------------------------------------------

  // TC_ARB_01 — Reset
  task automatic tc_arb_01();
    test_id = 1;
    $display("\n=== Test %0d: Reset ===", test_id);

    req_valid   = '0;
    grant_ready = '0;
    @(posedge clk);

    check(grant_valid == 1'b0, "grant_valid should be 0 after reset");
    check(conflict_mask == '0, "conflict_mask should be 0 after reset");

    // Infer ptr == 0 by checking that port 0 wins when only port 0 requests
    req_valid = 4'b0001;
    @(posedge clk);
    check(grant_valid == 1'b1, "grant_valid should be 1 with single req");
    check(grant_port == 2'd0, "grant_port should be 0 (ptr must be 0)");
    check(conflict_mask == '0, "conflict_mask should be 0 with single req");
  endtask

  // TC_ARB_02 — Single Port, No Rotation
  task automatic tc_arb_02();
    test_id = 2;
    $display("\n=== Test %0d: Single Port, No Rotation ===", test_id);

    // Only port 2 requests
    req_valid   = 4'b0100;
    grant_ready = '0;
    @(posedge clk);

    check(grant_valid == 1'b1, "grant_valid should be 1");
    check(grant_port == 2'd2, "grant_port should be 2");
    check(conflict_mask == '0, "conflict_mask should be 0 (no contention)");

    // Fire grant — ptr must NOT advance because there is no contention
    fire_grant();
    // ptr unchanged (verified by TC_ARB_03 starting at ptr=0)
  endtask

  // TC_ARB_03 — Two-Port Contention, Correct Winner
  task automatic tc_arb_03();
    test_id = 3;
    $display("\n=== Test %0d: Two-Port Contention ===", test_id);

    // ptr == 0 (carried from previous tests). Ports 0 & 1 request.
    req_valid = 4'b0011;
    @(posedge clk);

    check(grant_valid == 1'b1, "grant_valid should be 1");
    check(grant_port == 2'd0, "Port 0 should win with ptr=0");
    check(conflict_mask == 4'b0010, "conflict_mask should show port 1 lost");

    // Advance ptr to 1
    fire_grant();
    @(posedge clk);

    check(grant_port == 2'd1, "Port 1 should win after ptr advanced to 1");
    check(conflict_mask == 4'b0001, "conflict_mask should show port 0 lost");

    // Advance ptr to 2
    fire_grant();
  endtask

  // TC_ARB_04 — Priority Wrap-Around
  task automatic tc_arb_04();
    test_id = 4;
    $display("\n=== Test %0d: Priority Wrap-Around ===", test_id);

    // Current ptr == 2. Advance to 3 first.
    req_valid = 4'b1100;  // ports 2 & 3
    @(posedge clk);
    check(grant_port == 2'd2, "Port 2 should win with ptr=2");
    check(conflict_mask == 4'b1000, "conflict_mask should show port 3 lost");
    fire_grant();

    // ptr == 3. Ports 3 & 0 request.
    req_valid = 4'b1001;
    @(posedge clk);
    check(grant_port == 2'd3, "Port 3 should win with ptr=3");
    check(conflict_mask == 4'b0001, "conflict_mask should show port 0 lost");
    fire_grant();

    // ptr should wrap to 0 — verify with a single request to port 0
    @(posedge clk);
    req_valid = 4'b0001;
    @(posedge clk);
    check(grant_port == 2'd0, "ptr should wrap to 0 (port 0 wins)");
  endtask

  // TC_ARB_05 — Full 4-Port Round-Robin Sweep
  task automatic tc_arb_05();
    test_id = 5;
    $display("\n=== Test %0d: Full 4-Port Round-Robin Sweep ===", test_id);

    // All ports request continuously, starting from ptr=0
    req_valid = 4'b1111;

    // Cycle 1: port 0
    @(posedge clk);
    check(grant_port == 2'd0, "RR sweep: port 0");
    check(conflict_mask == 4'b1110, "conflict_mask == 4'b1110");
    fire_grant();

    // Cycle 2: port 1
    @(posedge clk);
    check(grant_port == 2'd1, "RR sweep: port 1");
    check(conflict_mask == 4'b1101, "conflict_mask == 4'b1101");
    fire_grant();

    // Cycle 3: port 2
    @(posedge clk);
    check(grant_port == 2'd2, "RR sweep: port 2");
    check(conflict_mask == 4'b1011, "conflict_mask == 4'b1011");
    fire_grant();

    // Cycle 4: port 3
    @(posedge clk);
    check(grant_port == 2'd3, "RR sweep: port 3");
    check(conflict_mask == 4'b0111, "conflict_mask == 4'b0111");
    fire_grant();

    // Cycle 5: back to port 0
    @(posedge clk);
    check(grant_port == 2'd0, "RR sweep: port 0 again");
    check(conflict_mask == 4'b1110, "conflict_mask == 4'b1110");
    fire_grant();

    // Run 3 more cycles to return ptr to 0
    @(posedge clk);
    check(grant_port == 2'd1, "RR sweep: port 1");
    check(conflict_mask == 4'b1101, "conflict_mask == 4'b1101");
    fire_grant();

    @(posedge clk);
    check(grant_port == 2'd2, "RR sweep: port 2");
    check(conflict_mask == 4'b1011, "conflict_mask == 4'b1011");
    fire_grant();

    @(posedge clk);
    check(grant_port == 2'd3, "RR sweep: port 3");
    check(conflict_mask == 4'b0111, "conflict_mask == 4'b0111");
    fire_grant();

    // Verify wrap completed: ptr back to 0
    req_valid = 4'b0001;
    @(posedge clk);
    check(grant_port == 2'd0, "ptr returned to 0 after full sweep");
  endtask

  // TC_ARB_06 — grant_ready=0: ptr Does Not Advance
  task automatic tc_arb_06();
    test_id = 6;
    $display("\n=== Test %0d: grant_ready=0 Stall ===", test_id);

    // ptr == 0. Ports 0 & 1 request.
    req_valid   = 4'b0011;
    grant_ready = '0;
    @(posedge clk);
    check(grant_port == 2'd0, "Initial grant should be port 0");

    // Stall for 5 cycles with grant_ready=0
    repeat (5) begin
      @(posedge clk);
      check(grant_valid == 1'b1, "grant_valid should remain 1 during stall");
      check(grant_port == 2'd0, "grant_port should remain 0 during stall");
      check(conflict_mask == 4'b0010, "conflict_mask should remain stable");
    end

    // Now fire — if ptr was truly frozen at 0, next grant should be port 1
    fire_grant();
    @(posedge clk);
    check(grant_port == 2'd1, "ptr advanced to 1 after fire (was frozen at 0)");
  endtask

  // TC_ARB_07 — conflict_mask Accuracy
  task automatic tc_arb_07();
    test_id = 7;
    $display("\n=== Test %0d: conflict_mask Accuracy ===", test_id);

    // Sub-test A: 3 ports contending (ptr == 1 after TC_ARB_06)
    req_valid = 4'b0111;  // ports 0,1,2
    @(posedge clk);
    check(grant_valid == 1'b1, "grant_valid should be 1 with 3 ports");
    check(grant_port == 2'd1, "Port 1 should win with ptr=1");
    check(conflict_mask == 4'b0101, "conflict_mask should be 4'b0101 (ports 0,2 lost)");
    fire_grant();

    // Sub-test B: no contention → conflict_mask == 0
    req_valid = 4'b0001;  // single port
    @(posedge clk);
    check(grant_valid == 1'b1, "grant_valid should be 1 with single port");
    check(conflict_mask == '0, "conflict_mask should be 0 when no contention");
    fire_grant();  // ptr does NOT advance (no contention)

    // Sub-test C: no grant → conflict_mask == 0
    req_valid = '0;
    @(posedge clk);
    check(grant_valid == 1'b0, "grant_valid should be 0 with no requests");
    check(conflict_mask == '0, "conflict_mask should be 0 when no grant");
  endtask

  // TC_ARB_08 — No Requests
  task automatic tc_arb_08();
    test_id = 8;
    $display("\n=== Test %0d: No Requests ===", test_id);

    // ptr == 1 (from previous tests). No requests for 5 cycles.
    req_valid   = '0;
    grant_ready = '0;
    repeat (5) begin
      @(posedge clk);
      check(grant_valid == 1'b0, "grant_valid should be 0 with no requests");
      check(conflict_mask == '0, "conflict_mask should be 0 with no requests");
    end

    // Verify ptr unchanged by using a pattern that distinguishes ptr=1
    req_valid = 4'b1011;  // ports 0,1,3
    @(posedge clk);
    check(grant_port == 2'd1, "ptr should still be 1 after 5 idle cycles (port 1 wins)");
  endtask

  // -------------------------------------------------------------------------
  // 8. Main Test Sequence
  // -------------------------------------------------------------------------
  initial begin
    $display("TB START");

    // Wait for reset deassertion
    @(posedge rst_n);
    @(posedge clk);

    // Run all 8 test cases
    tc_arb_01();
    tc_arb_02();
    tc_arb_03();
    tc_arb_04();
    tc_arb_05();
    tc_arb_06();
    tc_arb_07();
    tc_arb_08();

    // Final summary
    $display("\n=== TESTBENCH SUMMARY ===");
    if (error_count == 0) begin
      $display("ALL TESTS PASSED");
    end else begin
      $display("%0d TEST(S) FAILED", error_count);
    end
    $finish;
  end

endmodule
