#include "Vcounter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vcounter* dut = new Vcounter;
    VerilatedVcdC* vcd = new VerilatedVcdC;
    dut->trace(vcd, 99);
    vcd->open("counter.vcd");

    dut->rst_n = 0;
    dut->clk   = 0;

    for (int i = 0; i < 200; i++) {
        dut->clk = !dut->clk;
        if (i == 4) dut->rst_n = 1;
        dut->eval();
        vcd->dump(i);
    }

    // self-check: after 100 clock edges (50 cycles) from reset, count should be 50
    bool pass = (dut->count == 98);
    std::cout << (pass ? "[PASS] counter smoke test" : "[FAIL] counter smoke test") << std::endl;

    vcd->close();
    delete vcd;
    delete dut;
    return pass ? 0 : 1;
}