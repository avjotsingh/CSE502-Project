module cacheMemoryBus
#(
    DATA_WIDTH = 64,
    ADDR_WIDTH = 64,
    CHUNKS_LOG = 3,
    CONNECTIONS = 2,
    STRB_WIDTH = DATA_WIDTH/8,
    ID_WIDTH = 13
)
(
  input  clk,
         reset,

  //cache interface, each cache should connect to one of the elements of the array 
  input wire [CONNECTIONS-1:0] command_valid,
  input wire [CONNECTIONS-1:0] command_store,
  input wire [CONNECTIONS-1:0] command_rready,
  input wire [CONNECTIONS-1:0] [ADDR_WIDTH-1:0] command_addr,
  input wire [CONNECTIONS-1:0] [DATA_WIDTH*(2**CHUNKS_LOG)-1:0] data_in,
  output reg [CONNECTIONS-1:0] bus_valid,
  output reg [CONNECTIONS-1:0] bus_ready,
  output reg [DATA_WIDTH*(2**CHUNKS_LOG)-1:0] data_out,

  //invalidate
  output reg invalidate,
  output reg [ADDR_WIDTH-1:0] invalidate_addr,


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

  enum {IDLE, L_ADDR, L_READ, L_DONE, S_ADDR, S_WRITE} state, next_state; 
  reg [CHUNKS_LOG-1:0] offsetCounter;
  reg [2**CHUNKS_LOG-1:0][DATA_WIDTH-1:0] data_buffer;
  reg [ADDR_WIDTH-1:0] addr_buffer;
  reg [$clog2(CONNECTIONS)-1:0] currID;
  
  //should only push 1 to the current cache, 0 to the rest 
  reg [CONNECTIONS-1:0] currPow2;

  assign data_out = data_buffer;
  assign m_axi_araddr = addr_buffer;
  assign m_axi_awaddr = addr_buffer;
  assign m_axi_arburst = 2'b10;
  assign m_axi_arlen = 7;

  //to be used in IDLE, when choosing the next request to handle
  minimum #($clog2(CONNECTIONS)) busChoice (command_valid, busChoiceOut);
  wire [$clog2(CONNECTIONS)-1:0] busChoiceOut; 

  //to be used to filter which connection we are sending to 
  minimum_inverse #($clog2(CONNECTIONS)) busChoiceReply (currID, currPow2);
  
  reg invalidate_buffer;
  reg [ADDR_WIDTH-1:0] invalidate_addr_buffer;
  reg acready_buffer;
  assign invalidate = invalidate_buffer;
  assign invalidate_addr = invalidate_addr_buffer;

  always_ff @ (posedge clk) begin
    if (reset) begin
      state <= IDLE;
      offsetCounter <= 0;
      data_buffer <= 0;
      addr_buffer <= 0;
      currID <= 0;
      invalidate_buffer <= 0;
      invalidate_addr_buffer <= 0;
      acready_buffer <= 0;
    end else begin
      state <= next_state;
      if (m_axi_acvalid) begin
        acready_buffer <= 1;
        invalidate_buffer <= m_axi_acsnoop == 4'hd;
        invalidate_addr_buffer <= m_axi_acaddr;
      end else begin
        acready_buffer <= 0;
        invalidate_buffer <= 0;
        invalidate_addr_buffer <= 0;
      end
      case(state)
          IDLE: begin
            currID <= busChoiceOut; 
            addr_buffer <= command_addr[busChoiceOut];
            data_buffer <= data_in[busChoiceOut];
          end
          L_ADDR: begin
            /*
              The state change is handled in the logic, 
              Address is already being pushed to memory. 
            */
          end
          L_READ: begin
            if (m_axi_rvalid) begin
              data_buffer [offsetCounter] <= m_axi_rdata; offsetCounter <= offsetCounter + 1;
            end
          end
          L_DONE: begin 
            //!!!curently assuming that the cache that made the request will be ready for the result
          end
          S_ADDR: begin end
          S_WRITE: begin 
            if (m_axi_wready) begin
              offsetCounter <= offsetCounter + 1;
            end
          end
      endcase
    end
  end

  //next_state logic
  always_comb begin
    case(state)
        IDLE : next_state = command_valid[busChoiceOut] ? (command_store[busChoiceOut] ? S_ADDR : L_ADDR) : IDLE;
        L_ADDR : next_state = m_axi_arready ? L_READ : L_ADDR;
        L_READ : next_state = m_axi_rlast ? L_DONE : L_READ;
        L_DONE : next_state = command_rready[currID] ? IDLE : L_DONE; //(command_valid[busChoiceOut] ? (command_store[busChoiceOut] ? S_ADDR : L_ADDR) :
        S_ADDR : next_state = m_axi_awready ? S_WRITE : S_ADDR;//handshake???
        S_WRITE : next_state = m_axi_wlast ? IDLE : S_WRITE;
    endcase 
  end

  //output logic
  always_comb begin
    if (reset) begin
      bus_valid = 0;
      bus_ready = 0;
      
      m_axi_arvalid = 0;
      m_axi_rready = 0;
      
      m_axi_awvalid = 0;
      m_axi_wvalid = 0;
      m_axi_wdata = 0;

      m_axi_acready = 0;
    end else begin
      m_axi_acready = acready_buffer;
      case(state)
        IDLE: begin
          bus_valid = 0;
          bus_ready = currPow2;
          
          m_axi_arvalid = 0;
          m_axi_rready = 0;

          m_axi_awvalid = 0;
          m_axi_wvalid = 0;
          m_axi_wdata = 0;
          m_axi_wlast = 0;
        end
        L_ADDR: begin
          bus_valid = 0;
          bus_ready = 0;
          
          m_axi_arvalid = 1;
          m_axi_rready = 0;
          
          m_axi_awvalid = 0;
          m_axi_wvalid = 0;
          m_axi_wdata = 0;
          m_axi_wlast = 0;
        end
        L_READ: begin
          bus_valid = 0;
          bus_ready = 0;
          
          m_axi_arvalid = 0;
          m_axi_rready = 1;
          
          m_axi_awvalid = 0;
          m_axi_wvalid = 0;
          m_axi_wdata = 0;
          m_axi_wlast = 0;
        end
        L_DONE: begin
          bus_valid = currPow2;
          bus_ready = 0;
          
          m_axi_arvalid = 0;
          m_axi_rready = 0;
          
          m_axi_awvalid = 0;
          m_axi_wvalid = 0;
          m_axi_wdata = 0;
          m_axi_wlast = 0;
        end
        S_ADDR: begin
          bus_valid = 0;
          bus_ready = 0;
          
          m_axi_arvalid = 0;
          m_axi_rready = 0;
          
          m_axi_awvalid = 1;
          m_axi_wvalid = 0;
          m_axi_wdata = 0;
          m_axi_wlast = 0;
        end
        S_WRITE: begin
          bus_valid = 0;
          bus_ready = 0;
          
          m_axi_arvalid = 0;
          m_axi_rready = 0;
          
          m_axi_awvalid = 0;
          m_axi_wvalid = 1;
          m_axi_wdata = data_buffer [offsetCounter]; 
          m_axi_wlast = offsetCounter == {CHUNKS_LOG{1'b1}} ? 1 : 0;
        end
      endcase
    end
  end
endmodule
