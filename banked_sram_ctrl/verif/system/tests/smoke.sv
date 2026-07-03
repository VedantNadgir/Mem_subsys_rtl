task automatic run_smoke();
  logic [ADDR_WIDTH-1:0] a;
  test_id++;
  $display("\n=== SMOKE: Basic R/W all banks ===");
  for (int b = 0; b < NUM_BANKS; b++) begin
    a = make_addr(b, 1);
    do_write(0, a, DATA_WIDTH'(32'hA000_0000 | b), STROBE_WIDTH'('1), ID_WIDTH'(b));
  end
  for (int b = 0; b < NUM_BANKS; b++) begin
    a = make_addr(b, 1);
    do_read(0, a, ID_WIDTH'(b + 4));
  end
  $display("=== SMOKE: done ===");
endtask
