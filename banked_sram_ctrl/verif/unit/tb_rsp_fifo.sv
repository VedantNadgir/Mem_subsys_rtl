// tb_rsp_fifo.sv
`timescale 1ns / 1ps

module tb_rsp_fifo;

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
  logic                  pop_valid;
  logic                  pop_ready;
  logic [DATA_WIDTH-1:0] pop_data;
  logic                  full;
  logic                  empty;

  // ============================================================
  // Test variables
  // ============================================================
  logic [DATA_WIDTH-1:0] A, B;
  logic [DATA_WIDTH-1:0] D0, D1, D2, D3, D4, D5, D6, D7;
  logic [DATA_WIDTH-1:0] observed[0:7];
  int error_count = 0;
  int test_id = 0;

  // ============================================================
  // DUT instantiation
  // ============================================================
  rsp_fifo #(
      .DATA_WIDTH (DATA_WIDTH),
      .QUEUE_DEPTH(QUEUE_DEPTH)
  ) dut (
      .clk       (clk),
      .rst_n     (rst_n),
      .push_valid(push_valid),
      .push_ready(push_ready),
      .push_data (push_data),
      .pop_valid (pop_valid),
      .pop_ready (pop_ready),
      .pop_data  (pop_data),
      .full      (full),
      .empty     (empty)
  );

  // ============================================================
  // Clock generation
  // ============================================================
  initial clk = 1'b0;
  always #5 clk = ~clk;

  // ============================================================
  // Wave dump / watchdog
  // ============================================================
  initial begin
    $dumpfile("waves/rsp_fifo.vcd");
    $dumpvars(0, tb_rsp_fifo);
  end

  initial begin
    #2500ns;
    $display("[ERROR] WATCHDOG EXPIRED @ time %0t", $time);
    $finish;
  end

  // ============================================================
  // Basic drive defaults
  // ============================================================
  initial begin
    rst_n      = 1'b1;
    push_valid = 1'b0;
    push_data  = '0;
    pop_ready  = 1'b0;
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

  task automatic tb_reset();
    begin
      push_valid = 1'b0;
      push_data  = '0;
      pop_ready  = 1'b0;
      rst_n      = 1'b0;
      @(posedge clk);
      #1;
      rst_n = 1'b1;
      @(posedge clk);
      #1;
    end
  endtask

  task automatic idle_one_cycle();
    begin
      push_valid = 1'b0;
      push_data  = '0;
      pop_ready  = 1'b0;
      @(posedge clk);
      #1;
    end
  endtask

  task automatic push_beat(input logic [DATA_WIDTH-1:0] data);
    begin
      push_data  = data;
      push_valid = 1'b1;
      @(posedge clk);
      #1;
      push_valid = 1'b0;
      push_data  = '0;
    end
  endtask

  task automatic pop_beat();
    begin
      pop_ready = 1'b1;
      @(posedge clk);
      #1;
      pop_ready = 1'b0;
    end
  endtask

  task automatic fill_four_known();
    begin
      push_beat(64'h10);
      push_beat(64'h20);
      push_beat(64'h30);
      push_beat(64'h40);
    end
  endtask

  // ============================================================
  // TC_RSP_01 — Reset State Correctness
  // ============================================================
  task automatic tc_rsp_01_reset_state();
    begin
      test_id = 1;
      $display("\n=== TC_RSP_01: Reset State Correctness ===");
      tb_reset();

      check(push_ready == 1'b1, "push_ready should be 1 after reset");
      check(pop_valid == 1'b0, "pop_valid should be 0 after reset");
      check(full == 1'b0, "full should be 0 after reset");
      check(empty == 1'b1, "empty should be 1 after reset");
    end
  endtask

  // ============================================================
  // TC_RSP_02 — push_ready combinational deassert on last push
  // ============================================================
  task automatic tc_rsp_02_push_ready_same_cycle_deassert();
    begin
      test_id = 2;
      $display("\n=== TC_RSP_02: push_ready COMBINATIONAL Deassert ===");
      tb_reset();

      push_beat(64'h1);
      push_beat(64'h2);
      push_beat(64'h3);

      check(push_ready == 1'b1, "push_ready should be 1 before 4th push");
      push_data  = 64'h4;
      push_valid = 1'b1;
      #1;
      check(push_ready == 1'b1, "push_ready should still be 1 before 4th push edge");

      @(posedge clk);
      #1;
      check(push_ready == 1'b0, "push_ready should deassert immediately after 4th push edge");
      check(full == 1'b1, "full should assert after 4th push");
      push_valid = 1'b0;
      push_data  = '0;
    end
  endtask

  // ============================================================
  // TC_RSP_03 — push_ready recovers same cycle as pop from full
  // ============================================================
  task automatic tc_rsp_03_push_ready_same_cycle_recovery();
    begin
      test_id = 3;
      $display("\n=== TC_RSP_03: push_ready COMBINATIONAL Recovery ===");
      tb_reset();
      fill_four_known();

      check(full == 1'b1, "FIFO should be full before pop");
      check(push_ready == 1'b0, "push_ready should be 0 while full");

      pop_ready = 1'b1;
      @(posedge clk);
      #1;
      check(push_ready == 1'b1, "push_ready should recover immediately after pop from full");
      check(full == 1'b0, "full should deassert after pop from full");
      pop_ready = 1'b0;
    end
  endtask

  // ============================================================
  // TC_RSP_04 — Push blocked when full
  // ============================================================
  task automatic tc_rsp_04_push_blocked_when_full();
    begin
      test_id = 4;
      $display("\n=== TC_RSP_04: Push Blocked When Full ===");
      tb_reset();
      fill_four_known();

      check(full == 1'b1, "FIFO should be full before blocked push");
      check(push_ready == 1'b0, "push_ready should be 0 when full");

      push_data  = 64'h0000_0000_0000_DEAD;
      push_valid = 1'b1;
      #1;
      check(push_ready == 1'b0, "blocked push should see push_ready low");
      @(posedge clk);
      #1;
      push_valid  = 1'b0;
      push_data   = '0;

      pop_ready   = 1'b1;
      observed[0] = pop_data;
      @(posedge clk);
      #1;
      observed[1] = pop_data;
      @(posedge clk);
      #1;
      observed[2] = pop_data;
      @(posedge clk);
      #1;
      observed[3] = pop_data;
      @(posedge clk);
      #1;
      pop_ready = 1'b0;

      check(observed[0] == 64'h10, "First drained entry should remain 0x10");
      check(observed[1] == 64'h20, "Second drained entry should remain 0x20");
      check(observed[2] == 64'h30, "Third drained entry should remain 0x30");
      check(observed[3] == 64'h40, "Fourth drained entry should remain 0x40");
    end
  endtask

  // ============================================================
  // TC_RSP_05 — Single push -> pop_valid next cycle
  // ============================================================
  task automatic tc_rsp_05_single_push_pop_valid();
    begin
      test_id = 5;
      $display("\n=== TC_RSP_05: Single Push -> pop_valid Next Cycle ===");
      tb_reset();

      A = 64'h0000_0000_0000_00AB;
      push_data = A;
      push_valid = 1'b1;
      @(posedge clk);
      #1;
      push_valid = 1'b0;
      push_data  = '0;

      check(pop_valid == 1'b1, "pop_valid should assert after one push");
      check(pop_data == A, "pop_data should match pushed value");
      check(push_ready == 1'b1, "push_ready should remain high with one entry");
    end
  endtask

  // ============================================================
  // TC_RSP_06 — pop_valid deasserts one cycle after last pop
  // ============================================================
  task automatic tc_rsp_06_pop_valid_deassert();
    begin
      test_id = 6;
      $display("\n=== TC_RSP_06: pop_valid Deassert After Last Pop ===");
      tb_reset();

      push_beat(64'h55);
      check(pop_valid == 1'b1, "pop_valid should be 1 with one entry");

      pop_ready = 1'b1;
      #1;
      check(pop_valid == 1'b1, "pop_valid should still be 1 before pop edge");
      @(posedge clk);
      #1;
      pop_ready = 1'b0;
      check(pop_valid == 1'b0, "pop_valid should deassert after last pop");
      check(empty == 1'b1, "empty should assert after last pop");
    end
  endtask

  // ============================================================
  // TC_RSP_07 — pop_data stable until posedge, next data after edge
  // ============================================================
  task automatic tc_rsp_07_pop_data_stable_until_edge();
    begin
      test_id = 7;
      $display("\n=== TC_RSP_07: pop_data Stable Until After Posedge ===");
      tb_reset();

      A = 64'h11;
      B = 64'h22;

      push_beat(A);
      push_beat(B);

      check(pop_data == A, "pop_data should show A before pop");

      pop_ready = 1'b1;
      #1;
      check(pop_data == A, "pop_data should remain A before the pop edge");
      @(posedge clk);
      #1;
      check(pop_data == B, "pop_data should switch to B immediately after pop edge");
      pop_ready = 1'b0;
    end
  endtask

  // ============================================================
  // TC_RSP_08 — Simultaneous push+pop
  // ============================================================
  task automatic tc_rsp_08_simultaneous_push_pop();
    begin
      test_id = 8;
      $display("\n=== TC_RSP_08: Simultaneous Push+Pop ===");
      tb_reset();

      A = 64'hAA;
      B = 64'hBB;

      push_beat(A);
      check(pop_valid == 1'b1, "pop_valid should be 1 before simultaneous push+pop");
      check(pop_data == A, "pop_data should be A before simultaneous push+pop");
      check(push_ready == 1'b1, "push_ready should be 1 before simultaneous push+pop");

      push_data  = B;
      push_valid = 1'b1;
      pop_ready  = 1'b1;
      @(posedge clk);
      #1;
      push_valid = 1'b0;
      push_data  = '0;
      pop_ready  = 1'b0;

      check(pop_valid == 1'b1, "pop_valid should remain 1 after simultaneous push+pop");
      check(pop_data == B, "pop_data should advance to B after simultaneous push+pop");
      check(push_ready == 1'b1, "push_ready should remain high");
    end
  endtask

  // ============================================================
  // TC_RSP_09 — Full + simultaneous attempt => only pop fires
  // ============================================================
  task automatic tc_rsp_09_full_simultaneous_attempt();
    begin
      test_id = 9;
      $display("\n=== TC_RSP_09: Simultaneous Attempt When Full ===");
      tb_reset();
      fill_four_known();

      check(full == 1'b1, "FIFO should be full before simultaneous attempt");
      check(push_ready == 1'b0, "push_ready should be low when full");

      push_data  = 64'h0000_0000_0000_00CC;
      push_valid = 1'b1;
      pop_ready  = 1'b1;
      #1;
      check(push_ready == 1'b0, "push remains blocked before the edge while full");

      @(posedge clk);
      #1;
      push_valid = 1'b0;
      push_data  = '0;
      pop_ready  = 1'b0;

      check(push_ready == 1'b1, "push_ready should become 1 after the pop frees a slot");
      check(pop_data == 64'h20, "next visible head should be 0x20, proving 0xCC was not pushed");
      check(full == 1'b0, "full should deassert after only the pop fires");
    end
  endtask

  // ============================================================
  // TC_RSP_10 — Pop when empty
  // ============================================================
  task automatic tc_rsp_10_pop_when_empty();
    begin
      test_id = 10;
      $display("\n=== TC_RSP_10: Pop When Empty ===");
      tb_reset();

      check(empty == 1'b1, "empty should be 1 after reset");
      check(pop_valid == 1'b0, "pop_valid should be 0 when empty");

      pop_ready = 1'b1;
      @(posedge clk);
      #1;
      check(empty == 1'b1, "empty should remain 1 after pop on empty");
      check(pop_valid == 1'b0, "pop_valid should remain 0 after pop on empty");

      @(posedge clk);
      #1;
      check(empty == 1'b1, "empty should still remain 1 on second empty-pop cycle");
      check(pop_valid == 1'b0, "pop_valid should still remain 0 on second empty-pop cycle");
      pop_ready = 1'b0;
    end
  endtask

  // ============================================================
  // TC_RSP_11 — FIFO in-order data integrity
  // ============================================================
  task automatic tc_rsp_11_in_order_data();
    begin
      test_id = 11;
      $display("\n=== TC_RSP_11: FIFO In-Order Data Integrity ===");
      tb_reset();

      D0 = 64'h10;
      D1 = 64'h20;
      D2 = 64'h30;
      D3 = 64'h40;

      push_beat(D0);
      push_beat(D1);
      push_beat(D2);
      push_beat(D3);

      observed[0] = pop_data;
      pop_ready   = 1'b1;
      @(posedge clk);
      #1;
      observed[1] = pop_data;
      @(posedge clk);
      #1;
      observed[2] = pop_data;
      @(posedge clk);
      #1;
      observed[3] = pop_data;
      @(posedge clk);
      #1;
      pop_ready = 1'b0;

      check(observed[0] == D0, "1st popped entry should be D0");
      check(observed[1] == D1, "2nd popped entry should be D1");
      check(observed[2] == D2, "3rd popped entry should be D2");
      check(observed[3] == D3, "4th popped entry should be D3");
      check(empty == 1'b1, "FIFO should be empty after draining all entries");
      check(pop_valid == 1'b0, "pop_valid should be 0 when empty");
    end
  endtask

  // ============================================================
  // TC_RSP_12 — Pointer wrap-around integrity
  // ============================================================
  task automatic tc_rsp_12_pointer_wraparound();
    begin
      test_id = 12;
      $display("\n=== TC_RSP_12: Pointer Wrap-Around Integrity ===");
      tb_reset();

      D0 = 64'h10;
      D1 = 64'h20;
      D2 = 64'h30;
      D3 = 64'h40;
      D4 = 64'h50;
      D5 = 64'h60;
      D6 = 64'h70;
      D7 = 64'h80;

      push_beat(D0);
      push_beat(D1);
      push_beat(D2);
      push_beat(D3);

      observed[0] = pop_data;
      pop_ready   = 1'b1;
      @(posedge clk);
      #1;
      observed[1] = pop_data;
      @(posedge clk);
      #1;
      observed[2] = pop_data;
      @(posedge clk);
      #1;
      observed[3] = pop_data;
      @(posedge clk);
      #1;
      pop_ready = 1'b0;

      check(observed[0] == D0, "First drain item should be D0");
      check(observed[1] == D1, "First drain item should be D1");
      check(observed[2] == D2, "First drain item should be D2");
      check(observed[3] == D3, "First drain item should be D3");
      check(empty == 1'b1, "FIFO should be empty after first drain");

      push_beat(D4);
      push_beat(D5);
      push_beat(D6);
      push_beat(D7);

      observed[4] = pop_data;
      pop_ready   = 1'b1;
      @(posedge clk);
      #1;
      observed[5] = pop_data;
      @(posedge clk);
      #1;
      observed[6] = pop_data;
      @(posedge clk);
      #1;
      observed[7] = pop_data;
      @(posedge clk);
      #1;
      pop_ready = 1'b0;

      check(observed[4] == D4, "Second drain item should be D4");
      check(observed[5] == D5, "Second drain item should be D5");
      check(observed[6] == D6, "Second drain item should be D6");
      check(observed[7] == D7, "Second drain item should be D7");
      check(empty == 1'b1, "FIFO should be empty after second drain");
    end
  endtask

  // ============================================================
  // Main sequence
  // ============================================================
  initial begin
    @(posedge clk);
    #1;

    tc_rsp_01_reset_state();
    tc_rsp_02_push_ready_same_cycle_deassert();
    tc_rsp_03_push_ready_same_cycle_recovery();
    tc_rsp_04_push_blocked_when_full();
    tc_rsp_05_single_push_pop_valid();
    tc_rsp_06_pop_valid_deassert();
    tc_rsp_07_pop_data_stable_until_edge();
    tc_rsp_08_simultaneous_push_pop();
    tc_rsp_09_full_simultaneous_attempt();
    tc_rsp_10_pop_when_empty();
    tc_rsp_11_in_order_data();
    tc_rsp_12_pointer_wraparound();

    $display("\n=== TESTBENCH SUMMARY ===");
    if (error_count == 0) $display("ALL TESTS PASSED");
    else $display("%0d TEST(S) FAILED", error_count);

    $finish;
  end
endmodule
