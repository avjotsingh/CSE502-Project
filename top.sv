//`include "Sysbus.defs"
//this include will become necessary
module top
#(
  ID_WIDTH = 13,
  ADDR_WIDTH = 64,
  DATA_WIDTH = 64,
  STRB_WIDTH = DATA_WIDTH/8
)
(
  input  clk,
         reset,
         hz32768timer,

  // 64-bit addresses of the program entry point and initial stack pointer
  input  [63:0] entry,
  input  [63:0] stackptr,
  input  [63:0] satp,

  // interface to connect to the bus
  output  wire [ID_WIDTH-1:0]    m_axi_awid,
  output  wire [ADDR_WIDTH-1:0]  m_axi_awaddr,
  output  wire [7:0]             m_axi_awlen,
  output  wire [2:0]             m_axi_awsize,
  output  wire [1:0]             m_axi_awburst,
  output  wire                   m_axi_awlock,
  output  wire [3:0]             m_axi_awcache,
  output  wire [2:0]             m_axi_awprot,
  output  wire                   m_axi_awvalid,
  input   wire                   m_axi_awready,
  output  wire [DATA_WIDTH-1:0]  m_axi_wdata,
  output  wire [STRB_WIDTH-1:0]  m_axi_wstrb,
  output  wire                   m_axi_wlast,
  output  wire                   m_axi_wvalid,
  input   wire                   m_axi_wready,
  input   wire [ID_WIDTH-1:0]    m_axi_bid,
  input   wire [1:0]             m_axi_bresp,
  input   wire                   m_axi_bvalid,
  output  wire                   m_axi_bready,
  output  wire [ID_WIDTH-1:0]    m_axi_arid,
  output  wire [ADDR_WIDTH-1:0]  m_axi_araddr,
  output  wire [7:0]             m_axi_arlen,
  output  wire [2:0]             m_axi_arsize,
  output  wire [1:0]             m_axi_arburst,
  output  wire                   m_axi_arlock,
  output  wire [3:0]             m_axi_arcache,
  output  wire [2:0]             m_axi_arprot,
  output  wire                   m_axi_arvalid,
  input   wire                   m_axi_arready,
  input   wire [ID_WIDTH-1:0]    m_axi_rid,
  input   wire [DATA_WIDTH-1:0]  m_axi_rdata,
  input   wire [1:0]             m_axi_rresp,
  input   wire                   m_axi_rlast,
  input   wire                   m_axi_rvalid,
  output  wire                   m_axi_rready,
  input   wire                   m_axi_acvalid,
  output  wire                   m_axi_acready,
  input   wire [ADDR_WIDTH-1:0]  m_axi_acaddr,
  input   wire [3:0]             m_axi_acsnoop
);

  // Wires for IF stage
  logic [63:0] pc_if;          // Program counter that drives the pipeline
  wire [63:0] next_pc;


  // Pipeline stall and flush signals
  wire stall_pc, stall_if_id, stall_id_ex, stall_ex_mem, stall_mem_wb;
  wire flush_if_id, flush_id_ex;
  

  // Outputs - BTB
  wire [63:0] predicted_target;
  wire btb_hit;


  // Outputs - Instruction cache
  wire instruction_cache_hit;
  wire [31:0] instr_cache;


  // Outputs - IF/ID registers
  wire [63:0] pc_if_id;
  wire [31:0] instr_if_id;


  // Outputs - decoder
  wire [6:0] alu_op_id;
  wire [2:0] func3_id;
  wire [6:0] func7_id;
  wire [63:0] imm_id;
  wire [4:0] rs1_id, rs2_id, rd_id;
  wire reg_to_pc_id, alu_src_id, mem_read_id, mem_write_id, reg_write_id, mem_to_reg_id;


  // Outputs - register file
  wire [63:0] data1_id, data2_id;


  // Outputs - ID/EX registers
  wire [63:0] pc_id_ex, imm_id_ex, data1_id_ex, data2_id_ex;
  wire [5:0] rd_id_ex, reg1_id_ex, reg2_id_ex;
  wire [18:0] ex_control_id_ex;
  wire [2:0] mem_control_id_ex, wb_control_id_ex;


  // Wire for computing target PC
  wire [63:0] target_ex;


  // Inputs - ALU
  wire [63:0] data1_ex, data2_ex;


  // Outputs - ALU
  wire branch_decision_ex;
  wire [63:0] alu_res_ex;


  // Outputs - Hazard Detector
  wire mem_hazard, branch_mispredict;


  // Outputs - EX/MEM registers
  wire [63:0] target_ex_mem, alu_res_ex_mem, write_data_ex_mem;
  wire branch_decision_ex_mem;
  wire [4:0] rd_ex_mem;
  wire [1:0] mem_control_ex_mem;
  wire [1:0] wb_control_ex_mem;


  // Outputs - Forwarding Unit
  wire forward1, forward2;


  // Inputs - Data Cache
  wire avalid_mem;
  wire load_mem;


  // Outputs - Data Cache
  wire [63:0] read_data_mem, data_cache_hit;


  // Outputs - MEM/WB registers
  wire [63:0] alu_res_mem_wb, mem_data_mem_wb;
  wire [4:0] rd_mem_wb;
  wire [1:0] wb_control_mem_wb;


  // Wires for WB stage
  wire [63:0] write_data_wb;
  wire [4:0] write_reg_wb;


  // Set stall/flush signals for different stages
  always_comb begin
    stall_pc = 0;
    stall_if_id = 0;
    stall_id_ex = 0;
    stall_ex_mem = 0;
    stall_mem_wb = 0;
    flush_if_id = 0;
    flush_id_ex = 0;

    stall_pc = !instruction_cache_hit || mem_hazard || !data_cache_hit;
    stall_if_id = mem_hazard  || !data_cache_hit;
    stall_id_ex = !data_cache_hit;
    stall_ex_mem = !data_cache_hit;
    stall_mem_wb = !data_cache_hit;

    flush_if_id = branch_mispredict;
    flush_id_ex = mem_hazard || branch_mispredict;
  end
  

  /*** Branch target buffer ***/
  btb btb (
    .clk(clk),
    .reset(reset),
    .pc_if(pc_if),
    .pc_ex(pc_id_ex),
    .branch_taken_ex(branch_decision_ex),
    .target_addr_ex(target_ex),
    .predicted_target(predicted_target),
    .hit(btb_hit)
  );


  /*** Instruction cache ***/
  // TODO: connect the cache to the bus
  directCache #(.OFFSET_LENGTH(5), .TAG_LENGTH(49), .DATA_WIDTH(32)) instruction_cache (
    .clk(clk),
    .reset(reset),
    .avalid(1),
    .aaddr(pc_if),
    .load(1),
    .data_from_cpu(0),
    .data_to_cpu(instr_cache),
    .hit(instruction_cache_hit), 
    .command_valid(), 
    .command_store(), 
    .command_rready(), 
    .command_addr(), 
    .data_to_bus(), 
    .data_from_bus(), 
    .bus_valid(), 
    .bus_ready()
  );
  
  
  /*** IF/ID registers ***/
  if_id_regs if_id_regs (
    .clk(clk),
    .reset(reset),
    .flush(flush_if_id),
    .stall(stall_if_id),
    .pc_in(pc_if),
    .instruction_in(instr_cache),
    .pc_out(pc_if_id),
    .instruction_out(instr_if_id)
  );


  /*** Decoder unit ***/
  decoder decoder (
    .instr(instr_if_id),
    .alu_op(alu_op_id),
    .func3(func3_id),
    .func7(func7_id),
    .imm(imm_id),
    .rs1(rs1_id),
    .rs2(rs2_id),
    .rd(rd_id),
    .reg_to_pc(reg_to_pc_id),
    .alu_src(alu_src_id),
    .mem_read(mem_read_id),
    .mem_write(mem_write_id),
    .reg_write(reg_write_id),
    .mem_to_reg(mem_to_reg_id)
  );
  

  /*** Register file ***/
  register_file register_file (
    .clk(clk),
    .reset(reset),
    .read1(rs1_id),
    .read2(rs2_id),
    .write_reg(write_reg_wb),
    .write_data(write_data_wb),
    .data1(data1_id),
    .data2(data2_id)
  );


  /*** ID/EX registers ***/
  id_ex_regs id_ex_regs (
    .clk(clk),
    .reset(reset),
    .flush(flush_id_ex),
    .stall(stall_id_ex),
    .pc_in(pc_if_id),
    .data1_in(data1_id),
    .data2_in(data2_id), 
    .imm_in(imm_id),
    .dest_in(rd_id),
    .reg1_in(rs1_id),
    .reg2_in(rs2_id),
    .ex_control_in({ alu_src_id, alu_op_id, func3_id, func7_id }),
    .mem_control_in({ mem_read_id, mem_write_id }),
    .wb_control_in({ reg_write_id, mem_to_reg_id }),
    
    .pc_out(pc_id_ex), 
    .data1_out(data1_id_ex), 
    .data2_out(data2_id_ex), 
    .imm_out(imm_id_ex), 
    .dest_out(rd_id_ex), 
    .reg1_out(rs1_id_ex), 
    .reg2_out(rs2_id_ex), 
    .ex_control_out(ex_control_id_ex), 
    .mem_control_out(mem_control_id_ex), 
    .wb_control_out(wb_control_id_ex)
  );
  
  
  /*** ALU ***/
  alu alu (
    .alu_op(ex_control_id_ex[16:10]),
    .func3(ex_control_id_ex[9:7]),
    .func7(ex_control_id_ex[6:0]),
    .data1(data1_ex),
    .data2(data2_ex),
    .alu_res(alu_res_ex),
    .branch_decision(branch_decision_ex)
  );


  /*** Hazard detector ***/
  hazard_detector hazard_detector (
    .mem_read_ex(mem_control_id_ex[1]),
    .rd_ex(rd_id_ex),
    .reg1_id(rs1_id_ex),
    .reg2_id(rs2_id_ex),
    .branch_dec_ex(branch_decision_ex),
    .target_ex(target_ex),
    .pc_id(pc_if_id),
    .mem_hazard(mem_hazard),
    .mispredict(branch_mispredict),
  );


  /*** EX/MEM registers ***/
  ex_mem_regs ex_mem_regs (
    .clk(clk),
    .reset(reset),
    .stall(stall_ex_mem),
    .target_in(target_ex),
    .branch_decision_in(branch_decision_ex),
    .alu_res_in(alu_res_ex),
    .write_data_in(data2_id_ex),
    .dest_in(rd_id_ex),
    .mem_control_in(mem_control_id_ex),
    .wb_control_in(wb_control_id_ex),

    .target_out(target_ex_mem),
    .branch_decision_out(branch_decision_ex_mem),
    .alu_res_out(alu_res_ex_mem),
    .write_data_out(write_data_ex_mem),
    .dest_out(rd_ex_mem),
    .mem_control_out(mem_control_ex_mem),
    .wb_control_out(wb_control_ex_mem)
  );
  

  /*** Forwarding Unit ***/
  forwarding_unit forwarding_unit (
    .id_ex_reg1(rs1_id_ex),
    .id_ex_reg2(rs2_id_ex),
    .ex_mem_reg_write(wb_control_ex_mem[1]),
    .ex_mem_dest(rd_ex_mem),
    .mem_wb_reg_write(wb_control_mem_wb[1]),
    .mem_wb_dest(rd_mem_wb),
    .forward1(forward1),
    .forward2(forward2)
  );


  /*** Data cache ***/
  // TODO: connect the bus to the cache
  directCache data_cache (
    .clk(clk),
    .reset(reset),
    .stall(stall_mem_wb),
    .avalid(avalid_mem),
    .aaddr(alu_res_ex_mem),
    .load(load_mem),
    .data_from_cpu(write_data_ex_mem),
    .data_to_cpu(read_data_mem),
    .hit(data_cache_hit),
    .command_valid(),
    .command_store(),
    .command_rready(),
    .command_addr(),
    .data_to_bus(),
    .data_from_bus(),
    .bus_valid(),
    .bus_ready()
  );
  

  /*** MEM/WB registers ***/
  mem_wb_regs mem_wb_regs(
    .clk(clk),
    .reset(reset),
    .alu_in(alu_res_ex_mem),
    .mem_data_in(read_data_mem),
    .dest_in(rd_ex_mem),
    .wb_control_in(wb_control_ex_mem),

    .alu_out(alu_res_mem_wb),
    .mem_data_out(mem_data_mem_wb),
    .dest_out(rd_mem_wb),
    .wb_control_out(wb_control_mem_wb),
  )


  // Combination logic for IF stage
  always_comb begin
    if (stall_pc) begin
      next_pc = pc_if;
    end else if (branch_mispredict) begin
      next_pc = target_ex;
    end else if (btb_hit) begin
      next_pc = predicted_target;
    end else begin
      next_pc = pc_if + 4;
    end
  end


  // Combinational logic for EX stage
  always_comb begin
    target_ex = pc_id_ex + imm_id_ex;
    case (forward1) 
      2'b00:
        data1_ex = ex_control_id_ex[18] ? pc_id_ex : data1_id_ex;
      2'b10:
        data1_ex = alu_res_ex_mem;
      2'b01:
        data1_ex = write_data_wb;;
    endcase
    case (forward2)
      2'b00:
        data2_ex = ex_control_id_ex[17] ? imm_id_ex : data2_id_ex;
      2'b10:
        data2_ex = alu_res_ex_mem;
      2'b01:
        data2_ex = write_data_wb;
    endcase
  end


  // Combinational logic for MEM stage
  always_comb begin
    avalid_mem = mem_control_ex_mem[1] || mem_control_ex_mem[0];
    load_mem = mem_control_ex_mem[1] ? 1 : 0;
  end


  // Combinational logic for WB stage
  always_comb begin
    write_data_wb = wb_control_mem_wb[0] ? mem_data_mem_wb : alu_res_mem_wb;
    write_reg_wb = wb_control_mem_wb[1] ? 0x0 : rd_mem_wb;
  end


  // Sequential logic for IF stage
  always_ff @ (posedge clk) begin
    if (reset) begin
      pc_if <= entry;
    end else begin
      pc_if <= next_pc;
    end
  end
    

  initial begin
    $display("Initializing top, entry point = 0x%x", entry);
  end
endmodule
