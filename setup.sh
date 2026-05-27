#!/bin/bash
# ─────────────────────────────────────────────────────────────
# Mem_Subsystem_RTL — environment setup for macOS
# Run once on a fresh machine: bash setup.sh
# ─────────────────────────────────────────────────────────────

set -e  # stop on first error

echo "── Checking Homebrew ──"
if ! command -v brew &>/dev/null; then
    echo "Homebrew not found. Install it from https://brew.sh then re-run."
    exit 1
fi
brew update --quiet

echo "── Installing RTL toolchain ──"
brew install verilator     # cycle-accurate SV simulator
brew install verible       # SV linter + formatter
brew install yosys         # open-source synthesis

echo "── Installing build utilities ──"
brew install make          # build orchestration (usually pre-installed)
brew install git           # version control  (usually pre-installed)

echo "── Installing Python analysis stack ──"
brew install python3
pip3 install -r requirements.txt --quiet

echo ""
echo "── Version check ──"
verilator --version
verible-verilog-lint --version
yosys --version
python3 --version

echo ""
echo "── VSCode extensions (install manually or paste into terminal) ──"
echo "code --install-extension eirikpre.systemverilog"
echo "code --install-extension chipsalliance.verible-verilog"
echo "code --install-extension wavetrace.wavetrace"
echo "code --install-extension ms-python.python"
echo "code --install-extension ms-python.jupyter"
echo "code --install-extension eamodio.gitlens"
echo "code --install-extension ms-vscode.makefile-tools"
echo "code --install-extension hediet.vscode-drawio"
echo ""
echo "Run the lines above to auto-install all VSCode extensions."
echo ""
echo "✓ Setup complete. Run 'make sim' in Tools_test/ to verify."