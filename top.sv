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

  logic [63:0] pc;          // Program counter 
  wire pc_ex, pc_hit, 
  
  // TODO: Pipeline stall signals to be added to all stages

  
  
  
  
  wire pc_if, pc_ex;
  wire [63:0] next_pc = branch_taken_ex ? predicted_target : pc_cpu + 4;
  wire branch_taken_ex;
  wire [63:0] predicted_target;
  wire instruction_cache_hit, data_cache_hit;
  wire [31:0] instr_cache, if_id_decoder_instr;


  // Wires for IF stage
  wire [63:0] pc_if;
  // TODO: write logic for pc_if


  // Branch target buffer
  btb btb (
    .clk(clk),
    .reset(reset),
    .pc_if(pc_if),
    .pc_ex()
  )


  // Instruction cache
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

  
  // Output wires for IF/ID registers
  wire [63:0] pc_if_id;
  wire [31:0] instr_if_id;

  // IF/ID registers
  if_id_regs if_id_regs (
    .clk(clk),
    .reset(reset),
    .pc_in(pc_if),
    .instruction_in(instr_cache),
    .pc_out(pc_if_id),
    .instruction_out(instr_if_id)
  );



  // Output wires for the decoder
  wire [6:0] alu_op_id;
  wire [2:0] func3_id;
  wire [6:0] func7_id;
  wire [63:0] imm_id;
  wire [4:0] rs1_id, rs2_id, rd_id;
  wire alu_src_id, mem_read_id, mem_write_id, reg_write_id, mem_to_reg_id;

  // Decoder unit
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
  


  // Output wires for the register file
  wire [63:0] data1_id, data2_id;

  // Register file
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


  // Output wires from ID/EX registers
  wire [63:0] pc_id_ex, imm_id_ex, data1_id_ex, data2_id_ex;
  wire [5:0] rd_id_ex, reg1_id_ex, reg2_id_ex;
  wire [18:0] ex_control_id_ex;
  wire [2:0] mem_control_id_ex, wb_control_id_ex;

  // ID/EX registers
  id_ex_regs id_ex_regs (
    .clk(clk), 
    .reset(reset), 
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


  // Wire for computing target PC
  wire [63:0] target_ex;

  // Input wires for ALU
  wire [63:0] data1_ex, data2_ex;

  
  always_comb begin
    // TODO: write logic to drive data1_ex_ and data2_ex_
    target_ex = pc_id_ex + imm_id_ex;
    data1_ex = ;
    data2_ex = ;
  end


  // ALU output wires
  wire branch_decision_ex;
  wire [63:0] alu_res_ex;
  
  // ALU
  alu alu (
    .alu_op(ex_control_id_ex[16:10]),
    .func3(ex_control_id_ex[9:7]),
    .func7(ex_control_id_ex[6:0]),
    .data1(data1_ex),
    .data2(data2_ex),
    .alu_res(alu_res_ex),
    .branch_decision(branch_decision_ex)
  );


  // Output wires for EX/MEM registers
  wire [63:0] target_ex_mem, alu_res_ex_mem, write_data_ex_mem;
  wire branch_decision_ex_mem;
  wire [4:0] rd_ex_mem;
  wire [1:0] mem_control_ex_mem;
  wire [1:0] wb_control_ex_mem;

  // EX/MEM registers
  ex_mem_regs ex_mem_regs (
    .clk(clk),
    .reset(reset),
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
  

  // Input wires for data cache
  wire avalid_mem;
  wire load_mem;

  always_comb begin
    avalid_mem = mem_control_ex_mem[1] || mem_control_ex_mem[0];
    load_mem = mem_control_ex_mem[1] ? 1 : 0;
  end
  
  // Output wires for data cache
  wire [63:0] read_data_mem;

  // Data cache
  // TODO: connect the bus to the cache
  directCache data_cache (
    .clk(clk),
    .reset(reset),
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
  

  // Output wires for MEM/WB registers
  wire [63:0] alu_res_mem_wb, mem_data_mem_wb;
  wire [4:0] rd_mem_wb;
  wire [1:0] wb_control_mem_wb;


  // MEM/WB registers
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


  // Wires for writeback stage
  wire [63:0] write_data_wb;
  wire [4:0] write_reg_wb;

  always_comb begin
    write_data_wb = wb_control_mem_wb[0] ? mem_data_mem_wb : alu_res_mem_wb;
    write_reg_wb = wb_control_mem_wb[1] ? 0x0 : rd_mem_wb;
  end




  
  

  
  always_ff @ (posedge clk)
    if (reset) begin
      pc_cpu <= entry;
    end else begin
        pc_cpu <= next_pc;
      if (pc_cpu == 1000) begin  
        $display("Hello World!  @ %x", pc_cpu);
        $finish; //crashes the test
      end
    end
    

  initial begin
    $display("Initializing top, entry point = 0x%x", entry);
  end
endmodule
