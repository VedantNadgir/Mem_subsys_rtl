task automatic run_random();
  logic [ADDR_WIDTH-1:0] a;
  logic [DATA_WIDTH-1:0] d;
  int port, bank, row;
  test_id++;
  $display("\n=== RANDOM: 40 transactions ===");
  for (int i = 0; i < 40; i++) begin
    port = $urandom_range(0, NUM_REQ_PORTS-1);
    bank = $urandom_range(0, NUM_BANKS-1);
    row  = $urandom_range(80, 120);
    a    = make_addr(bank, row);
    d    = DATA_WIDTH'($urandom());
    if (i % 3 != 2 || !u_sb.gold_init[a])
      do_write(port, a, d, STROBE_WIDTH'('1), ID_WIDTH'(i % (1 << ID_WIDTH)));
    else do_read(port, a, ID_WIDTH'(i % (1 << ID_WIDTH)));
  end
  $display("=== RANDOM: done ===");
endtask
