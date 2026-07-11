task automatic run_conflict();
  logic [ADDR_WIDTH-1:0] a[4];
  test_id++;
  $display("\n=== CONFLICT: Bank arbitration ===");
  a[0] = make_addr(0, 10);
  a[1] = make_addr(0, 11);
  do_write(0, a[0], DATA_WIDTH'(32'hAAAA_0000), STROBE_WIDTH'('1), ID_WIDTH'(0));
  do_write(1, a[1], DATA_WIDTH'(32'hBBBB_1111), STROBE_WIDTH'('1), ID_WIDTH'(0));
  do_read(0, a[0], ID_WIDTH'(1));
  do_read(1, a[1], ID_WIDTH'(1));
  for (int p = 0; p < NUM_REQ_PORTS; p++) begin
    a[p] = make_addr(0, 20 + p);
    do_write(p, a[p], DATA_WIDTH'(32'hC000_0000 | p), STROBE_WIDTH'('1), ID_WIDTH'(2));
  end
  for (int p = 0; p < NUM_REQ_PORTS; p++) do_read(p, a[p], ID_WIDTH'(3));
  $display("=== CONFLICT: done ===");
endtask
