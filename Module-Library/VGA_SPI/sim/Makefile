# ===============================
# Verilator SV-only Makefile
# ===============================

# -------- User config --------
TOP      ?= tb_vga_spi
CORE_DIR ?= ../core
TB_DIR   ?= ../testbench
OBJ_DIR  ?= obj_dir

# -------- Tool --------
VERILATOR = verilator

# -------- Flags --------
VERILATOR_FLAGS = -Wall --sv --timing --assert -Wno-fatal
TRACE_FLAGS     = --trace

# -------- Sources --------
SV_SRC := $(wildcard $(CORE_DIR)/*.sv) \
          $(wildcard $(TB_DIR)/*.sv)

# -------- Default --------
all: help

# -------- Build --------
build:
	$(VERILATOR) --binary $(VERILATOR_FLAGS) \
		$(SV_SRC) \
		--top-module $(TOP) \
		--Mdir $(OBJ_DIR)

# -------- Build with VCD --------
wave:
	$(VERILATOR) --binary $(VERILATOR_FLAGS) $(TRACE_FLAGS) \
		$(SV_SRC) \
		--top-module $(TOP) \
		--Mdir $(OBJ_DIR)

# -------- Run --------
run: build
	./$(OBJ_DIR)/V$(TOP)

run-wave: wave
	./$(OBJ_DIR)/V$(TOP)

# -------- Lint --------
lint:
	$(VERILATOR) -Wall --sv --lint-only $(SV_SRC)

# ------- GTKWave -------
gtkwave:
	gtkwave $(TOP).vcd

# -------- Clean --------
clean:
	rm -rf $(OBJ_DIR)

# -------- Help --------
help:
	@echo ""
	@echo "Verilator Makefile targets:"
	@echo ""
	@echo "  make build        Build simulation"
	@echo "  make run          Build + run simulation"
	@echo "  make wave         Build with VCD support"
	@echo "  make run-wave     Build + run with VCD"
	@echo "  make lint         Lint-only (fast checks)"
	@echo "  make clean        Remove build artifacts"
	@echo "  make gtkwave      View waveform in GTKWave"
	@echo ""
	@echo "Variables:"
	@echo "  TOP=<tb_top>      Set testbench top module"
	@echo ""
	@echo "Examples:"
	@echo "  make run TOP=tb_dp_ram"
	@echo "  make run-wave TOP=tb_dp_ram"
	@echo "  make lint"
	@echo ""

.PHONY: all build run wave run-wave lint clean help gtkwave
