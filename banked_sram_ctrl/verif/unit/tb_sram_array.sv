// tb_req_fifo.sv
// 1. Clock generation
// 2. Reset generation (not used - SRAM has no reset)
// 3. DUT instantiation
// 4. Helper tasks
// 5. Directed tests
// 6. Pass/fail summary

`timescale 1ns / 1ps

module tb_sram_array;

  initial begin
    $dumpfile("waves/sram_array.vcd");
    $dumpvars(0, tb_sram_array);
  end
  initial begin
    #1000ns;
    $display("WATCHDOG EXPIRED");
    $finish;
  end

  //Parameters
  localparam int DATA_WIDTH = 32;
  localparam int DEPTH = 256;

  logic                     clk;  // no reset logic.
  //no SRAM content initialization on reset is performed (SRAM content is undefined at power-on;
  logic                     we;
  logic [$clog2(DEPTH)-1:0] addr;
  logic [   DATA_WIDTH-1:0] wdata;
  logic [DATA_WIDTH/8 -1:0] bwe;
  logic [   DATA_WIDTH-1:0] rdata;

  // Test variables
  logic [   DATA_WIDTH-1:0] A;
  logic [DATA_WIDTH-1:0] B, C, D;
  logic [  DATA_WIDTH-1:0] old_rdata;
  logic [  DATA_WIDTH-1:0] val;
  logic [DATA_WIDTH/8-1:0] full_bwe;
  logic [DATA_WIDTH/8-1:0] byte_bwe;

  //DUT instantiation
  sram_array #(
      .DEPTH(DEPTH),
      .DATA_WIDTH(DATA_WIDTH)
  ) dut (
      .clk(clk),
      .we(we),
      .addr(addr),
      .wdata(wdata),
      .bwe(bwe),
      .rdata(rdata)
  );

  //Clock generation
  initial clk = 0;
  always #5 clk = ~clk;  //10ns period (5ns low + 5ns high)
  initial begin
    $display("TB START");
  end

  //Init
  initial begin
    we = 0;
    addr = 0;
    wdata = 0;
    bwe = 0;
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

  task automatic sram_write(input [$clog2(DEPTH)-1:0] write_addr, input [DATA_WIDTH-1:0] write_data,
                            input [DATA_WIDTH/8-1:0] write_bwe);
    @(posedge clk);
    addr = write_addr;
    wdata = write_data;
    bwe = write_bwe;
    we = 1'b1;
    @(posedge clk);
    addr = 0;
    wdata = 0;
    bwe = 0;
    we = 1'b0;
  endtask

  task automatic sram_read(input [$clog2(DEPTH)-1:0] read_addr);
    @(posedge clk);
    addr = read_addr;
    we   = 1'b0;
    @(posedge clk);
  endtask

  //Tests
  initial begin
    // Wait a few cycles for SRAM to stabilize (no reset)
    @(posedge clk);
    @(posedge clk);
    @(posedge clk);

    //1) Basic Read and Write
    test_id = 1;
    $display("\n=== Test %0d: Basic Write and Read ===", test_id);
    A = 32'hA5A5_0001;
    full_bwe = 4'b1111;
    sram_write(0, A, full_bwe);
    sram_read(0);
    @(posedge clk);
    check(rdata == A, "rdata should match written value A at addr 0");

    //2) Multiple write addresses
    test_id = 2;
    $display("\n=== Test %0d: Write Multiple Addresses ===", test_id);
    B = 32'hBDBD_0002;
    C = 32'hCDCD_0003;
    D = 32'hDFDF_0004;

    sram_write(0, A, full_bwe);
    sram_write(1, B, full_bwe);
    sram_write(2, C, full_bwe);
    sram_write(3, D, full_bwe);

    @(posedge clk);
    sram_read(0);
    @(posedge clk);
    check(rdata == A, "addr 0 should still contain A");
    sram_read(1);
    @(posedge clk);
    check(rdata == B, "addr 1 should contain B");
    sram_read(2);
    @(posedge clk);
    check(rdata == C, "addr 2 should contain C");
    sram_read(3);
    @(posedge clk);
    check(rdata == D, "addr 3 should contain D");

    //3) Byte-write enable (partial write)
    test_id = 3;
    $display("\n=== Test %0d: Byte-Write Enable (Partial Write) ===", test_id);
    // Write full word at addr 10
    val = 32'h1111_2222;
    sram_write(10, val, full_bwe);
    @(posedge clk);
    sram_read(10);
    @(posedge clk);
    check(rdata == 32'h1111_2222, "addr 10 should have full word");

    // Write only byte 0 (LSB) at addr 10
    byte_bwe = 4'b0001;  // Only bwe[0] = 1
    sram_write(10, 32'h3333_3333, byte_bwe);
    @(posedge clk);
    sram_read(10);
    @(posedge clk);
    // LSB should be 33, rest should remain 1111_22
    check(rdata == 32'h1111_2233, "addr 10 LSB should be 33, rest unchanged");


    // Write only byte 3 (MSB) at addr 10
    byte_bwe = 4'b1000;  // Only bwe[3] = 1
    sram_write(10, 32'h4444_4444, byte_bwe);
    @(posedge clk);
    sram_read(10);
    @(posedge clk);
    // MSB should be 44, rest should be 112233
    check(rdata == 32'h4411_2233, "addr 10 MSB should be 44, rest unchanged");

    byte_bwe = 4'b0100;  // Only bwe[2] = 1
    sram_write(10, 32'h4477_4444, byte_bwe);
    @(posedge clk);
    sram_read(10);
    @(posedge clk);
    // MSB should be 44, rest should be 112233
    check(rdata == 32'h4477_2233, "addr 10 MSB should be 77, rest unchanged");

    byte_bwe = 4'b0010;  // Only bwe[1] = 1
    sram_write(10, 32'h4444_0044, byte_bwe);
    @(posedge clk);
    sram_read(10);
    @(posedge clk);
    // MSB should be 44, rest should be 112233
    check(rdata == 32'h4477_0033, "addr 10 MSB should be 00, rest unchanged");

    //4) overwrite address
    test_id = 4;
    $display("\n=== Test %0d: Overwrite Address ===", test_id);
    sram_read(0);
    @(posedge clk);
    old_rdata = rdata;
    val = 32'hAAAA_BBBB;
    sram_write(0, val, full_bwe);
    @(posedge clk);
    sram_read(0);
    @(posedge clk);
    check(rdata == 32'hAAAA_BBBB, "addr 0 should be overwritten with AAAA_BBBB");
    check(rdata != old_rdata, "rdata should change after overwrite");

    //Read the same address multiple times
    test_id = 5;
    $display("\n=== Test %0d: Read Same Address Multiple Times ===", test_id);
    sram_read(1);
    @(posedge clk);
    val = rdata;
    check(rdata == B, "first read of addr 1 should be B");
    sram_read(1);
    @(posedge clk);
    check(rdata == val, "second read of addr 1 should match first");
    sram_read(1);
    @(posedge clk);
    check(rdata == val, "third read of addr 1 should match first");

    //6) Write-Then Immediate Read (Same cycle)
    test_id = 6;
    $display("\n=== Test %0d: Write then Immediate Read ===", test_id);
    val = 32'hEEEE_EEEE;
    sram_write(35, val, full_bwe);
    sram_read(35);
    check(rdata == val, "rdata should reflect written value after write+read");

    //7) Boundary addresses (0 and DEPTH-1)
    test_id = 7;
    $display("\n=== Test %0d: Boundary Addresses ===", test_id);
    val = 32'hEEEE_FF00;
    sram_write(0, val, full_bwe);
    sram_read(0);
    check(rdata == val, "addr 0 (boundary) should write/read correctly");


    val = 32'hFFFF_1111;
    sram_write(8'(DEPTH - 1), val, full_bwe);
    sram_read(8'(DEPTH - 1));
    check(rdata == val, "addr DEPTH-1 (255, boundary) should write/read correctly");


    //8) No write (we=0) preserves content
    test_id = 8;
    $display("\n=== Test %0d: No Write Preserves Content ===", test_id);
    val = 32'h1234_5678;
    byte_bwe = 4'b1011;
    sram_write(35, val, byte_bwe);
    sram_read(35);
    old_rdata = rdata;  //32'h12EE_5678
    check(rdata == 32'h12EE_5678, "Multiple byte overwrites");
    // Try to "write" with we=0
    @(posedge clk);
    addr  = 35;
    wdata = 32'h9ABC_DEF0;
    we    = 1'b0;  // No write
    bwe   = 0;
    @(posedge clk);
    check(rdata == old_rdata, "rdata should not change when we=0");

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
