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

  logic [63:0] pc_cpu, pc_if, pc_ex;
  wire [63:0] next_pc = branch_taken_ex ? predicted_target : pc_cpu + 4;
  wire branch_taken_ex;
  wire [63:0] predicted_target;
  wire instruction_cache_hit, data_cache_hit;
  wire [31:0] cache_instr, if_id_decoder_instr;

  btb branch_predictor (.clk(clk),.reset(reset), .pc_if(pc_if), .pc_ex(pc_ex), .branch_taken_ex(branch_taken_ex), .target_addr_ex(), .predicted_target(predicted_target), .hit());

  directCache #(.OFFSET_LENGTH(5), .TAG_LENGTH(49), .DATA_WIDTH(32)) instruction_cache 
  (.clk(clk), .reset(reset), .avalid(1), .aaddr(next_pc), .load(1), .data_from_cpu(0), .data_to_cpu(cache_instr),
   .hit(instruction_cache_hit), 
   .command_valid(), .command_store(), .command_rready(), .command_addr(), .data_to_bus(), 
   .data_from_bus(), .bus_valid(), .bus_ready());

  if_id_regs if_id (.clk(clk), .reset(reset), .pc_in(pc_cpu), .instruction_in(cache_instr), .pc_out(pc_if), .instruction_out(if_id_decoder_instr));
  
  decoder decoder (.instr(if_id_decoder_instr), .alu_op(), .func3(), .func7(), .imm(), .rs1(), .rs2(), .rd(), 
                  .reg_to_pc(), .alu_src(), .mem_read(), .mem_write(), .reg_write(), .mem_to_reg());
  
  alu alu (.alu_op(), .func3(), .func7(), .data1(), .data2(), .alu_res(), .branch_decision());

  directCache data_cache 
  (.clk(clk), .reset(reset), .avalid(), .aaddr(), .load(), .data_from_cpu(), .data_to_cpu(),
   .hit(data_cache_hit), 
   .command_valid(), .command_store(), .command_rready(), .command_addr(), .data_to_bus(), 
   .data_from_bus(), .bus_valid(), .bus_ready());
  
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
