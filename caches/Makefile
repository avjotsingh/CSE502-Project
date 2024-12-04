SIM = verilator  # Use the desired simulator (e.g., questa, xsim, verilator)
TOPLEVEL_LANG = verilog
VERILOG_SOURCES = cacheMemoryBus.sv  # Path to your SV file
TOPLEVEL = cacheMemoryBus  # Name of the top-level module in your SV code
MODULE = test_bus  # Name of the Python test module

#SIM = verilator  # Use the desired simulator (e.g., questa, xsim, verilator)
#TOPLEVEL_LANG = verilog
#VERILOG_SOURCES = minimum.sv  # Path to your SV file
#TOPLEVEL = minimum  # Name of the top-level module in your SV code
#MODULE = test_minimum  # Name of the Python test module

#SIM = verilator  # Use the desired simulator (e.g., questa, xsim, verilator)
#TOPLEVEL_LANG = verilog
#VERILOG_SOURCES = minimum_inverse.sv  # Path to your SV file
#TOPLEVEL = minimum_inverse  # Name of the top-level module in your SV code
#MODULE = test_minimum_inverse  # Name of the Python test module

#when changing which module to test, uncomment this line:
#$(shell rm -rf sim_build)

include $(shell cocotb-config --makefiles)/Makefile.sim