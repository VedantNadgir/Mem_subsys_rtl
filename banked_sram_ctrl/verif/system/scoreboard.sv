`timescale 1ns / 1ps

import verif_pkg::*;
module scoreboard (
    input logic clk,
    input logic rst_n
);
  logic [DATA_WIDTH-1:0] gold_mem[0:MAX_ADDR];
  logic gold_init[0:MAX_ADDR];
  int error_count;
  int check_count;

  initial begin
    error_count = 0;
    check_count = 0;
    for (int i = 0; i <= MAX_ADDR; i++) begin
      gold_init[i] = 0;
      gold_mem[i]  = '0;
    end
  end

  task automatic predict_write(input logic [ADDR_WIDTH-1:0] addr, input logic [DATA_WIDTH-1:0] data,
                               input logic [STROBE_WIDTH-1:0] strobe);
    for (int z = 0; z < STROBE_WIDTH; z++) begin
      if (strobe[z]) begin
        gold_mem[addr][z*8+:8] = data[z*8+:8];
      end else if (!gold_init[addr]) begin
        gold_mem[addr][z*8+:8] = 8'b0;
      end
    end
    gold_init[addr] = 1;
  endtask

  task automatic check_read(
      input logic [ADDR_WIDTH-1:0] addr, input logic [DATA_WIDTH-1:0] got_data,
      input logic [ID_WIDTH-1:0] got_id, input logic [ID_WIDTH-1:0] exp_id, input logic got_err);

    check_count++;
    if (got_err !== 1'b0) begin
      $display("[SB FAIL] Read addr=%0h: expected err=1", addr);
      error_count++;
    end else if (gold_init[addr] && got_data !== gold_mem[addr]) begin
      $display("[SB FAIL] Read addr=%0h exp=%0h got=%0h", addr, gold_mem[addr], got_data);
      error_count++;
    end else if (got_id !== exp_id) begin
      $display("[SB FAIL] ID exp=%0h got=%0h addr=%0h", exp_id, got_id, addr);
      error_count++;
    end else begin
      $display("[SB OK] Read addr=%0h data=%0h id=%0h", addr, got_data, got_id);
    end
  endtask

  task automatic check_write_ack(input logic [DATA_WIDTH-1:0] got_data,
                                 input logic [ID_WIDTH-1:0] got_id,
                                 input logic [ID_WIDTH-1:0] exp_id, input logic got_err);

    check_count++;
    if (got_err !== 1'b0) begin
      $display("[SB FAIL] Write ACK err=1");
      error_count++;
    end else if (got_data !== '0) begin
      $display("[SB FAIL] Write ACK data=%0h (expected 0)", got_data);
      error_count++;
    end else if (got_id !== exp_id) begin
      $display("[SB FAIL] Write ACK ID exp=%0h got=%0h", exp_id, got_id);
      error_count++;
    end else begin
      $display("[SB OK] Write ACK id=%0h", got_id);
    end
  endtask

  task automatic report();
    $display("[SCOREBOARD] Total checks: %0d  Errors: %0d", check_count, error_count);
  endtask
endmodule
