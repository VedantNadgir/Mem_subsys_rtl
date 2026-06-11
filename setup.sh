#!/usr/bin/env bash
# ============================================================
# Mem_Subsystem_RTL Environment Setup
#
# Supported Platform:
#   - macOS
#
# Installs:
#   - Verilator
#   - Verible
#   - Yosys
#   - Python3
#
# Usage:
#   bash setup.sh
# ============================================================

set -e

echo "===================================================="
echo "Mem_Subsystem_RTL Setup"
echo "===================================================="

# ------------------------------------------------------------
# Check Homebrew
# ------------------------------------------------------------

if ! command -v brew >/dev/null 2>&1; then
    echo ""
    echo "[ERROR] Homebrew not found."
    echo "Install Homebrew first:"
    echo "https://brew.sh"
    exit 1
fi

echo ""
echo "[INFO] Updating Homebrew..."
brew update || true

# ------------------------------------------------------------
# RTL Toolchain
# ------------------------------------------------------------

echo ""
echo "[INFO] Installing Verilator..."
brew install verilator

echo ""
echo "[INFO] Installing Yosys..."
brew install yosys

echo ""
echo "[INFO] Installing Python..."
brew install python

# ------------------------------------------------------------
# Verible
# ------------------------------------------------------------

echo ""
echo "[INFO] Installing Verible..."

if ! brew tap | grep -q "chipsalliance/verible"; then
    brew tap chipsalliance/verible
fi

brew install verible

# ------------------------------------------------------------
# Python Packages
# ------------------------------------------------------------

if [ -f requirements.txt ]; then
    echo ""
    echo "[INFO] Installing Python requirements..."
    python3 -m pip install -r requirements.txt
else
    echo ""
    echo "[WARN] requirements.txt not found. Skipping."
fi

# ------------------------------------------------------------
# Tool Verification
# ------------------------------------------------------------

echo ""
echo "===================================================="
echo "Tool Versions"
echo "===================================================="

echo ""
verilator --version

echo ""
yosys --version

echo ""
verible-verilog-lint --version

echo ""
python3 --version

# ------------------------------------------------------------
# Basic Smoke Tests
# ------------------------------------------------------------

echo ""
echo "===================================================="
echo "Running Smoke Tests"
echo "===================================================="

verilator --version >/dev/null
yosys -p "help" >/dev/null
verible-verilog-lint --version >/dev/null

echo ""
echo "[PASS] Verilator OK"
echo "[PASS] Yosys OK"
echo "[PASS] Verible OK"

echo ""
echo "===================================================="
echo "Recommended VSCode Extensions"
echo "===================================================="

echo "chipsalliance.verible-verilog"
echo "wavetrace.wavetrace"

echo ""
echo "[SUCCESS] Setup complete."