#!/usr/bin/env python3
"""
Parse Yosys synthesis reports and generate formatted summary.
Usage: python3 parse_report.py <report_dir> [module_names...]
"""

import sys
import os
import re
import glob


def parse_stat_file(path):
    """Parse a Yosys 'stat' or 'stat -liberty' report."""
    data = {
        "num_wires": 0, "wire_bits": 0, "num_cells": 0,
        "area": 0.0, "cells": {}, "has_area": False
    }
    if not os.path.exists(path):
        return data
    with open(path) as f:
        text = f.read()

    # Wire counts
    m = re.search(r"Number of wires:\s+(\d+)", text)
    if m:
        data["num_wires"] = int(m.group(1))
    m = re.search(r"Number of wire bits:\s+(\d+)", text)
    if m:
        data["wire_bits"] = int(m.group(1))

    # Cell count (total)
    m = re.search(r"Number of cells:\s+(\d+)", text)
    if m:
        data["num_cells"] = int(m.group(1))

    # Individual cells
    for line in text.splitlines():
        m = re.match(r"\s+(sky130_\S+)\s+(\d+)", line)
        if m:
            data["cells"][m.group(1)] = int(m.group(2))

    # Chip area
    m = re.search(r"Chip area for module.*?:\s+([\d.]+)", text)
    if not m:
        m = re.search(r"Area of cell.*?:\s+([\d.]+)", text)
    if m:
        data["area"] = float(m.group(1))
        data["has_area"] = True

    return data


def parse_sta_file(path):
    """Parse Yosys 'sta -liberty' timing report."""
    timing = {"delay": None, "path": None}
    if not os.path.exists(path):
        return timing
    with open(path) as f:
        text = f.read()

    # Look for delay line
    m = re.search(r"delay\s*=\s*([\d.]+)\s*(\w+)", text)
    if m:
        val, unit = float(m.group(1)), m.group(2)
        # Normalize to ns
        if unit.startswith("p"):
            val /= 1000.0
        elif unit.startswith("u"):
            val *= 1000.0
        timing["delay"] = val

    # Path
    m = re.search(r"(?:path|Endpoint):\s*(.+)", text)
    if m:
        timing["path"] = m.group(1).strip()

    return timing


def parse_log_depth(log_path):
    """Try to extract logic depth from abc output in yosys log."""
    depth = None
    if not os.path.exists(log_path):
        return depth
    with open(log_path) as f:
        text = f.read()
    # abc reports: "lev = N" for logic levels
    m = re.search(r"lev\s*=\s*(\d+)", text)
    if m:
        depth = int(m.group(1))
    return depth


def estimate_power(num_cells, cell_counts):
    """Rough power estimate from cell counts (uW @ tt_025C_1v80)."""
    # Typical dynamic power per gate type (uW/MHz) — ballpark from Sky130 docs
    power_table = {
        "dfrtp": 0.15, "dfxtp": 0.12,  # DFFs
        "inv": 0.03, "buf": 0.04,
        "nand2": 0.04, "nor2": 0.04,
        "and2": 0.05, "or2": 0.05,
        "xor2": 0.07, "xnor2": 0.07,
        "mux2": 0.06, "mux4": 0.10,
        "o21ai": 0.05, "a21oi": 0.05,
        "o211ai": 0.06, "a211oi": 0.06,
        "a22oi": 0.06, "o22ai": 0.06,
        "fa": 0.12, "ha": 0.08,
        "dlxtp": 0.08, "dlclkp": 0.06,
    }
    total_dyn = 0.0
    for cell, count in cell_counts.items():
        # Extract cell base name (e.g., sky130_fd_sc_hd__nand2_2 → nand2)
        base = cell.split("__")[-1].rsplit("_", 1)[0] if "__" in cell else cell
        matched = False
        for key, pwr in power_table.items():
            if key in base:
                total_dyn += count * pwr
                matched = True
                break
        if not matched:
            total_dyn += count * 0.05  # default 50nW/MHz

    leakage = num_cells * 0.003  # ~3nW per cell leakage ballpark
    return total_dyn, leakage


def report_module(rpt_dir, mod):
    """Generate formatted report for one module."""
    pre = parse_stat_file(os.path.join(rpt_dir, f"{mod}_pre.rpt"))
    opt = parse_stat_file(os.path.join(rpt_dir, f"{mod}_opt.rpt"))
    tech = parse_stat_file(os.path.join(rpt_dir, f"{mod}_tech.rpt"))
    sta = parse_sta_file(os.path.join(rpt_dir, f"{mod}_sta.rpt"))
    depth = parse_log_depth(os.path.join(rpt_dir, f"../logs/{mod}.log"))

    lines = []
    lines.append("=" * 80)
    lines.append(f"  Synthesis Report: {mod}")
    lines.append("=" * 80)

    # Optimization snapshots
    lines.append("\n  OPTIMIZATION SNAPSHOTS")
    lines.append("  " + "-" * 60)
    lines.append(f"  {'Phase':<18} {'Gate Count':>12} {'Area (um²)':>14} {'Wires':>10}")
    lines.append("  " + "-" * 60)
    lines.append(f"  {'Pre-Opt':<18} {pre['num_cells']:>12} {'N/A':>14} {pre['num_wires']:>10}")
    lines.append(f"  {'Post-Opt':<18} {opt['num_cells']:>12} {'N/A':>14} {opt['num_wires']:>10}")
    area_str = f"{tech['area']:.3f}" if tech["has_area"] else "N/A"
    lines.append(f"  {'Post-Tech':<18} {tech['num_cells']:>12} {area_str:>14} {tech['num_wires']:>10}")
    lines.append("  " + "-" * 60)

    # Reduction
    if pre["num_cells"] > 0 and tech["num_cells"] > 0:
        red = (1.0 - tech["num_cells"] / pre["num_cells"]) * 100
        lines.append(f"  Reduction: {red:+.1f}% (pre-opt → post-tech)")
        lines.append("")

    # Logic depth
    if depth:
        lines.append(f"  LOGIC DEPTH: {depth} levels")
        lines.append("")

    # Timing
    lines.append("  TIMING ESTIMATE")
    lines.append("  " + "-" * 60)
    if sta["delay"]:
        lines.append(f"  Critical Path Delay:  {sta['delay']:.3f} ns")
        freq = 1000.0 / sta["delay"] if sta["delay"] > 0 else 0
        lines.append(f"  Max Frequency:        {freq:.1f} MHz (estimate)")
    else:
        lines.append("  Critical Path Delay:  N/A (run 'sta' manually)")
    if sta["path"]:
        lines.append(f"  Endpoint:             {sta['path']}")
    lines.append("")

    # Cell breakdown (top 10)
    if tech["cells"]:
        lines.append("  CELL BREAKDOWN (top 10)")
        lines.append("  " + "-" * 60)
        sorted_cells = sorted(tech["cells"].items(), key=lambda x: -x[1])[:10]
        for cell, count in sorted_cells:
            lines.append(f"  {cell:<45} {count:>8}")
        lines.append("")

    # Power estimate
    if tech["num_cells"] > 0:
        dyn, leak = estimate_power(tech["num_cells"], tech["cells"])
        lines.append("  POWER ESTIMATE (rough, @ tt_025C_1v80, 100MHz toggle rate)")
        lines.append("  " + "-" * 60)
        lines.append(f"  Dynamic Power:    ~{dyn:.3f} uW/MHz  →  ~{dyn:.3f} mW @ 100MHz")
        lines.append(f"  Leakage Power:    ~{leak:.3f} uW")
        lines.append("")

    lines.append("  NETLIST")
    lines.append("  " + "-" * 60)
    net_path = os.path.join(rpt_dir, "../netlists", f"{mod}_sky130.v")
    exists = "EXISTS" if os.path.exists(net_path) else "NOT FOUND"
    lines.append(f"  Output: {net_path}  [{exists}]")
    lines.append("=" * 80)
    return "\n".join(lines)


def main():
    if len(sys.argv) < 2:
        print("Usage: python3 parse_report.py <report_dir> [module ...]")
        sys.exit(1)

    rpt_dir = sys.argv[1]
    if len(sys.argv) > 2:
        modules = sys.argv[2].split()
    else:
        # Auto-discover
        modules = []
        for p in sorted(glob.glob(os.path.join(rpt_dir, "*_tech.rpt"))):
            mod = os.path.basename(p).replace("_tech.rpt", "")
            modules.append(mod)

    if not modules:
        print("No reports found.")
        sys.exit(1)

    full_report = []
    for mod in modules:
        full_report.append(report_module(rpt_dir, mod))

    output = "\n\n".join(full_report)
    print(output)

    # Write summary file
    summary_path = os.path.join(rpt_dir, "summary.txt")
    with open(summary_path, "w") as f:
        f.write(output)
    print(f"\n[WROTE] {summary_path}")


if __name__ == "__main__":
    main()