SIM = verilator  # Use the desired simulator (e.g., questa, xsim, verilator)
TOPLEVEL_LANG = verilog
VERILOG_SOURCES = top.sv alu/alu.sv branch_predictor/btb.sv caches/*.sv decoder/decoder.sv pipeline/*.sv pipeline/pipeline_registers/*/*.sv regfile/reg_file.sv# Path to your SV file
TOPLEVEL = top  # Name of the top-level module in your SV code
MODULE = top_test  # Name of the Python test module

include $(shell cocotb-config --makefiles)/Makefile.sim