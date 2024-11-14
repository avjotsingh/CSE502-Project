module top
#(
    DATA_WIDTH = 64,
    ADDR_WIDTH = 64,
    CHUNKS_LOG = 3,
    CONNECTIONS = 2
)
(
  input  clk,
         reset,
         hz32768timer,

  //cache interface
  input wire [CONNECTIONS-1:0] command_valid,
  input wire [CONNECTIONS-1:0] command_store,
  input wire [CONNECTIONS-1:0] command_ready,
  input wire [CONNECTIONS-1:0] [ADDR_WIDTH-1:0] command_addr,
  input wire [CONNECTIONS-1:0] [DATA_WIDTH*(2**CHUNKS_LOG)-1:0] data_in,
  output wire bus_valid,
  output wire bus_ready,
  output wire [$clog2(CONNECTIONS)-1:0] cacheID,
  output wire [DATA_WIDTH*(2**CHUNKS_LOG)-1:0] data_out,


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

  enum {IDLE, L_ADDR, L_READ, L_DONE, S_ADDR, S_WRITE} state, next_state; 
  wire [CHUNKS_LOG-1:0] offsetCounter;
  wire [CHUNKS_LOG**2-1:0][DATA_WIDTH-1:0] data_buffer;
  wire [ADDR_WIDTH-1:0] addr_buffer;
  wire [$clog2(CONNECTIONS)-1:0] currID;
  
  assign data_out = data_buffer;
  assign m_axi_araddr = addr_buffer;
  assign m_axi_arburst = 2'b10;
  assign m_axi_arlen = 7;
  assign cacheID = currID;

  minimum busChoice (command_valid, busChoiceOut);
  wire [$clog2(CONNECTIONS)-1:0] busChoiceOut;

  always_ff @ (posedge clk)
    if (reset) begin
      state <= IDLE;
      offsetCounter <= 0;
    end else begin
      state <= next_state;
      case(state)
          IDLE: begin
            addr_buffer <= command_addr;
          end
          L_ADDR: begin
          end
          L_READ: begin
            if (m_axi_rvalid) begin
              data_buffer [offsetCounter] <= m_axi_rdata; offsetCounter <= offsetCounter + 1;
            end
          end
          L_DONE: begin end
          S_ADDR: begin end
          S_WRITE: begin 
            if (m_axi_wready) begin
              offsetCounter <= offsetCounter + 1;
            end
          end
          L_DONE: begin end
      endcase
      state <= next_state;
    end

  //next_state logic
  always_comb begin
    case(state)
        IDLE : next_state = command_valid ? (command_store ? S_ADDR : L_ADDR) : IDLE;
        L_ADDR : next_state = m_axi_arready ? L_READ : L_ADDR;
        L_READ : next_state = offsetCounter == (-1) ? L_DONE : L_READ;
        L_DONE : next_state = command_ready ? (command_valid ? (command_store ? S_ADDR : L_ADDR) : IDLE) : L_DONE;
        S_ADDR : ;//handshake???
        S_WRITE : next_state = offsetCounter == (-1) ? IDLE : S_WRITE;
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
      L_ADDR: begin
        bus_valid = 0;
        bus_ready = 0;
        m_axi_arvalid = 1;
        m_axi_rready = 0;
      end
      L_READ: begin
        bus_valid = 0;
        bus_ready = 0;
        m_axi_arvalid = 0;
        m_axi_rready = 1;
      end
      L_DONE: begin
        bus_valid = 1;
        bus_ready = 1;
        m_axi_arvalid = 0;
        m_axi_rready = 1;
      end
      S_ADDR: begin
        bus_valid = 0;
        bus_ready = 0;
        m_axi_arvalid = 0;
        m_axi_rready = 0;
      end
      S_WRITE: begin
        bus_valid = 0;
        bus_ready = 0;
        m_axi_arvalid = 0;
        m_axi_rready = 0;
        m_axi_wdata = data_buffer [offsetCounter]; 
      end
    endcase
  end
endmodule
