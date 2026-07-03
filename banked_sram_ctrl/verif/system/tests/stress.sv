task automatic run_stress();
  logic [ADDR_WIDTH-1:0] addrs[100];
  logic [DATA_WIDTH-1:0] datas[100];
  int n = 100;
  test_id++;
  $display("\n=== STRESS: %0d W + %0d R ===", n, n);
  for (int i = 0; i < n; i++) begin
    addrs[i] = make_addr(i % NUM_BANKS, 130 + i);
    datas[i] = DATA_WIDTH'(32'hF000_0000 | (i << 8) | i);
    do_write(i % NUM_REQ_PORTS, addrs[i], datas[i], STROBE_WIDTH'('1),
             ID_WIDTH'(i % (1 << ID_WIDTH)));
  end
  for (int i = 0; i < n; i++) do_read(i % NUM_REQ_PORTS, addrs[i], ID_WIDTH'(i % (1 << ID_WIDTH)));
  $display("=== STRESS: done ===");
endtask
