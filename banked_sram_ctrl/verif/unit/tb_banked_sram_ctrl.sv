`timescale 1ns / 1ps
module tb_banked_sram_ctrl;

  // ==========================================================================
  // Parameters — must match DUT exactly
  // ==========================================================================
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
  localparam int CSR_ADDR_WIDTH = $clog2(
      2 * NUM_REQ_PORTS + NUM_BANKS * NUM_REQ_PORTS + NUM_REQ_PORTS + NUM_BANKS
  );

  // ==========================================================================
  // DUT Signals
  // ==========================================================================
  logic                                        clk;
  logic                                        rst_n;

  logic [ NUM_REQ_PORTS-1:0]                   req_valid;
  logic [ NUM_REQ_PORTS-1:0]                   req_ready;
  logic [ NUM_REQ_PORTS-1:0][  ADDR_WIDTH-1:0] req_addr;
  logic [ NUM_REQ_PORTS-1:0][  DATA_WIDTH-1:0] req_data;
  logic [ NUM_REQ_PORTS-1:0][STROBE_WIDTH-1:0] req_strobe;
  logic [ NUM_REQ_PORTS-1:0][    ID_WIDTH-1:0] req_id;
  logic [ NUM_REQ_PORTS-1:0]                   req_we;

  logic [ NUM_REQ_PORTS-1:0]                   rsp_valid;
  logic [ NUM_REQ_PORTS-1:0]                   rsp_ready;
  logic [ NUM_REQ_PORTS-1:0][  DATA_WIDTH-1:0] rsp_data;
  logic [ NUM_REQ_PORTS-1:0][    ID_WIDTH-1:0] rsp_id;
  logic [ NUM_REQ_PORTS-1:0]                   rsp_err;

  logic                                        csr_req;
  logic [CSR_ADDR_WIDTH-1:0]                   csr_addr;
  logic [              31:0]                   csr_rdata;
  logic                                        csr_ack;

  // ==========================================================================
  // DUT Instantiation
  // ==========================================================================
  banked_sram_ctrl #(
      .NUM_BANKS    (NUM_BANKS),
      .BANK_DEPTH   (BANK_DEPTH),
      .DATA_WIDTH   (DATA_WIDTH),
      .ADDR_WIDTH   (ADDR_WIDTH),
      .NUM_REQ_PORTS(NUM_REQ_PORTS),
      .QUEUE_DEPTH  (QUEUE_DEPTH),
      .ID_WIDTH     (ID_WIDTH)
  ) dut (
      .clk       (clk),
      .rst_n     (rst_n),
      .req_valid (req_valid),
      .req_ready (req_ready),
      .req_addr  (req_addr),
      .req_data  (req_data),
      .req_strobe(req_strobe),
      .req_id    (req_id),
      .req_we    (req_we),
      .rsp_valid (rsp_valid),
      .rsp_ready (rsp_ready),
      .rsp_data  (rsp_data),
      .rsp_id    (rsp_id),
      .rsp_err   (rsp_err),
      .csr_req   (csr_req),
      .csr_addr  (csr_addr),
      .csr_rdata (csr_rdata),
      .csr_ack   (csr_ack)
  );

  // ==========================================================================
  // Clock & Watchdog
  // ==========================================================================
  initial clk = 0;
  always #5 clk = ~clk;

  initial begin
    #50000ns;
    $display("WATCHDOG EXPIRED @ %0t", $time);
    $finish;
  end

  // ==========================================================================
  // VCD Dump
  // ==========================================================================
  initial begin
    $dumpfile("waves/banked_sram_ctrl.vcd");
    $dumpvars(0, tb_banked_sram_ctrl);
  end

  // ==========================================================================
  // Reset & Initialization
  // ==========================================================================
  initial begin
    rst_n      = 0;
    req_valid  = {NUM_REQ_PORTS{1'b0}};
    req_addr   = {NUM_REQ_PORTS{{ADDR_WIDTH{1'b0}}}};
    req_data   = {NUM_REQ_PORTS{{DATA_WIDTH{1'b0}}}};
    req_strobe = {NUM_REQ_PORTS{{STROBE_WIDTH{1'b0}}}};
    req_id     = {NUM_REQ_PORTS{{ID_WIDTH{1'b0}}}};
    req_we     = {NUM_REQ_PORTS{1'b0}};
    rsp_ready  = {NUM_REQ_PORTS{1'b1}};
    csr_req    = 1'b0;
    csr_addr   = {CSR_ADDR_WIDTH{1'b0}};

    repeat (5) @(posedge clk);
    rst_n = 1;
  end

  // ==========================================================================
  // Golden Memory Model
  // ==========================================================================
  logic [DATA_WIDTH-1:0] golden_mem[0:NUM_BANKS-1][0:BANK_DEPTH-1];

  initial begin
    for (int b = 0; b < NUM_BANKS; b++) begin
      for (int r = 0; r < BANK_DEPTH; r++) begin
        golden_mem[b][r] = {DATA_WIDTH{1'b0}};
      end
    end
  end

  // ==========================================================================
  // Test Tracking
  // ==========================================================================
  int error_count = 0;
  int test_id = 0;

  task automatic check(input bit cond, input string msg);
    if (!cond) begin
      $display("[ERROR] Test %0d: %s @ time %0t", test_id, msg, $time);
      error_count++;
    end else begin
      $display("[OK]    Test %0d: %s @ time %0t", test_id, msg, $time);
    end
  endtask

  // ==========================================================================
  // Helper Functions
  // ==========================================================================
  function automatic int get_bank(input [ADDR_WIDTH-1:0] addr);
    return addr[ADDR_WIDTH-1 : ADDR_WIDTH-BANK_SEL_BITS];
  endfunction

  function automatic int get_row(input [ADDR_WIDTH-1:0] addr);
    return addr[BANK_ADDR_BITS-1:0];
  endfunction

  task automatic golden_write(input [ADDR_WIDTH-1:0] addr, input [DATA_WIDTH-1:0] data,
                              input [STROBE_WIDTH-1:0] strobe);
    int bank = get_bank(addr);
    int row = get_row(addr);
    for (int i = 0; i < STROBE_WIDTH; i++) begin
      if (strobe[i]) begin
        golden_mem[bank][row][i*8+:8] = data[i*8+:8];
      end
    end
  endtask

  function automatic [DATA_WIDTH-1:0] golden_read(input [ADDR_WIDTH-1:0] addr);
    int bank = get_bank(addr);
    int row = get_row(addr);
    return golden_mem[bank][row];
  endfunction

  // ==========================================================================
  // Request / Response Tasks
  // ==========================================================================
  task automatic send_req(input int port, input [ADDR_WIDTH-1:0] addr, input [DATA_WIDTH-1:0] data,
                          input [STROBE_WIDTH-1:0] strobe, input [ID_WIDTH-1:0] id, input logic we);
    begin
      @(posedge clk);
      req_valid[port]  = 1'b1;
      req_addr[port]   = addr;
      req_data[port]   = data;
      req_strobe[port] = strobe;
      req_id[port]     = id;
      req_we[port]     = we;

      @(posedge clk);
      while (!req_ready[port]) @(posedge clk);

      req_valid[port]  = 1'b0;
      req_addr[port]   = {ADDR_WIDTH{1'b0}};
      req_data[port]   = {DATA_WIDTH{1'b0}};
      req_strobe[port] = {STROBE_WIDTH{1'b0}};
      req_id[port]     = {ID_WIDTH{1'b0}};
      req_we[port]     = 1'b0;
    end
  endtask

  task automatic check_rsp(input int port, input [DATA_WIDTH-1:0] exp_data,
                           input [ID_WIDTH-1:0] exp_id, input logic exp_err,
                           input int timeout = 20);
    int cycles = 0;
    begin
      @(posedge clk);
      while (!rsp_valid[port] && cycles < timeout) begin
        @(posedge clk);
        cycles++;
      end

      check(rsp_valid[port], $sformatf("Port %0d rsp_valid", port));
      if (rsp_valid[port]) begin
        check(rsp_data[port] == exp_data, $sformatf(
              "Port %0d data exp=%h got=%h", port, exp_data, rsp_data[port]));
        check(rsp_id[port] == exp_id, $sformatf(
              "Port %0d id exp=%h got=%h", port, exp_id, rsp_id[port]));
        check(rsp_err[port] == exp_err, $sformatf(
              "Port %0d err exp=%b got=%b", port, exp_err, rsp_err[port]));
      end

      rsp_ready[port] = 1'b1;
      @(posedge clk);
      rsp_ready[port] = 1'b0;
    end
  endtask

  task automatic read_csr(input [CSR_ADDR_WIDTH-1:0] addr, output [31:0] rdata);
    begin
      @(posedge clk);
      csr_req  = 1'b1;
      csr_addr = addr;
      @(posedge clk);
      while (!csr_ack) @(posedge clk);
      rdata = csr_rdata;
      csr_req = 1'b0;
      csr_addr = {CSR_ADDR_WIDTH{1'b0}};
    end
  endtask

  // ==========================================================================
  // Test Tasks
  // ==========================================================================

  // TC_INT_00 — Reset Sanity
  task automatic test_reset();
    begin
      test_id = 0;
      $display("\n=== Test %0d: Reset Sanity ===", test_id);
      @(posedge rst_n);
      repeat (2) @(posedge clk);
      check(req_ready == {NUM_REQ_PORTS{1'b1}}, "All req_ready high after reset");
      check(rsp_valid == {NUM_REQ_PORTS{1'b0}}, "All rsp_valid low after reset");
      check(csr_ack == 1'b0, "csr_ack low after reset");
    end
  endtask

  // TC_INT_01 — Single Port, Single Bank: Read Round-Trip
  task automatic test_single_read_roundtrip();
    logic [ADDR_WIDTH-1:0] addr;
    logic [DATA_WIDTH-1:0] data;
    logic [  ID_WIDTH-1:0] tid;
    begin
      test_id = 1;
      $display("\n=== Test %0d: Single Port Read Round-Trip ===", test_id);

      addr = 10'h005;
      data = 32'hDEAD_BEEF;
      tid  = 4'hA;

      golden_write(addr, data, 4'hF);
      send_req(0, addr, data, 4'hF, tid, 1'b1);
      check_rsp(0, 32'h0, tid, 1'b0);

      send_req(0, addr, 32'h0, 4'hF, tid, 1'b0);
      check_rsp(0, data, tid, 1'b0);
    end
  endtask

  // TC_INT_02 — Basic Write: ACK Response Generated
  task automatic test_write_ack();
    logic [ADDR_WIDTH-1:0] addr;
    logic [DATA_WIDTH-1:0] data;
    logic [ID_WIDTH-1:0] tid;
    int cycles;
    begin
      test_id = 2;
      $display("\n=== Test %0d: Write ACK Response ===", test_id);

      addr = 10'h008;
      data = 32'hCAFE_BABE;
      tid  = 4'hB;

      golden_write(addr, data, 4'hF);
      send_req(0, addr, data, 4'hF, tid, 1'b1);
      check_rsp(0, 32'h0, tid, 1'b0);

      cycles = 0;
      @(posedge clk);
      while (cycles < 5) begin
        check(rsp_valid[0] == 1'b0, "No extra write response");
        cycles++;
        @(posedge clk);
      end
    end
  endtask

  // TC_INT_03 — Multi-Port, Different Banks: Peak Throughput
  task automatic test_multiport_peak();
    logic [ADDR_WIDTH-1:0] addr[0:3];
    logic [DATA_WIDTH-1:0] data[0:3];
    logic [ID_WIDTH-1:0] tid[0:3];
    int i;
    begin
      test_id = 3;
      $display("\n=== Test %0d: Multi-Port Peak Throughput ===", test_id);

      addr[0] = 10'h000;
      data[0] = 32'h1111_1111;
      tid[0]  = 4'h0;
      addr[1] = 10'h100;
      data[1] = 32'h2222_2222;
      tid[1]  = 4'h1;
      addr[2] = 10'h200;
      data[2] = 32'h3333_3333;
      tid[2]  = 4'h2;
      addr[3] = 10'h300;
      data[3] = 32'h4444_4444;
      tid[3]  = 4'h3;

      // Simultaneous writes
      @(posedge clk);
      for (i = 0; i < 4; i++) begin
        req_valid[i]  = 1'b1;
        req_addr[i]   = addr[i];
        req_data[i]   = data[i];
        req_strobe[i] = 4'hF;
        req_id[i]     = tid[i];
        req_we[i]     = 1'b1;
        golden_write(addr[i], data[i], 4'hF);
      end

      begin
        bit all_ready;
        do begin
          @(posedge clk);
          all_ready = 1'b1;
          for (i = 0; i < 4; i++) begin
            if (!req_ready[i]) all_ready = 1'b0;
          end
        end while (!all_ready);
      end

      for (i = 0; i < 4; i++) begin
        req_valid[i] = 1'b0;
        req_we[i]    = 1'b0;
      end

      for (i = 0; i < 4; i++) begin
        check_rsp(i, 32'h0, tid[i], 1'b0);
      end

      // Simultaneous reads
      @(posedge clk);
      for (i = 0; i < 4; i++) begin
        req_valid[i]  = 1'b1;
        req_addr[i]   = addr[i];
        req_data[i]   = 32'h0;
        req_strobe[i] = 4'hF;
        req_id[i]     = tid[i];
        req_we[i]     = 1'b0;
      end

      begin
        bit all_ready;
        do begin
          @(posedge clk);
          all_ready = 1'b1;
          for (i = 0; i < 4; i++) begin
            if (!req_ready[i]) all_ready = 1'b0;
          end
        end while (!all_ready);
      end

      for (i = 0; i < 4; i++) begin
        req_valid[i] = 1'b0;
      end

      for (i = 0; i < 4; i++) begin
        check_rsp(i, data[i], tid[i], 1'b0);
      end
    end
  endtask

  // TC_INT_04 — Bank Conflict: Round-Robin Arbitration
  task automatic test_bank_conflict();
    logic [ADDR_WIDTH-1:0] addr_base_p0;
    logic [ADDR_WIDTH-1:0] addr_base_p1;
    logic [DATA_WIDTH-1:0] data;
    logic [ID_WIDTH-1:0] tid_p0[0:3];
    logic [ID_WIDTH-1:0] tid_p1[0:3];
    int last_port;
    int rsp_cnt_p0, rsp_cnt_p1;
    int i;
    begin
      test_id = 4;
      $display("\n=== Test %0d: Bank Conflict Round-Robin ===", test_id);

      addr_base_p0 = 10'h010;
      addr_base_p1 = 10'h020;

      for (i = 0; i < 4; i++) begin
        tid_p0[i] = 4'h0 + i;
        tid_p1[i] = 4'h4 + i;
        data = 32'hA000_0000 + i;
        golden_write(addr_base_p0 + i, data, 4'hF);
        data = 32'hB000_0000 + i;
        golden_write(addr_base_p1 + i, data, 4'hF);
      end

      for (i = 0; i < 4; i++) begin
        send_req(0, addr_base_p0 + i, 32'hA000_0000 + i, 4'hF, tid_p0[i], 1'b1);
        send_req(1, addr_base_p1 + i, 32'hB000_0000 + i, 4'hF, tid_p1[i], 1'b1);
      end

      rsp_cnt_p0 = 0;
      rsp_cnt_p1 = 0;
      last_port  = -1;

      for (i = 0; i < 8; i++) begin
        @(posedge clk);
        while (!rsp_valid[0] && !rsp_valid[1]) @(posedge clk);

        if (rsp_valid[0] && rsp_valid[1]) begin
          check(1'b0, "Both ports responded simultaneously");
          rsp_ready[0] = 1'b1;
          rsp_ready[1] = 1'b1;
          @(posedge clk);
          rsp_ready[0] = 1'b0;
          rsp_ready[1] = 1'b0;
          rsp_cnt_p0++;
          rsp_cnt_p1++;
          i++;
        end else if (rsp_valid[0]) begin
          check(rsp_id[0] == tid_p0[rsp_cnt_p0], "Port 0 ID match");
          rsp_ready[0] = 1'b1;
          rsp_ready[1] = 1'b0;
          @(posedge clk);
          rsp_ready[0] = 1'b0;
          rsp_cnt_p0++;
          if (last_port == 0) check(1'b0, "Round-robin violated: Port 0 twice");
          last_port = 0;
        end else begin
          check(rsp_id[1] == tid_p1[rsp_cnt_p1], "Port 1 ID match");
          rsp_ready[0] = 1'b0;
          rsp_ready[1] = 1'b1;
          @(posedge clk);
          rsp_ready[1] = 1'b0;
          rsp_cnt_p1++;
          if (last_port == 1) check(1'b0, "Round-robin violated: Port 1 twice");
          last_port = 1;
        end
      end

      check(rsp_cnt_p0 == 4, "Port 0 received 4 responses");
      check(rsp_cnt_p1 == 4, "Port 1 received 4 responses");
    end
  endtask

  // TC_INT_05 — Response Backpressure: Slow Consumer
  task automatic test_backpressure();
    logic [ADDR_WIDTH-1:0] addr;
    logic [DATA_WIDTH-1:0] data;
    int accepted;
    bit saw_not_ready;
    int i;
    begin
      test_id = 5;
      $display("\n=== Test %0d: Backpressure Isolation ===", test_id);

      rsp_ready[0] = 1'b0;  // Hold Port 0
      rsp_ready[1] = 1'b1;  // Port 1 free

      accepted = 0;
      saw_not_ready = 1'b0;

      for (i = 0; i < QUEUE_DEPTH + 2; i++) begin
        addr = 10'h030 + i;
        data = 32'hC000_0000 + i;
        golden_write(addr, data, 4'hF);

        @(posedge clk);
        req_valid[0]  = 1'b1;
        req_addr[0]   = addr;
        req_data[0]   = data;
        req_strobe[0] = 4'hF;
        req_id[0]     = 4'h0;
        req_we[0]     = 1'b1;

        @(posedge clk);
        if (!req_ready[0]) saw_not_ready = 1'b1;
        if (req_ready[0]) begin
          accepted++;
          req_valid[0] = 1'b0;
        end else begin
          req_valid[0] = 1'b0;
        end
      end

      check(saw_not_ready, "Port 0 req_ready deasserted under backpressure");
      check(accepted <= QUEUE_DEPTH, $sformatf(
            "Port 0 accepted %0d <= QUEUE_DEPTH %0d", accepted, QUEUE_DEPTH));

      // Verify Port 1 still works
      addr = 10'h200;
      data = 32'hF000_0000;
      send_req(1, addr, data, 4'hF, 4'h1, 1'b1);
      check_rsp(1, 32'h0, 4'h1, 1'b0);

      // Release and drain Port 0
      rsp_ready[0] = 1'b1;
      for (i = 0; i < accepted; i++) begin
        check_rsp(0, 32'h0, 4'h0, 1'b0);
      end
    end
  endtask

  // TC_INT_06 — OOB Address (Adapted for fixed parameters)
  task automatic test_oob_error();
    logic [ADDR_WIDTH-1:0] addr;
    begin
      test_id = 6;
      $display("\n=== Test %0d: OOB Address (Adapted) ===", test_id);
      $display("[INFO] ADDR_WIDTH=10 exactly matches 4x256 address space; testing boundaries");

      addr = 10'h3FF;
      golden_write(addr, 32'hDEAD_BEEF, 4'hF);
      send_req(0, addr, 32'hDEAD_BEEF, 4'hF, 4'h0, 1'b1);
      check_rsp(0, 32'h0, 4'h0, 1'b0);

      send_req(0, addr, 32'h0, 4'hF, 4'h1, 1'b0);
      check_rsp(0, 32'hDEAD_BEEF, 4'h1, 1'b0);

      golden_write(10'h0FF, 32'hAAAA_1111, 4'hF);
      golden_write(10'h100, 32'hBBBB_2222, 4'hF);

      send_req(0, 10'h0FF, 32'hAAAA_1111, 4'hF, 4'h2, 1'b1);
      check_rsp(0, 32'h0, 4'h2, 1'b0);
      send_req(0, 10'h100, 32'hBBBB_2222, 4'hF, 4'h3, 1'b1);
      check_rsp(0, 32'h0, 4'h3, 1'b0);

      send_req(0, 10'h0FF, 32'h0, 4'hF, 4'h4, 1'b0);
      check_rsp(0, 32'hAAAA_1111, 4'h4, 1'b0);
      send_req(0, 10'h100, 32'h0, 4'hF, 4'h5, 1'b0);
      check_rsp(0, 32'hBBBB_2222, 4'h5, 1'b0);
    end
  endtask

  // TC_INT_07 — Partial Write: Byte Enable Verification
  task automatic test_partial_write();
    logic [ADDR_WIDTH-1:0] addr;
    begin
      test_id = 7;
      $display("\n=== Test %0d: Partial Write Byte Enable ===", test_id);

      addr = 10'h060;

      golden_write(addr, 32'hAABBCCDD, 4'hF);
      send_req(0, addr, 32'hAABBCCDD, 4'hF, 4'h0, 1'b1);
      check_rsp(0, 32'h0, 4'h0, 1'b0);

      golden_write(addr, 32'h12345678, 4'b0110);
      send_req(0, addr, 32'h12345678, 4'b0110, 4'h1, 1'b1);
      check_rsp(0, 32'h0, 4'h1, 1'b0);

      send_req(0, addr, 32'h0, 4'hF, 4'h2, 1'b0);
      check_rsp(0, 32'hAA34_56DD, 4'h2, 1'b0);
    end
  endtask

  // TC_INT_08 — In-Order Responses Within a Port
  task automatic test_inorder_response();
    logic [ADDR_WIDTH-1:0] addr[0:3];
    logic [DATA_WIDTH-1:0] data[0:3];
    logic [ID_WIDTH-1:0] tid[0:3];
    int i;
    begin
      test_id = 8;
      $display("\n=== Test %0d: In-Order Responses ===", test_id);

      addr[0] = 10'h000;
      data[0] = 32'h1111_1111;
      tid[0]  = 4'h0;
      addr[1] = 10'h100;
      data[1] = 32'h2222_2222;
      tid[1]  = 4'h1;
      addr[2] = 10'h200;
      data[2] = 32'h3333_3333;
      tid[2]  = 4'h2;
      addr[3] = 10'h300;
      data[3] = 32'h4444_4444;
      tid[3]  = 4'h3;

      for (i = 0; i < 4; i++) begin
        golden_write(addr[i], data[i], 4'hF);
        send_req(0, addr[i], data[i], 4'hF, tid[i], 1'b1);
      end
      for (i = 0; i < 4; i++) begin
        check_rsp(0, 32'h0, tid[i], 1'b0);
      end

      for (i = 0; i < 4; i++) begin
        send_req(0, addr[i], 32'h0, 4'hF, tid[i], 1'b0);
      end

      for (i = 0; i < 4; i++) begin
        check_rsp(0, data[i], tid[i], 1'b0);
      end
    end
  endtask

  // TC_INT_09 — req_fifo Full: req_ready Deasserts After QUEUE_DEPTH
  task automatic test_req_fifo_full();
    logic [ADDR_WIDTH-1:0] addr;
    int accepted;
    bit saw_not_ready;
    int i;
    begin
      test_id = 9;
      $display("\n=== Test %0d: req_fifo Full Backpressure ===", test_id);

      rsp_ready[0] = 1'b0;

      accepted = 0;
      saw_not_ready = 1'b0;

      for (i = 0; i < QUEUE_DEPTH + 2; i++) begin
        addr = 10'h050 + i;

        @(posedge clk);
        req_valid[0]  = 1'b1;
        req_addr[0]   = addr;
        req_data[0]   = 32'h0;
        req_strobe[0] = 4'hF;
        req_id[0]     = 4'h0 + i;
        req_we[0]     = 1'b0;

        @(posedge clk);
        if (!req_ready[0]) saw_not_ready = 1'b1;
        if (req_ready[0]) begin
          accepted++;
          req_valid[0] = 1'b0;
        end else begin
          req_valid[0] = 1'b0;
        end
      end

      check(saw_not_ready, "req_ready deasserted when fifo full");
      check(accepted == QUEUE_DEPTH, $sformatf(
            "Accepted exactly QUEUE_DEPTH=%0d, got %0d", QUEUE_DEPTH, accepted));

      rsp_ready[0] = 1'b1;
      for (i = 0; i < accepted; i++) begin
        @(posedge clk);
        while (!rsp_valid[0]) @(posedge clk);
        rsp_ready[0] = 1'b1;
        @(posedge clk);
        rsp_ready[0] = 1'b0;
      end
    end
  endtask

  // TC_INT_10 — All-Port, All-Bank Random Traffic: Scoreboard Check
  task automatic test_random_traffic();
    logic [ADDR_WIDTH-1:0] addr;
    logic [DATA_WIDTH-1:0] data;
    logic [ID_WIDTH-1:0] tid;
    logic we;
    int port;
    int i;
    begin
      test_id = 10;
      $display("\n=== Test %0d: Random Traffic Scoreboard ===", test_id);

      for (i = 0; i < 50; i++) begin
        port = $urandom_range(0, NUM_REQ_PORTS - 1);
        addr = $urandom_range(0, (1 << ADDR_WIDTH) - 1);
        data = $urandom;
        tid  = $urandom_range(0, (1 << ID_WIDTH) - 1);
        we   = $urandom_range(0, 1);

        if (we) begin
          golden_write(addr, data, 4'hF);
          send_req(port, addr, data, 4'hF, tid, 1'b1);
          check_rsp(port, 32'h0, tid, 1'b0);
        end else begin
          send_req(port, addr, 32'h0, 4'hF, tid, 1'b0);
          check_rsp(port, golden_read(addr), tid, 1'b0);
        end
      end
    end
  endtask

  // TC_INT_11 — CSR Perf Counter Reads
  task automatic test_csr_perf();
    logic [31:0] csr_val;
    logic [ADDR_WIDTH-1:0] addr;
    int i;
    begin
      test_id = 11;
      $display("\n=== Test %0d: CSR Perf Counters ===", test_id);

      for (i = 0; i < 5; i++) begin
        addr = 10'h070 + i;
        golden_write(addr, 32'h1000_0000 + i, 4'hF);
        send_req(0, addr, 32'h1000_0000 + i, 4'hF, 4'h0, 1'b1);
      end
      for (i = 0; i < 5; i++) begin
        check_rsp(0, 32'h0, 4'h0, 1'b0);
      end

      for (i = 0; i < 3; i++) begin
        @(posedge clk);
        req_valid[0] = 1'b1;
        req_addr[0]  = 10'h080;
        req_data[0]  = 32'h2000_0000 + i;
        req_strobe[0]= 4'hF;
        req_id[0]    = 4'h1;
        req_we[0]    = 1'b1;

        req_valid[1] = 1'b1;
        req_addr[1]  = 10'h081;
        req_data[1]  = 32'h3000_0000 + i;
        req_strobe[1]= 4'hF;
        req_id[1]    = 4'h2;
        req_we[1]    = 1'b1;

        @(posedge clk);
        while (!req_ready[0] || !req_ready[1]) @(posedge clk);
        req_valid[0] = 1'b0;
        req_valid[1] = 1'b0;
      end

      for (i = 0; i < 6; i++) begin
        @(posedge clk);
        while (!rsp_valid[0] && !rsp_valid[1]) @(posedge clk);
        if (rsp_valid[0]) begin
          rsp_ready[0] = 1'b1;
          rsp_ready[1] = 1'b0;
        end else begin
          rsp_ready[0] = 1'b0;
          rsp_ready[1] = 1'b1;
        end
        @(posedge clk);
        rsp_ready[0] = 1'b0;
        rsp_ready[1] = 1'b0;
      end

      read_csr(5'd0, csr_val);
      $display("[INFO] CSR req_count[0] = %0d", csr_val);
      check(csr_val >= 8, $sformatf("req_count[0] >= 8, got %0d", csr_val));

      read_csr(5'd8, csr_val);
      $display("[INFO] CSR conflict_count[0][0] = %0d", csr_val);
      check(csr_val > 0, $sformatf("conflict_count[0][0] > 0, got %0d", csr_val));
    end
  endtask

  // TC_INT_12 — Simultaneous Write and Read Same Address
  task automatic test_simultaneous_rw();
    logic [ADDR_WIDTH-1:0] addr;
    logic [DATA_WIDTH-1:0] old_data, new_data;
    begin
      test_id = 12;
      $display("\n=== Test %0d: Simultaneous R/W Same Address ===", test_id);

      addr = 10'h101;
      old_data = 32'h1111_1111;
      new_data = 32'h2222_2222;

      golden_write(addr, old_data, 4'hF);
      send_req(0, addr, old_data, 4'hF, 4'h0, 1'b1);
      check_rsp(0, 32'h0, 4'h0, 1'b0);

      @(posedge clk);
      req_valid[0] = 1'b1;
      req_addr[0]  = addr;
      req_data[0]  = new_data;
      req_strobe[0]= 4'hF;
      req_id[0]    = 4'h1;
      req_we[0]    = 1'b1;

      req_valid[1] = 1'b1;
      req_addr[1]  = addr;
      req_data[1]  = 32'h0;
      req_strobe[1]= 4'hF;
      req_id[1]    = 4'h2;
      req_we[1]    = 1'b0;

      @(posedge clk);
      while (!req_ready[0] || !req_ready[1]) @(posedge clk);
      req_valid[0] = 1'b0;
      req_valid[1] = 1'b0;

      check_rsp(1, old_data, 4'h2, 1'b0);
      check_rsp(0, 32'h0, 4'h1, 1'b0);

      golden_write(addr, new_data, 4'hF);
      send_req(1, addr, 32'h0, 4'hF, 4'h3, 1'b0);
      check_rsp(1, new_data, 4'h3, 1'b0);
    end
  endtask

  // ==========================================================================
  // Main Test Sequence
  // ==========================================================================
  initial begin
    @(posedge rst_n);
    @(posedge clk);

    test_reset();
    test_single_read_roundtrip();
    test_write_ack();
    test_multiport_peak();
    test_bank_conflict();
    test_backpressure();
    test_oob_error();
    test_partial_write();
    test_inorder_response();
    test_req_fifo_full();
    test_random_traffic();
    test_csr_perf();
    test_simultaneous_rw();

    $display("\n=== TESTBENCH SUMMARY ===");
    if (error_count == 0) begin
      $display("ALL TESTS PASSED");
    end else begin
      $display("%0d TESTS FAILED", error_count);
    end
    $finish;
  end

endmodule
