// tb_req_fifo.sv
`timescale 1ns / 1ps

module tb_req_fifo;

  // ============================================================
  // Parameters
  // ============================================================
  localparam int DATA_WIDTH = 64;
  localparam int QUEUE_DEPTH = 4;

  // ============================================================
  // DUT signals
  // ============================================================
  logic                  clk;
  logic                  rst_n;
  logic                  push_valid;
  logic                  push_ready;
  logic [DATA_WIDTH-1:0] push_data;
  logic                  head_valid;
  logic [DATA_WIDTH-1:0] head_data;
  logic                  pop;
  logic                  full;
  logic                  empty;

  // ============================================================
  // Test variables
  // ============================================================
  logic [DATA_WIDTH-1:0] A, B, C, D;
  logic [DATA_WIDTH-1:0] D0, D1, D2, D3, D4, D5, D6, D7;
  logic [DATA_WIDTH-1:0] old_head;
  logic [DATA_WIDTH-1:0] cap_data;
  logic [DATA_WIDTH-1:0] exp_data;

  int error_count = 0;
  int test_id = 0;
  // ============================================================
  // DUT instantiation
  // ============================================================
  req_fifo #(
      .DATA_WIDTH (DATA_WIDTH),
      .QUEUE_DEPTH(QUEUE_DEPTH)
  ) dut (
      .clk       (clk),
      .rst_n     (rst_n),
      .push_valid(push_valid),
      .push_ready(push_ready),
      .push_data (push_data),
      .head_valid(head_valid),
      .head_data (head_data),
      .pop       (pop),
      .full      (full),
      .empty     (empty)
  );
  // ============================================================
  // Clock generation
  // ============================================================
  initial clk = 1'b0;
  always #5 clk = ~clk;  //10ns period (5ns low + 5ns high)

  // ============================================================
  // Wave dump / watchdog
  // ============================================================
  initial begin
    $dumpfile("waves/req_fifo.vcd");
    $dumpvars(0, tb_req_fifo);
  end

  initial begin
    #2000ns;
    $display("[ERROR] WATCHDOG EXPIRED @ time %0t", $time);
    $finish;
  end
  // ============================================================
  // Reset
  // ============================================================
  initial begin
    rst_n      = 1'b0;
    push_valid = 1'b0;
    push_data  = '0;
    pop        = 1'b0;
    repeat (1) @(posedge clk);
    rst_n = 1'b1;
  end

  // ============================================================
  // Helpers
  // ============================================================
  task automatic check(input bit cond, input string msg);
    if (!cond) begin
      $display("[ERROR] Test %0d: %s @ time %0t", test_id, msg, $time);
      error_count++;
    end else begin
      $display("[OK]    Test %0d: %s @ time %0t", test_id, msg, $time);
    end
  endtask

  task automatic idle_cycle();
    @(posedge clk);
    push_valid = 1'b0;
    push_data  = '0;
    pop        = 1'b0;
  endtask

  task automatic push_1(input logic [DATA_WIDTH-1:0] data);
    push_data  = data;
    push_valid = 1'b1;
    @(posedge clk);
    push_valid = 1'b0;
    push_data  = '0;
  endtask

  task automatic pop_1();
    pop = 1'b1;
    @(posedge clk);
    $display("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h", pop, dut.rd_ptr, head_data);
    pop = 1'b0;
    $display("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h", pop, dut.rd_ptr, head_data);
  endtask

  task automatic sample_next_cycle();
    @(posedge clk);
  endtask
  // ============================================================
  // Test 1: Reset
  // ============================================================
  task automatic tc_rf_01_reset();
    test_id = 1;
    $display("\n=== TC_RF_01: Reset State Correctness ===");
    // The testbench already waited for reset deassertion before calling this task.
    check(push_ready == 1'b1, "push_ready should be 1 after reset");
    check(head_valid == 1'b0, "head_valid should be 0 after reset");
    check(full == 1'b0, "full should be 0 after reset");
    check(empty == 1'b1, "empty should be 1 after reset");
  endtask

  // ============================================================
  // Test 2: Single push
  // ============================================================
  task automatic tc_rf_02_single_push();
    test_id = 2;
    $display("\n=== TC_RF_02: Single Push ===");
    A = 64'h0000_0000_0000_00AB;
    push_1(A);
    sample_next_cycle();
    check(head_valid == 1'b1, "head_valid should be 1 one cycle after push");
    check(head_data == A, "head_data should match pushed data");
    check(push_ready == 1'b1, "push_ready should remain 1 with occupancy below full");
  endtask
  // ============================================================
  // Test 3: Fill to full
  // ============================================================
  task automatic tc_rf_03_fill_to_full();
    test_id = 3;
    $display("\n=== TC_RF_03: Fill to Full ===");
    rst_n = 1'b0;
    repeat (1) @(posedge clk);
    rst_n = 1'b1;
    push_valid = 1'b0;
    pop = 1'b0;
    @(posedge clk);

    D0 = 64'h0;
    D1 = 64'h1;
    D2 = 64'h2;
    D3 = 64'h3;

    push_1(D0);
    check(push_ready == 1'b1, "push_ready should be 1 during first push");
    push_1(D1);
    check(push_ready == 1'b1, "push_ready should be 1 during second push");
    push_1(D2);
    check(push_ready == 1'b1, "push_ready should be 1 during third push");
    push_1(D3);
    check(push_ready == 1'b0, "push_ready should be 0 on the last accepted push cycle");
    push_valid = 1'b0;
    push_data  = '0;

    sample_next_cycle();
    check(full == 1'b1, "full should be 1 one cycle after 4th push");
    check(push_ready == 1'b0, "push_ready should deassert one cycle after queue becomes full");
  endtask
  // ============================================================
  // Test 4: Push blocked when full
  // ============================================================
  task automatic tc_rf_04_push_blocked_when_full();
    test_id = 4;
    $display("\n=== TC_RF_04: Push Blocked When Full ===");
    old_head   = head_data;
    push_data  = 64'h0000_0000_0000_DEAD;
    push_valid = 1'b1;
    @(posedge clk);
    push_valid = 1'b0;
    push_data  = '0;
    @(posedge clk);
    check(head_data != 64'h0000_0000_0000_DEAD,
          "head_data should not be overwritten by blocked push");
  endtask

  // ============================================================
  // Test 5: Pop from full, ready recovers later
  // ============================================================
  task automatic tc_rf_05_pop_from_full_ready_recovers();
    test_id = 5;
    $display("\n=== TC_RF_05: Pop from Full ===");
    // Must still be full from TC_RF_03 / TC_RF_04
    check(full == 1'b1, "FIFO should be full at start of TC_RF_05");
    check(push_ready == 1'b0, "push_ready should be 0 while full");
    pop_1();
    check(push_ready == 1'b1, "push_ready should remain 1 in the pop cycle from full");
    sample_next_cycle();
    check(push_ready == 1'b1, "push_ready should recover one cycle after pop");
  endtask

  // ============================================================
  // Test 6: Combinational fall-through on pop
  // ============================================================
  task automatic tc_rf_06_fallthrough_on_pop();
    test_id = 6;
    $display("\n=== TC_RF_06: head_data Combinational Fall-Through ===");
    // Rebuild known state with A=0x11, B=0x22
    rst_n = 1'b0;
    repeat (1) @(posedge clk);
    rst_n = 1'b1;
    push_valid = 1'b0;
    pop = 1'b0;
    @(posedge clk);

    A = 64'h11;
    B = 64'h22;
    push_1(A);
    sample_next_cycle();
    push_1(B);
    sample_next_cycle();

    check(head_data == A, "head_data should initially point to A");
    // pop_1();
    pop = 1'b1;
    #1;
    check(head_data == B, "head_data should switch combinationally to B when pop is asserted");
    @(posedge clk);
    pop = 1'b0;
    sample_next_cycle();
    check(head_data == B, "head_data should remain B after pop clock edge");
  endtask
  // ============================================================
  // Test 7: head_valid deasserts after last pop
  // ============================================================
  task automatic tc_rf_07_head_valid_deasserts_after_last_pop();
    test_id = 7;
    $display("\n=== TC_RF_07: head_valid Deasserts One Cycle After Last Pop ===");
    rst_n = 1'b0;
    repeat (1) @(posedge clk);
    rst_n = 1'b1;
    push_valid = 1'b0;
    pop = 1'b0;
    @(posedge clk);

    push_1(64'h55);
    sample_next_cycle();
    check(head_valid == 1'b1, "head_valid should be 1 with one entry present");
    pop = 1'b1;
    check(head_valid == 1'b1, "head_valid should still be 1 in same cycle as pop");
    @(posedge clk);
    pop = 1'b0;
    sample_next_cycle();
    check(head_valid == 1'b0, "head_valid should deassert one cycle after last pop");
    check(empty == 1'b1, "empty should be 1 after last pop");
  endtask
  // ============================================================
  // Test 8: Simultaneous push+pop at occupancy=1
  // ============================================================
  task automatic tc_rf_08_simul_push_pop_occ1();
    test_id = 8;
    $display("\n=== TC_RF_08: Simultaneous Push+Pop at occupancy=1 ===");
    rst_n = 1'b0;
    repeat (1) @(posedge clk);
    rst_n = 1'b1;
    push_valid = 1'b0;
    pop = 1'b0;
    @(posedge clk);

    A = 64'hAA;
    B = 64'hBB;
    push_1(A);
    sample_next_cycle();
    check(head_data == A, "head_data should be A before simultaneous push+pop");

    push_data  = B;
    push_valid = 1'b1;
    pop        = 1'b1;
    #1;
    check(head_data == B, "head_data should switch combinationally to B in same cycle");
    check(push_ready == 1'b1, "push_ready should stay 1");
    @(posedge clk);
    push_valid = 1'b0;
    pop        = 1'b0;
    sample_next_cycle();
    check(head_valid == 1'b1, "head_valid should remain 1 after simultaneous push+pop");
    check(head_data == B, "head_data should be B after the cycle");
  endtask

  // ============================================================
  // Test 9: Simultaneous push+pop near-full
  // ============================================================
  task automatic tc_rf_09_simul_push_pop_near_full();
    test_id = 9;
    $display("\n=== TC_RF_09: Simultaneous Push+Pop Near-Full ===");
    rst_n = 1'b0;
    repeat (1) @(posedge clk);
    rst_n = 1'b1;
    push_valid = 1'b0;
    pop = 1'b0;
    @(posedge clk);

    push_1(64'h1);
    push_1(64'h2);
    push_1(64'h3);
    sample_next_cycle();
    check(push_ready == 1'b1, "push_ready should remain 1 at occupancy=3");

    push_data  = 64'hCC;
    push_valid = 1'b1;
    pop        = 1'b1;
    #1;
    check(push_ready == 1'b1, "push_ready should not transiently deassert");
    @(posedge clk);
    push_valid = 1'b0;
    pop        = 1'b0;
    sample_next_cycle();
    check(push_ready == 1'b1, "push_ready should remain 1 after simultaneous push+pop near-full");
    check(full == 1'b0, "full should remain 0");
  endtask
  // ============================================================
  // Test 10: Pop when empty
  // ============================================================
  task automatic tc_rf_10_pop_when_empty();
    test_id = 10;
    $display("\n=== TC_RF_10: Pop When Empty ===");
    rst_n = 1'b0;
    repeat (1) @(posedge clk);
    rst_n = 1'b1;
    push_valid = 1'b0;
    pop = 1'b0;
    @(posedge clk);

    check(empty == 1'b1, "empty should be 1 after reset");
    pop = 1'b1;
    @(posedge clk);
    pop = 1'b0;
    sample_next_cycle();
    check(empty == 1'b1, "empty should remain 1 after pop on empty");
    check(head_valid == 1'b0, "head_valid should remain 0 after pop on empty");
  endtask

  // ============================================================
  // Test 11: Pointer wrap-around
  // ============================================================
  task automatic tc_rf_11_pointer_wrap();
    test_id = 11;
    $display("\n=== TC_RF_11: Pointer Wrap-Around Integrity ===");
    rst_n = 1'b0;
    repeat (1) @(posedge clk);
    rst_n = 1'b1;
    push_valid = 1'b0;
    pop = 1'b0;
    @(posedge clk);

    D0 = 64'h10;
    D1 = 64'h20;
    D2 = 64'h30;
    D3 = 64'h40;
    D4 = 64'h50;
    D5 = 64'h60;
    D6 = 64'h70;
    D7 = 64'h80;

    push_1(D0);
    push_1(D1);
    push_1(D2);
    push_1(D3);
    sample_next_cycle();

    pop_1();
    sample_next_cycle();
    check(head_data == D1, "Pop order should preserve D1");
    pop_1();
    sample_next_cycle();
    check(head_data == D2, "Pop order should preserve D2");
    pop_1();
    sample_next_cycle();
    check(head_data == D3, "Pop order should preserve D3");
    pop_1();
    sample_next_cycle();
    check(empty == 1'b1, "FIFO should be empty after first 4 pops");

    push_1(D4);
    push_1(D5);
    push_1(D6);
    push_1(D7);
    sample_next_cycle();

    pop_1();
    sample_next_cycle();
    check(head_data == D5, "Wrap pop order should preserve D5");
    pop_1();
    sample_next_cycle();
    check(head_data == D6, "Wrap pop order should preserve D6");
    pop_1();
    sample_next_cycle();
    check(head_data == D7, "Wrap pop order should preserve D7");
    pop_1();
    sample_next_cycle();
    check(empty == 1'b1, "FIFO should be empty after second drain");
  endtask

  // ============================================================
  // Test 12: Last-slot critical edge case
  // ============================================================
  task automatic tc_rf_12_last_slot_edge();
    test_id = 12;
    $display("\n=== TC_RF_12: Last-Slot Critical Edge Case ===");
    rst_n = 1'b0;
    repeat (1) @(posedge clk);
    rst_n = 1'b1;
    push_valid = 1'b0;
    pop = 1'b0;
    @(posedge clk);

    push_1(64'h0);
    push_1(64'h1);
    push_1(64'h2);
    sample_next_cycle();

    push_data  = 64'hFE;
    push_valid = 1'b1;
    check(push_ready == 1'b1, "push_ready should still be 1 in the last-slot cycle");
    @(posedge clk);
    push_valid = 1'b0;
    push_data  = '0;
    sample_next_cycle();
    check(full == 1'b1, "full should assert one cycle after last-slot push");
    check(head_data == 64'h0, "first entry should not be lost");
  endtask
  // ============================================================
  // Test 13: No combinational push_valid -> push_ready dependency
  // ============================================================
  task automatic tc_rf_13_no_comb_path();
    test_id = 13;
    $display("\n=== TC_RF_13: No Combinational push_valid -> push_ready Dependency ===");
    rst_n = 1'b0;
    repeat (1) @(posedge clk);
    rst_n      = 1'b1;
    push_valid = 1'b0;
    push_data  = '0;
    pop        = 1'b0;
    @(posedge clk);

    check(push_ready == 1'b1, "push_ready should start at 1");
    push_valid = 1'b1;
    #1;
    check(push_ready == 1'b1,
          "push_ready should not change combinationally when push_valid toggles high");
    push_valid = 1'b0;
    #1;
    check(push_ready == 1'b1,
          "push_ready should not change combinationally when push_valid toggles low");
    @(posedge clk);
    check(push_ready == 1'b1, "push_ready should only change on clock edges");
  endtask

  // ============================================================
  // Main sequence
  // ============================================================
  initial begin
    @(posedge rst_n);
    @(posedge clk);

    tc_rf_01_reset();
    tc_rf_02_single_push();
    tc_rf_03_fill_to_full();
    tc_rf_04_push_blocked_when_full();
    tc_rf_05_pop_from_full_ready_recovers();
    tc_rf_06_fallthrough_on_pop();
    tc_rf_07_head_valid_deasserts_after_last_pop();
    tc_rf_08_simul_push_pop_occ1();
    tc_rf_09_simul_push_pop_near_full();
    tc_rf_10_pop_when_empty();
    tc_rf_11_pointer_wrap();
    tc_rf_12_last_slot_edge();
    tc_rf_13_no_comb_path();

    $display("\n=== TESTBENCH SUMMARY ===");
    if (error_count == 0) $display("ALL TESTS PASSED");
    else $display("%0d TEST(S) FAILED", error_count);

    $finish;
  end
endmodule
