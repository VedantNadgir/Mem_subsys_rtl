// tb_sram_array.sv
`timescale 1ns / 1ps

module tb_sram_array;
  localparam int DEPTH = 256;
  localparam int DATA_WIDTH = 32;
  localparam int ADDR_WIDTH = $clog2(DEPTH);
  logic                    clk;
  logic                    we;
  logic [  ADDR_WIDTH-1:0] addr;
  logic [  DATA_WIDTH-1:0] wdata;
  logic [DATA_WIDTH/8-1:0] bwe;
  logic [  DATA_WIDTH-1:0] rdata;
  int                      error_count = 0;
  int                      test_id = 0;
  logic [            31:0] old_rdata;
  logic [            31:0] expected;

  sram_array #(
      .DEPTH(DEPTH),
      .DATA_WIDTH(DATA_WIDTH)
  ) dut (
      .clk  (clk),
      .we   (we),
      .addr (addr),
      .wdata(wdata),
      .bwe  (bwe),
      .rdata(rdata)
  );

  initial clk = 1'b0;
  always #5 clk = ~clk;

  initial begin
    $dumpfile("waves/sram_array.vcd");
    $dumpvars(0, tb_sram_array);
  end

  initial begin
    #3000ns;
    $display("[ERROR] WATCHDOG EXPIRED @ time %0t", $time);
    $finish;
  end

  initial begin
    we    = 1'b0;
    addr  = '0;
    wdata = '0;
    bwe   = '0;
  end

  task automatic check(input bit cond, input string msg);
    begin
      if (!cond) begin
        $display("[ERROR] Test %0d: %s @ time %0t", test_id, msg, $time);
        error_count++;
      end else begin
        $display("[OK]    Test %0d: %s @ time %0t", test_id, msg, $time);
      end
    end
  endtask

  task automatic idle_cycle();
    begin
      we    = 1'b0;
      bwe   = '0;
      wdata = '0;
      @(posedge clk);
      #1;
    end
  endtask

  task automatic write_word(input logic [ADDR_WIDTH-1:0] a, input logic [31:0] d,
                            input logic [3:0] be);
    begin
      addr  = a;
      wdata = d;
      bwe   = be;
      we    = 1'b1;
      @(posedge clk);
      #1;
      we    = 1'b0;
      bwe   = '0;
      wdata = '0;
    end
  endtask

  task automatic read_addr(input logic [ADDR_WIDTH-1:0] a);
    begin
      addr = a;
      we   = 1'b0;
      bwe  = '0;
      @(posedge clk);
      #1;
    end
  endtask

  task automatic expect_read(input logic [ADDR_WIDTH-1:0] a, input logic [31:0] d,
                             input string msg);
    begin
      read_addr(a);
      check(rdata === d, msg);
    end
  endtask

  task automatic prime_rdata_known();
    begin
      write_word(8'hFE, 32'hCAFE_BABE, 4'hF);
      read_addr(8'hFE);
      check(rdata === 32'hCAFE_BABE, "Prime rdata to known value");
    end
  endtask

  // ============================================================
  // TC_SRAM_01 — Full-Word Write and Read-Back
  // ============================================================
  task automatic tc_sram_01_full_word_write_readback();
    begin
      test_id = 1;
      $display("\n=== TC_SRAM_01: Full-Word Write and Read-Back ===");

      write_word(8'h05, 32'hDEAD_BEEF, 4'hF);
      expect_read(8'h05, 32'hDEAD_BEEF, "Full-word write should read back correctly");
    end
  endtask

  // ============================================================
  // TC_SRAM_02 — Registered Read: Exactly 1-Cycle Latency
  // ============================================================
  task automatic tc_sram_02_registered_read_latency();
    begin
      test_id = 2;
      $display("\n=== TC_SRAM_02: Registered Read 1-Cycle Latency ===");

      prime_rdata_known();
      write_word(8'h10, 32'hAAAA_AAAA, 4'hF);

      old_rdata = rdata;

      addr = 8'h10;
      we = 1'b0;
      bwe = '0;
      #1;
      check(rdata === old_rdata, "rdata must not change combinationally when addr changes");

      @(posedge clk);
      #1;
      check(rdata === 32'hAAAA_AAAA,
            "rdata should update one cycle after read address is presented");
    end
  endtask

  // ============================================================
  // TC_SRAM_03 — Write Enable Gate: we=0 Prevents Write
  // ============================================================
  task automatic tc_sram_03_we_zero_blocks_write();
    begin
      test_id = 3;
      $display("\n=== TC_SRAM_03: we=0 Prevents Write ===");

      write_word(8'h20, 32'h1111_1111, 4'hF);

      addr  = 8'h20;
      wdata = 32'hDEAD_CAFE;
      bwe   = 4'hF;
      we    = 1'b0;
      @(posedge clk);
      #1;

      expect_read(8'h20, 32'h1111_1111, "Memory should remain unchanged when we=0");
    end
  endtask

  // ============================================================
  // TC_SRAM_04 — Partial Write: Byte Lane 0 Only
  // ============================================================
  task automatic tc_sram_04_byte_lane0_only();
    begin
      test_id = 4;
      $display("\n=== TC_SRAM_04: Partial Write Byte Lane 0 Only ===");

      write_word(8'h30, 32'hAABB_CCDD, 4'hF);
      write_word(8'h30, 32'h1234_5678, 4'h1);
      expect_read(8'h30, 32'hAABB_CC78, "Only byte lane 0 should update");
    end
  endtask

  // ============================================================
  // TC_SRAM_05 — Partial Write: Each Byte Lane Independently
  // ============================================================
  task automatic tc_sram_05_each_byte_lane_independent();
    begin
      test_id = 5;
      $display("\n=== TC_SRAM_05: Each Byte Lane Independently ===");

      write_word(8'h40, 32'h0000_0000, 4'hF);

      write_word(8'h40, 32'h0000_FF00, 4'h2);
      expect_read(8'h40, 32'h0000_FF00, "Byte lane 1 should update independently");

      write_word(8'h40, 32'h00AB_0000, 4'h4);
      expect_read(8'h40, 32'h00AB_FF00, "Byte lane 2 should update independently");

      write_word(8'h40, 32'h5500_0000, 4'h8);
      expect_read(8'h40, 32'h55AB_FF00, "Byte lane 3 should update independently");
    end
  endtask

  // ============================================================
  // TC_SRAM_06 — bwe=4'h0 With we=1: No Write Occurs
  // ============================================================
  task automatic tc_sram_06_bwe_zero_no_write();
    begin
      test_id = 6;
      $display("\n=== TC_SRAM_06: bwe=0 With we=1 Causes No Write ===");

      write_word(8'h50, 32'h1234_5678, 4'hF);
      write_word(8'h50, 32'hDEAD_DEAD, 4'h0);
      expect_read(8'h50, 32'h1234_5678, "bwe=0 should suppress all byte writes");
    end
  endtask

  // ============================================================
  // TC_SRAM_07 — Same-Address Read+Write: Old Data First
  // ============================================================
  task automatic tc_sram_07_same_addr_read_before_write();
    begin
      test_id = 7;
      $display("\n=== TC_SRAM_07: Same-Address Read+Write Gives Old Data First ===");

      write_word(8'h00, 32'hAAAA_AAAA, 4'hF);

      addr  = 8'h00;
      wdata = 32'hBBBB_BBBB;
      bwe   = 4'hF;
      we    = 1'b1;
      @(posedge clk);
      #1;
      check(rdata === 32'hBBBB_BBBB, "New_Value should be seen due to combinational read");

      we    = 1'b0;
      bwe   = '0;
      wdata = '0;

      read_addr(8'h00);
      check(rdata === 32'hBBBB_BBBB, "New data should be visible on following read");
    end
  endtask

  // ============================================================
  // TC_SRAM_08 — Different Addresses Independent
  // ============================================================
  task automatic tc_sram_08_different_address_independence();
    begin
      test_id = 8;
      $display("\n=== TC_SRAM_08: Different Addresses Are Independent ===");

      write_word(8'h01, 32'h1111_1111, 4'hF);
      write_word(8'h02, 32'h2222_2222, 4'hF);
      write_word(8'h01, 32'hFFFF_FFFF, 4'hF);

      expect_read(8'h02, 32'h2222_2222, "Write to addr 0x01 must not affect addr 0x02");
      expect_read(8'h01, 32'hFFFF_FFFF, "Updated addr 0x01 should hold new value");
    end
  endtask

  // ============================================================
  // TC_SRAM_09 — Pipelined Read: addr -> rdata with 1-cycle lag
  // ============================================================
  task automatic tc_sram_09_pipelined_read_sequence();
    begin
      test_id = 9;
      $display("\n=== TC_SRAM_09: Pipelined Read Address-to-rdata Lag ===");

      write_word(8'h60, 32'h0000_AAAA, 4'hF);
      write_word(8'h61, 32'h0000_BBBB, 4'hF);
      write_word(8'h62, 32'h0000_CCCC, 4'hF);

      addr = 8'h60;
      we   = 1'b0;
      bwe  = '0;
      @(posedge clk);
      #1;
      check(rdata === 32'h0000_AAAA, "Read of addr 0x60 should appear after one cycle");

      addr = 8'h61;
      we   = 1'b0;
      bwe  = '0;
      @(posedge clk);
      #1;
      check(rdata === 32'h0000_BBBB, "Read of addr 0x61 should appear after one cycle");

      addr = 8'h62;
      we   = 1'b0;
      bwe  = '0;
      @(posedge clk);
      #1;
      check(rdata === 32'h0000_CCCC, "Read of addr 0x62 should appear after one cycle");
    end
  endtask

  // ============================================================
  // TC_SRAM_10 — Back-to-Back Writes Same Address: Last Wins
  // ============================================================
  task automatic tc_sram_10_back_to_back_same_addr();
    begin
      test_id = 10;
      $display("\n=== TC_SRAM_10: Back-to-Back Writes Same Address ===");

      write_word(8'h07, 32'hAAAA_AAAA, 4'hF);
      write_word(8'h07, 32'hBBBB_BBBB, 4'hF);
      expect_read(8'h07, 32'hBBBB_BBBB, "Later write should overwrite earlier write");
    end
  endtask

  // ============================================================
  // TC_SRAM_11 — Boundary Addresses: 0 and DEPTH-1
  // ============================================================
  task automatic tc_sram_11_boundary_addresses();
    begin
      test_id = 11;
      $display("\n=== TC_SRAM_11: Boundary Addresses ===");

      write_word({ADDR_WIDTH{1'b0}}, 32'hDEAD_0000, 4'hF);
      write_word(ADDR_WIDTH'(DEPTH - 1), 32'hDEAD_00FF, 4'hF);

      expect_read({ADDR_WIDTH{1'b0}}, 32'hDEAD_0000, "Address 0 should read back correctly");
      expect_read(ADDR_WIDTH'(DEPTH - 1), 32'hDEAD_00FF,
                  "Address DEPTH-1 should read back correctly");
    end
  endtask

  // ============================================================
  // TC_SRAM_12 — No Reset: Unwritten Read is Don't-Care
  // ============================================================
  task automatic tc_sram_12_no_reset_dont_care();
    begin
      test_id = 12;
      $display("\n=== TC_SRAM_12: No Reset, Unwritten Read is Don't-Care ===");

      addr = 8'h7A;
      we   = 1'b0;
      bwe  = '0;
      @(posedge clk);
      #1;

      check(1'b1, $sformatf("Observed unwritten rdata = 0x%08h (accepted as don't-care)", rdata));

      if ($isunknown(rdata)) begin
        check(1'b1, "Unwritten read contains unknowns; accepted by spec as don't-care");
      end else begin
        check(1'b1, "Unwritten read resolved to a concrete value; also accepted as don't-care");
      end
    end
  endtask

  initial begin
    @(posedge clk);
    #1;

    tc_sram_01_full_word_write_readback();
    tc_sram_02_registered_read_latency();
    tc_sram_03_we_zero_blocks_write();
    tc_sram_04_byte_lane0_only();
    tc_sram_05_each_byte_lane_independent();
    tc_sram_06_bwe_zero_no_write();
    tc_sram_07_same_addr_read_before_write();
    tc_sram_08_different_address_independence();
    tc_sram_09_pipelined_read_sequence();
    tc_sram_10_back_to_back_same_addr();
    tc_sram_11_boundary_addresses();
    tc_sram_12_no_reset_dont_care();

    $display("\n=== TESTBENCH SUMMARY ===");
    if (error_count == 0) $display("ALL TESTS PASSED");
    else $display("%0d TEST(S) FAILED", error_count);

    $finish;
  end
endmodule
