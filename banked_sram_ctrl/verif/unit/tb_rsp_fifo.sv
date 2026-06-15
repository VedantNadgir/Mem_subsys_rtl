// tb_rsp_fifo.sv
// 1. Clock generation
// 2. Reset generation
// 3. DUT instantiation
// 4. Helper tasks
// 5. Directed tests
// 6. Pass/fail summary

`timescale 1ns / 1ps

module tb_rsp_fifo;
  initial begin
    $dumpfile("waves/rsp_fifo.vcd");
    $dumpvars(0, tb_rsp_fifo);
  end
  initial begin
    #600ns;
    $display("WATCHDOG EXPIRED");
    $finish;
  end

  //Parameters
  localparam int DATA_WIDTH = 64;
  localparam int QUEUE_DEPTH = 4;

  //DUT signal
  logic                  clk;
  logic                  rst_n;

  //Push from response mux
  logic                  push_valid;
  logic                  push_ready;  // = !full
  logic [DATA_WIDTH-1:0] push_data;

  //Pop to requestor
  logic                  pop_valid;  // = !empty
  logic                  pop_ready;
  logic [DATA_WIDTH-1:0] pop_data;

  //Status
  logic                  full;
  logic                  empty;

  // Test variables
  logic [DATA_WIDTH-1:0] A;
  logic [DATA_WIDTH-1:0] B, C, D;
  logic [DATA_WIDTH-1:0] old_head;
  logic [DATA_WIDTH-1:0] val;
  logic [DATA_WIDTH-1:0] pop_before;
  logic [DATA_WIDTH-1:0] Z, W;

  //DUT instantiation
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

  //Clock generation
  initial clk = 0;
  always #5 clk = ~clk;  //10ns period (5ns low + 5ns high)
  initial begin
    $display("TB START");
  end
  //reset generation
  initial begin
    rst_n = 0;
    push_valid = 0;
    push_data = 0;
    pop_ready = 0;

    repeat (3) @(posedge clk);
    rst_n = 1;
  end

  //Helper tasks
  int error_count = 0;
  int test_id = 0;

  task automatic check(input bit cond, input string msg);
    if (!cond) begin
      $display("[ERROR] Test: %0d : %s @ time %0t", test_id, msg, $time);
      error_count++;
    end else begin
      $display("[OK]    Test %0d : %s @ time %0t", test_id, msg, $time);
    end
  endtask

  //Push 1 entry when FIFO is ready
  task automatic push(input [DATA_WIDTH-1:0] data);
    //wait until FIFO ready
    @(posedge clk);
    while (!push_ready) begin
      @(posedge clk);
    end

    push_data  = data;
    push_valid = 1'b1;
    @(posedge clk);  //1 cycle of push_valid = 1
    push_data  = 0;
    push_valid = 1'b0;
  endtask

  //Pop 1 entry
  task automatic pop_fifo();
    @(posedge clk);
    pop_ready = 1'b1;
    @(posedge clk);
    pop_ready = 1'b0;
  endtask

  //Tests:
  initial begin
    // Wait for reset deassert
    @(posedge rst_n);
    @(posedge clk);
    // 1) Reset
    test_id = 1;
    $display("\n=== Test %0d: Reset ===", test_id);
    check(empty == 1'b1, "empty should be 1 after reset");
    check(full == 1'b0, "full should be 0 after reset");
    check(pop_valid == 1'b0, "pop_valid should be 0 after reset");
    check(push_ready == 1'b1, "push_ready should be 1 after reset");

    //2) single push
    test_id = 2;
    $display("\n=== Test %0d: Single Push ===", test_id);
    A = 64'hA5A5_0000_0000_0001;
    push(A);
    @(posedge clk);  // allow pop_data to settle
    check(empty == 1'b0, "empty should be 0 after one push");
    check(pop_valid == 1'b1, "pop_valid should be 1 after one push");
    check(pop_data == A, "pop_data should match pushed value A");

    //3) push then pop
    test_id = 3;
    $display("\n=== Test %0d: Push then pop ===", test_id);
    // First drain existing one from Test 1
    pop_fifo();
    @(posedge clk);
    //fresh push
    push(A);
    @(posedge clk);
    check(pop_valid == 1'b1, "pop_valid should be 1 before pop");
    check(pop_data == A, "pop_data should be A before pop");
    //pop
    pop_fifo();
    @(posedge clk);
    check(empty == 1'b1, "empty should be 1 after push+pop");
    check(pop_valid == 1'b0, "pop_valid should be 0 when empty");

    //4) fill fifo
    test_id = 4;
    $display("\n=== Test %0d: Full FIFO ===", test_id);
    A = 64'h1111_0000_0000_0001;
    B = 64'h2222_0000_0000_0002;
    C = 64'h3333_0000_0000_0003;
    D = 64'h4444_0000_0000_0004;

    push(A);
    push(B);
    push(C);
    push(D);
    @(posedge clk);
    check(full == 1'b1, "full should be 1 when depth entries are pushed");
    check(push_ready == 1'b0, "push_ready should be 0 when FIFO is full");

    //5) overflow protection
    test_id = 5;
    $display("\n=== Test %0d: Overflow protection ===", test_id);
    old_head = pop_data;

    // Try to push when full
    @(posedge clk);
    push_data  = 64'hDEAD_0000_DEAD_0000;
    push_valid = 1'b1;
    @(posedge clk);
    push_valid = 1'b0;
    push_data  = '0;

    @(posedge clk);
    check(full == 1'b1, "full should stay 1 when pushing while full");
    check(push_ready == 1'b0, "push_ready should stay 0 when full");
    check(pop_data == old_head, "pop_data should not change on overflow attempt");

    //6) FIFO ordering
    test_id = 6;
    $display("\n=== Test %0d: FIFO ordering ===", test_id);
    val = A;
    check(pop_data == val, "pop_data should be A before pop");
    check(pop_valid == 1'b1, "pop_valid should be 1 before pop A");
    pop_fifo();
    @(posedge clk);
    // Pop B
    val = B;
    check(pop_valid == 1'b1, "pop_valid should be 1 before pop B");
    check(pop_data == val, "pop_data should be B before pop");
    pop_fifo();
    @(posedge clk);
    // Pop C
    val = C;
    check(pop_valid == 1'b1, "pop_valid should be 1 before pop C");
    check(pop_data == val, "pop_data should be C before pop");
    pop_fifo();
    @(posedge clk);
    // Pop D
    val = D;
    check(pop_valid == 1'b1, "pop_valid should be 1 before pop D");
    check(pop_data == val, "pop_data should be D before pop");
    pop_fifo();
    @(posedge clk);
    check(pop_valid == 1'b0, "pop_valid should be 0 no valid data to pop");
    check(empty == 1'b1, "empty should be 1 after emptying the FIFO in order");

    //7) Pop on empty FIFO
    test_id = 7;
    $display("\n=== Test %0d: pop on Empty FIFO ===", test_id);
    if (!empty) begin
      $display("[INFO] FIFO not empty at start of Test 7, draining...");
      while (!empty) begin
        pop_fifo();
        @(posedge clk);
      end
    end
    // Capture state before pop
    pop_before = pop_data;
    check(pop_valid == 1'b0, "pop_valid should be 0 when FIFO is empty");
    check(full == 1'b0, "full should be 0 when FIFO is empty");

    pop_fifo();
    @(posedge clk);
    //check behaviour
    check(empty == 1'b1, "FIFO should remain empty after pop on empty");
    check(pop_valid == 1'b0, "pop_valid should remain 0 after pop on empty");
    check(full == 1'b0, "full should remain 0 after pop on empty");
    check(pop_data == pop_before, "pop_data should not change unvalectedly on pop when empty");

    //8) Simultaneous pop + push
    test_id = 8;
    $display("\n=== Test %0d: Simultaneous Push + Pop ===", test_id);
    push(64'hAAAA_AAAA_AAAA_AAAA);  // X
    push(64'hBBBB_BBBB_BBBB_BBBB);  // Y
    @(posedge clk);

    // Now do cycles with push_valid & pop_ready both asserted
    // Validate occupancy constant and ordering preserved.
    // Example: pop X, push Z, then pop Y, push W, etc.
    Z = 64'hCCCC_CCCC_CCCC_CCCC;
    W = 64'hDDDD_DDDD_DDDD_DDDD;

    // Cycle 1: head=X, we pop X while pushing Z
    @(posedge clk);
    push_data  = Z;
    push_valid = 1'b1;
    pop_ready  = 1'b1;
    @(posedge clk);
    push_valid = 1'b0;
    push_data  = '0;
    pop_ready  = 1'b0;
    @(posedge clk);

    // Now FIFO should contain: Y, Z
    check(pop_valid == 1'b1, "pop_valid should be 1 after simultaneous push+pop");
    check(pop_data == 64'hBBBB_BBBB_BBBB_BBBB,
          "pop_data should now be Y after popping X and pushing Z");

    // Cycle 2: head=Y, we pop Y while pushing W
    @(posedge clk);
    push_data  = W;
    push_valid = 1'b1;
    pop_ready  = 1'b1;
    @(posedge clk);
    push_valid = 1'b0;
    push_data  = '0;
    pop_ready  = 1'b0;
    @(posedge clk);

    // Now FIFO should contain: Z, W
    check(pop_data == Z, "pop_data should now be Z");
    pop_fifo();
    @(posedge clk);
    check(pop_data == W, "pop_data should now be W");
    pop_fifo();
    @(posedge clk);
    check(empty == 1'b1, "empty should be 1 after draining Z,W");

    //Test Case Summary
    $display("\n=== TESTBENCH SUMMARY ===");
    if (error_count == 0) begin
      $display("ALL TESTS PASSED");
    end else begin
      $display("%0d TESTS FAILED", error_count);
    end

    $finish;
  end
endmodule
