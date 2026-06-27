`timescale 1ns / 1ps

module tb_perf_counter;

  // -------------------------------------------------------------------------
  // VCD dump
  // -------------------------------------------------------------------------
  initial begin
    $dumpfile("waves/perf_counter.vcd");
    $dumpvars(0, tb_perf_counter);
  end

  // -------------------------------------------------------------------------
  // Watchdog
  // -------------------------------------------------------------------------
  initial begin
    #15000000ns;  // 200 seconds
    $display("WATCHDOG EXPIRED");
    $finish;
  end

  // -------------------------------------------------------------------------
  // Parameters matching DUT defaults
  // -------------------------------------------------------------------------
  localparam int NUM_REQ_PORTS = 4;
  localparam int NUM_BANKS = 4;
  localparam int ID_WIDTH = 4;
  localparam int NUM_COUNTERS  = 2*NUM_REQ_PORTS +
                                  NUM_BANKS*NUM_REQ_PORTS +
                                  NUM_REQ_PORTS + NUM_BANKS; // 32
  localparam int ADDR_WIDTH = $clog2(NUM_COUNTERS);  // 5

  localparam int OFF_REQ = 0;
  localparam int OFF_RSP = NUM_REQ_PORTS;  // 4
  localparam int OFF_CONF = 2 * NUM_REQ_PORTS;  // 8
  localparam int OFF_QF = 2 * NUM_REQ_PORTS + NUM_BANKS * NUM_REQ_PORTS;  // 24
  localparam int OFF_IDLE = 2 * NUM_REQ_PORTS + NUM_BANKS * NUM_REQ_PORTS + NUM_REQ_PORTS;  // 28

  // -------------------------------------------------------------------------
  // DUT signals
  // -------------------------------------------------------------------------
  logic                                        clk;
  logic                                        rst_n;

  logic [NUM_REQ_PORTS-1:0]                    req_accept;
  logic [NUM_REQ_PORTS-1:0]                    rsp_issue;
  logic [    NUM_BANKS-1:0][NUM_REQ_PORTS-1:0] conflict;
  logic [NUM_REQ_PORTS-1:0]                    req_queue_full;
  logic [    NUM_BANKS-1:0]                    bank_idle;

  logic                                        csr_req;
  logic [   ADDR_WIDTH-1:0]                    csr_addr;
  logic [             31:0]                    csr_rdata;
  logic                                        csr_ack;

  // -------------------------------------------------------------------------
  // DUT instantiation
  // -------------------------------------------------------------------------
  perf_counter #(
      .NUM_REQ_PORTS(NUM_REQ_PORTS),
      .NUM_BANKS    (NUM_BANKS),
      .ID_WIDTH     (ID_WIDTH)
  ) dut (
      .clk           (clk),
      .rst_n         (rst_n),
      .req_accept    (req_accept),
      .rsp_issue     (rsp_issue),
      .conflict      (conflict),
      .req_queue_full(req_queue_full),
      .bank_idle     (bank_idle),
      .csr_req       (csr_req),
      .csr_addr      (csr_addr),
      .csr_rdata     (csr_rdata),
      .csr_ack       (csr_ack)
  );

  // -------------------------------------------------------------------------
  // Clock generation (10 ns period)
  // -------------------------------------------------------------------------
  initial clk = 0;
  always #5 clk = ~clk;

  // -------------------------------------------------------------------------
  // Reset generation
  // -------------------------------------------------------------------------
  initial begin
    rst_n          = 0;
    req_accept     = 0;
    rsp_issue      = 0;
    conflict       = 0;
    req_queue_full = 0;
    bank_idle      = 0;
    csr_req        = 0;
    csr_addr       = 0;

    repeat (3) @(posedge clk);
    rst_n = 1;
  end

  // -------------------------------------------------------------------------
  // Test variables
  // -------------------------------------------------------------------------
  int          error_count = 0;
  int          test_id = 0;
  logic [31:0] rdata;

  // -------------------------------------------------------------------------
  // Helper tasks
  // -------------------------------------------------------------------------
  task automatic check(input bit cond, input string msg);
    if (!cond) begin
      $display("[ERROR] Test %0d: %s @ time %0t", test_id, msg, $time);
      error_count++;
    end else begin
      $display("[OK]    Test %0d: %s @ time %0t", test_id, msg, $time);
    end
  endtask

  task automatic do_reset();
    @(posedge clk);
    rst_n          = 0;
    req_accept     = 0;
    rsp_issue      = 0;
    conflict       = 0;
    req_queue_full = 0;
    bank_idle      = 0;
    csr_req        = 0;
    csr_addr       = 0;
    repeat (2) @(posedge clk);
    rst_n = 1;
    @(posedge clk);
  endtask

  // Single CSR read: req asserted one cycle, data captured next cycle
  task automatic read_csr(input int addr, output logic [31:0] data);
    @(posedge clk);
    csr_req  = 1;
    csr_addr = addr[ADDR_WIDTH-1:0];
    @(posedge clk);  // T+1
    data = csr_rdata;
  endtask

  // Drop CSR request
  task automatic end_csr_read();
    @(posedge clk);
    csr_req  = 0;
    csr_addr = 0;
  endtask

  // Event strobe helpers (hold high for 'cycles' consecutive cycles)
  task automatic pulse_req_accept(input int port, input int cycles);
    @(posedge clk);
    req_accept[port] = 1;
    repeat (cycles) @(posedge clk);
    req_accept[port] = 0;
  endtask

  task automatic pulse_rsp_issue(input int port, input int cycles);
    @(posedge clk);
    rsp_issue[port] = 1;
    repeat (cycles) @(posedge clk);
    rsp_issue[port] = 0;
  endtask

  task automatic pulse_conflict(input int bank, input int port, input int cycles);
    @(posedge clk);
    conflict[bank][port] = 1;
    repeat (cycles) @(posedge clk);
    conflict[bank][port] = 0;
  endtask

  task automatic pulse_queue_full(input int port, input int cycles);
    @(posedge clk);
    req_queue_full[port] = 1;
    repeat (cycles) @(posedge clk);
    req_queue_full[port] = 0;
  endtask

  task automatic pulse_idle(input int bank, input int cycles);
    @(posedge clk);
    bank_idle[bank] = 1;
    repeat (cycles) @(posedge clk);
    bank_idle[bank] = 0;
  endtask

  // -------------------------------------------------------------------------
  // Directed tests
  // -------------------------------------------------------------------------
  initial begin
    $display("TB START");

    // Wait for reset deassert
    @(posedge rst_n);
    @(posedge clk);

    //=======================================================================
    // TC_PERF_01 — Reset: All Counters Zero, CSR Outputs Clear
    //=======================================================================
    test_id = 1;
    $display("\n=== Test %0d: Reset ===", test_id);

    for (int i = 0; i < NUM_COUNTERS; i++) begin
      read_csr(i, rdata);
      check(rdata == 32'h0000_0000, $sformatf("counter[%0d] should be 0 after reset", i));
      check(csr_ack == 1'b1, $sformatf("csr_ack should be 1 for read of addr %0d", i));
      end_csr_read();
      @(posedge clk);
    end

    //=======================================================================
    // TC_PERF_02 — req_count: Correct Port Increments, Others Unchanged
    //=======================================================================
    test_id = 2;
    $display("\n=== Test %0d: req_count ===", test_id);
    do_reset();

    pulse_req_accept(2, 3);
    @(posedge clk);

    // Read addresses 0–3
    read_csr(0, rdata);
    check(rdata == 0, "counter[0] should be 0");
    end_csr_read();
    @(posedge clk);
    read_csr(1, rdata);
    check(rdata == 0, "counter[1] should be 0");
    end_csr_read();
    @(posedge clk);
    read_csr(2, rdata);
    check(rdata == 3, "counter[2] should be 3");
    end_csr_read();
    @(posedge clk);
    read_csr(3, rdata);
    check(rdata == 0, "counter[3] should be 0");
    end_csr_read();
    @(posedge clk);

    // Verify all other counters remain 0
    for (int i = 4; i < NUM_COUNTERS; i++) begin
      read_csr(i, rdata);
      check(rdata == 0, $sformatf("counter[%0d] should be 0", i));
      end_csr_read();
      @(posedge clk);
    end

    //=======================================================================
    // TC_PERF_03 — rsp_count: Correct Port, Base Offset Correct
    //=======================================================================
    test_id = 3;
    $display("\n=== Test %0d: rsp_count ===", test_id);
    do_reset();

    pulse_rsp_issue(1, 5);
    @(posedge clk);

    read_csr(4, rdata);
    check(rdata == 0, "counter[4] (OFF_RSP+0) should be 0");
    end_csr_read();
    @(posedge clk);

    read_csr(5, rdata);
    check(rdata == 5, "counter[5] (OFF_RSP+1) should be 5");
    end_csr_read();
    @(posedge clk);

    read_csr(1, rdata);
    check(rdata == 0, "counter[1] (req_count[1]) should be untouched");
    end_csr_read();
    @(posedge clk);

    //=======================================================================
    // TC_PERF_04 — conflict_count: Correct [bank][port] Flattening
    //=======================================================================
    test_id = 4;
    $display("\n=== Test %0d: conflict_count ===", test_id);
    do_reset();

    // --- Stimulus A ---
    pulse_conflict(2, 3, 4);
    @(posedge clk);

    read_csr(19, rdata);
    check(rdata == 4, "counter[19] (conflict[2][3]) should be 4");
    end_csr_read();
    @(posedge clk);

    for (int i = 0; i < NUM_COUNTERS; i++) begin
      if (i != 19) begin
        read_csr(i, rdata);
        check(rdata == 0, $sformatf("counter[%0d] should be 0 after stimulus A", i));
        end_csr_read();
        @(posedge clk);
      end
    end

    // --- Stimulus B ---
    pulse_conflict(0, 0, 2);
    @(posedge clk);

    read_csr(8, rdata);
    check(rdata == 2, "counter[8] (conflict[0][0]) should be 2");
    end_csr_read();
    @(posedge clk);

    read_csr(19, rdata);
    check(rdata == 4, "counter[19] should still be 4");
    end_csr_read();
    @(posedge clk);

    for (int i = 0; i < NUM_COUNTERS; i++) begin
      if (i != 8 && i != 19) begin
        read_csr(i, rdata);
        check(rdata == 0, $sformatf("counter[%0d] should be 0 after stimulus B", i));
        end_csr_read();
        @(posedge clk);
      end
    end

    //=======================================================================
    // TC_PERF_05 — queue_full_count: Correct Port and Offset
    //=======================================================================
    test_id = 5;
    $display("\n=== Test %0d: queue_full_count ===", test_id);
    do_reset();

    pulse_queue_full(0, 7);
    @(posedge clk);

    read_csr(24, rdata);
    check(rdata == 7, "counter[24] (OFF_QF+0) should be 7");
    end_csr_read();
    @(posedge clk);

    read_csr(0, rdata);
    check(rdata == 0, "counter[0] (req_count[0]) should be 0");
    end_csr_read();
    @(posedge clk);

    //=======================================================================
    // TC_PERF_06 — idle_count: Correct Bank and Offset
    //=======================================================================
    test_id = 6;
    $display("\n=== Test %0d: idle_count ===", test_id);
    do_reset();

    pulse_idle(3, 6);
    @(posedge clk);

    read_csr(31, rdata);
    check(rdata == 6, "counter[31] (OFF_IDLE+3) should be 6");
    end_csr_read();
    @(posedge clk);

    for (int i = 28; i < 31; i++) begin
      read_csr(i, rdata);
      check(rdata == 0, $sformatf("counter[%0d] should be 0", i));
      end_csr_read();
      @(posedge clk);
    end

    //=======================================================================
    // TC_PERF_07 — CSR Read: 1-Cycle Latency, csr_ack Timing
    //=======================================================================
    test_id = 7;
    $display("\n=== Test %0d: CSR Read Timing ===", test_id);
    do_reset();

    // Backdoor preload counter[5] via hierarchical reference
    $display("[INFO] Backdoor preloading counter[5] with 0xCAFE_BABE...");
    @(negedge clk);
    dut.counter[5] = 32'hCAFE_BABE;
    @(posedge clk);
    $display("[INFO] Preload complete.");

    // Verify timing: T, T+1, T+2
    @(posedge clk);  // T
    csr_req  = 1;
    csr_addr = 5;
    check(csr_ack == 1'b0, "csr_ack should be 0 on cycle T");

    @(posedge clk);  // T+1
    check(csr_ack == 1'b1, "csr_ack should be 1 on cycle T+1");
    check(csr_rdata == 32'hCAFE_BABE, "csr_rdata should be 0xCAFE_BABE on cycle T+1");

    // Drop csr_req BEFORE T+2 so DUT sees it low on the next edge
    csr_req  = 0;
    csr_addr = 0;

    @(posedge clk);  // T+2
    check(csr_ack == 1'b0, "csr_ack should be 0 on cycle T+2 after req dropped");

    //=======================================================================
    // TC_PERF_08 — CSR Address Boundary: First and Last Valid Addresses
    //=======================================================================
    test_id = 8;
    $display("\n=== Test %0d: CSR Boundary ===", test_id);
    do_reset();

    pulse_req_accept(0, 1);
    pulse_idle(3, 1);
    @(posedge clk);

    read_csr(0, rdata);
    check(rdata == 1, "counter[0] (first addr) should be 1");
    end_csr_read();
    @(posedge clk);

    read_csr(31, rdata);
    check(rdata == 1, "counter[31] (last addr) should be 1");
    end_csr_read();
    @(posedge clk);

    //=======================================================================
    // TC_PERF_09 — Saturation: Counter Clamps at 0xFFFF_FFFF
    //=======================================================================
    test_id = 9;
    $display("\n=== Test %0d: Saturation ===", test_id);
    do_reset();

    // Backdoor preload counter[0] to 0xFFFF_FFFE
    $display("[INFO] Backdoor preloading counter[0] to 0xFFFF_FFFE...");
    @(negedge clk);
    dut.counter[0] = 32'hFFFF_FFFE;
    @(posedge clk);
    $display("[INFO] Preload complete.");

    read_csr(0, rdata);
    check(rdata == 32'hFFFF_FFFE, "counter[0] should be 0xFFFF_FFFE");
    end_csr_read();
    @(posedge clk);

    // First extra pulse
    pulse_req_accept(0, 1);
    @(posedge clk);
    read_csr(0, rdata);
    check(rdata == 32'hFFFF_FFFF, "counter[0] should be 0xFFFF_FFFF after first extra pulse");
    end_csr_read();
    @(posedge clk);

    // Second extra pulse — must not wrap
    pulse_req_accept(0, 1);
    @(posedge clk);
    read_csr(0, rdata);
    check(rdata == 32'hFFFF_FFFF, "counter[0] should stay 0xFFFF_FFFF (no wrap)");
    end_csr_read();
    @(posedge clk);

    //=======================================================================
    // TC_PERF_10 — All Event Strobes Simultaneously: No Counter Interference
    //=======================================================================
    test_id = 10;
    $display("\n=== Test %0d: All Events Simultaneous ===", test_id);
    do_reset();

    @(posedge clk);
    req_accept     = 4'hF;
    rsp_issue      = 4'hF;
    conflict       = {NUM_BANKS{4'hF}};
    req_queue_full = 4'hF;
    bank_idle      = 4'hF;
    @(posedge clk);
    req_accept     = 0;
    rsp_issue      = 0;
    conflict       = 0;
    req_queue_full = 0;
    bank_idle      = 0;
    @(posedge clk);

    for (int i = 0; i < NUM_COUNTERS; i++) begin
      read_csr(i, rdata);
      check(rdata == 1, $sformatf("counter[%0d] should be 1", i));
      end_csr_read();
      @(posedge clk);
    end

    //=======================================================================
    // TC_PERF_11 — No Events: Counters Unchanged for N Cycles
    //=======================================================================
    test_id = 11;
    $display("\n=== Test %0d: No Events ===", test_id);
    do_reset();

    // Load all counters to 1 (same as TC_PERF_10)
    @(posedge clk);
    req_accept     = 4'hF;
    rsp_issue      = 4'hF;
    conflict       = {NUM_BANKS{4'hF}};
    req_queue_full = 4'hF;
    bank_idle      = 4'hF;
    @(posedge clk);
    req_accept     = 0;
    rsp_issue      = 0;
    conflict       = 0;
    req_queue_full = 0;
    bank_idle      = 0;

    // Hold all strobes at 0 for 10 cycles
    repeat (10) @(posedge clk);

    for (int i = 0; i < NUM_COUNTERS; i++) begin
      read_csr(i, rdata);
      check(rdata == 1, $sformatf("counter[%0d] should still be 1 after 10 idle cycles", i));
      end_csr_read();
      @(posedge clk);
    end

    //=======================================================================
    // TC_PERF_12 — CSR Read Is Non-Intrusive: Read Does Not Reset or Modify Counters
    //=======================================================================
    test_id = 12;
    $display("\n=== Test %0d: CSR Non-Intrusive ===", test_id);
    do_reset();

    // Load counter[8] = 100
    pulse_conflict(0, 0, 100);
    @(posedge clk);

    // 5 consecutive CSR reads
    @(posedge clk);
    csr_req  = 1;
    csr_addr = 8;

    repeat (5) begin
      @(posedge clk);
      check(csr_rdata == 100, "csr_rdata should be 100 during consecutive reads");
      check(csr_ack == 1, "csr_ack should be 1 during consecutive reads");
    end

    csr_req  = 0;
    csr_addr = 0;
    @(posedge clk);

    // Pulse one more conflict event
    pulse_conflict(0, 0, 1);
    @(posedge clk);

    // Final read
    read_csr(8, rdata);
    check(rdata == 101, "counter[8] should be 101 after one more event (reads did not clear)");
    end_csr_read();
    @(posedge clk);

    // Read once more to confirm persistence
    read_csr(8, rdata);
    check(rdata == 101, "counter[8] should still be 101 on follow-up read");
    end_csr_read();
    @(posedge clk);

    //=======================================================================
    // Test Summary
    //=======================================================================
    $display("\n=== TESTBENCH SUMMARY ===");
    if (error_count == 0) begin
      $display("ALL TESTS PASSED");
    end else begin
      $display("%0d TEST(S) FAILED", error_count);
    end
    $finish;
  end

endmodule
