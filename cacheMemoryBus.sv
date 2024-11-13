module top
#(
    DATA_WIDTH = 64,
    ADDR_WIDTH = 64,
    CHUNKS_LOG = 3
)
(
input  clk,
         reset,
         hz32768timer,

  //cache interface
  input wire command_valid,
  input wire command_store,
  input wire command_ready,
  input wire [ADDR_WIDTH-1:0] command_addr,
  input wire [DATA_WIDTH*(CHUNKS_LOG**2)-1:0] data_in,
  output wire bus_valid,
  output wire bus_ready,
  output wire [DATA_WIDTH*(CHUNKS_LOG**2)-1:0] data_out,


  // interface to connect to the bus
  //output  wire [ID_WIDTH-1:0]    m_axi_awid,
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
  //output  wire [STRB_WIDTH-1:0]  m_axi_wstrb,
  output  wire                   m_axi_wlast,
  output  wire                   m_axi_wvalid,
  input   wire                   m_axi_wready,
  //input   wire [ID_WIDTH-1:0]    m_axi_bid,
  input   wire [1:0]             m_axi_bresp,
  input   wire                   m_axi_bvalid,
  output  wire                   m_axi_bready,
  //output  wire [ID_WIDTH-1:0]    m_axi_arid,
  output  wire [ADDR_WIDTH-1:0]  m_axi_araddr,
  output  wire [7:0]             m_axi_arlen,
  output  wire [2:0]             m_axi_arsize,
  output  wire [1:0]             m_axi_arburst,
  output  wire                   m_axi_arlock,
  output  wire [3:0]             m_axi_arcache,
  output  wire [2:0]             m_axi_arprot,
  output  wire                   m_axi_arvalid,
  input   wire                   m_axi_arready,
  //input   wire [ID_WIDTH-1:0]    m_axi_rid,
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

  enum {IDLE, STORE, LOAD, DONE_LOAD} state, nextstate; 
  enum {L_IDLE, L_ADDR, L_READ} loadstate, nextloadstate;
  enum {S_IDLE, S_ADDR, S_READ} storestate, nextstorestate;
  wire [CHUNKS_LOG-1:0] offsetCounter;
  wire [CHUNKS_LOG**2-1:0][DATA_WIDTH-1:0] buffer;
  
  assign data_out = buffer;
  assign m_axi_araddr = command_addr;
  assign m_axi_arburst = 2'b10;
  assign m_axi_arlen = 7;

  always_ff @ (posedge clk)
    if (reset) begin
      state <= IDLE;
      offsetCounter <= 0;
    end else begin
        case(state)
            IDLE: begin end
            STORE: begin end
            LOAD: begin
                case (loadstate) 
                endcase
                if (m_axi_rvalid) begin
                    buffer [offsetCounter] <= m_axi_rdata; offsetCounter <= offsetCounter + 1; 
                end
             end
            DONE_LOAD: begin end
        endcase
        state <= nextstate;
    end

  //nextstate logic
  always_comb begin
    case(state)
        IDLE : nextstate = command_valid ? (command_store ? STORE : LOAD) : IDLE;
        STORE : nextstate = offsetCounter == (-1) ? IDLE : STORE;
        LOAD : nextstate = offsetCounter == (-1) ? DONE_LOAD : LOAD;
        DONE_LOAD : nextstate = command_ready ? (command_valid ? (command_store ? STORE : LOAD) : IDLE) : DONE_LOAD;
    endcase 
  end

  //output logic
  always_comb begin
    case(state)
        IDLE: begin
            bus_valid = 0; 
            bus_ready = 1;
            m_axi_arvalid = 0;
            m_axi_rready = 0;
        end
        STORE: begin
            bus_valid = 0; 
            bus_ready = 0;
            m_axi_arvalid = 0;
            m_axi_rready = 1;
        end
        LOAD: begin
            bus_valid = 0; 
            bus_ready = 0;
            m_axi_arvalid = 0;
            m_axi_rready = 0;
        end
        DONE_LOAD: begin 
            bus_valid = 1; 
            bus_ready = 1;
            m_axi_arvalid = 0;
            m_axi_rready = 0;
        end
    endcase
  end
endmodule
