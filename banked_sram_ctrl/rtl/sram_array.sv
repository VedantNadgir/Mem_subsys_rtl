module sram_array #(
    parameter int DEPTH      = 256,
    parameter int DATA_WIDTH = 32
) (
    input  logic                     clk,    // no reset logic.
    //no SRAM content initialization on reset is performed (SRAM content is undefined at power-on;
    input  logic                     we,
    input  logic [$clog2(DEPTH)-1:0] addr,
    input  logic [   DATA_WIDTH-1:0] wdata,
    input  logic [DATA_WIDTH/8 -1:0] bwe,
    output logic [   DATA_WIDTH-1:0] rdata
);
  logic [DATA_WIDTH-1:0] mem[0:DEPTH-1];
  always_ff @(posedge clk) begin
    if (we) begin
      for (int i = 0; i < DATA_WIDTH / 8; i++) begin
        if (bwe[i]) begin
          mem[addr][i*8+:8] <= wdata[i*8+:8];
        end
      end
    end
  end
  assign rdata = mem[addr];  //read register
endmodule
