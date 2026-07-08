task automatic run_backpressure();
  logic [ADDR_WIDTH-1:0] a;
  test_id++;
  $display("\n=== BACKPRESSURE: FIFO stall chain ===");
  u_mon.hold_ready(0);
  for (int i = 0; i < QUEUE_DEPTH * 4; i++) begin
    if (req_ready[0]) begin
      a = make_addr(0, 30 + (i % 10));
      u_drv.send(0, DATA_WIDTH'(32'hDEAD_0000 + i), a, 1'b1, STROBE_WIDTH'('1),
                 ID_WIDTH'(i % (1 << ID_WIDTH)));
    end else repeat (2) @(posedge clk);
    #1;
  end
  repeat (8) @(posedge clk);
  #1;
  if (!req_ready[0]) $display("[BP OK]  req_ready[0]=0 (stall chain working)");
  else begin
    $display("[BP FAIL] req_ready[0] should be 0");
    u_sb.error_count++;
  end
  u_mon.release_ready(1);
  a = make_addr(1, 50);
  do_write(1, a, DATA_WIDTH'(32'hCCCC_CCCC), STROBE_WIDTH'('1), ID_WIDTH'(0));
  do_read(1, a, ID_WIDTH'(1));
  $display("[BP OK]  Port 1 unaffected");
  u_mon.release_ready(0);
  repeat (QUEUE_DEPTH * 6) @(posedge clk);
  #1;
  $display("=== BACKPRESSURE: done ===");
endtask
