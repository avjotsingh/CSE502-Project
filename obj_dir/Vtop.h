// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
#include "svdpi.h"

class Vtop__Syms;
class Vtop___024root;
class Vtop___024unit;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtop VL_NOT_FINAL : public ::sc_core::sc_module, public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_core::sc_in<bool> &clk;
    sc_core::sc_in<bool> &reset;
    sc_core::sc_in<bool> &hz32768timer;
    sc_core::sc_out<uint32_t> &m_axi_awlen;
    sc_core::sc_out<uint32_t> &m_axi_awsize;
    sc_core::sc_out<uint32_t> &m_axi_awburst;
    sc_core::sc_out<bool> &m_axi_awlock;
    sc_core::sc_out<uint32_t> &m_axi_awcache;
    sc_core::sc_out<uint32_t> &m_axi_awprot;
    sc_core::sc_out<bool> &m_axi_awvalid;
    sc_core::sc_in<bool> &m_axi_awready;
    sc_core::sc_out<uint32_t> &m_axi_wstrb;
    sc_core::sc_out<bool> &m_axi_wlast;
    sc_core::sc_out<bool> &m_axi_wvalid;
    sc_core::sc_in<bool> &m_axi_wready;
    sc_core::sc_in<uint32_t> &m_axi_bresp;
    sc_core::sc_in<bool> &m_axi_bvalid;
    sc_core::sc_out<bool> &m_axi_bready;
    sc_core::sc_out<uint32_t> &m_axi_arlen;
    sc_core::sc_out<uint32_t> &m_axi_arsize;
    sc_core::sc_out<uint32_t> &m_axi_arburst;
    sc_core::sc_out<bool> &m_axi_arlock;
    sc_core::sc_out<uint32_t> &m_axi_arcache;
    sc_core::sc_out<uint32_t> &m_axi_arprot;
    sc_core::sc_out<bool> &m_axi_arvalid;
    sc_core::sc_in<bool> &m_axi_arready;
    sc_core::sc_in<uint32_t> &m_axi_rresp;
    sc_core::sc_in<bool> &m_axi_rlast;
    sc_core::sc_in<bool> &m_axi_rvalid;
    sc_core::sc_out<bool> &m_axi_rready;
    sc_core::sc_in<bool> &m_axi_acvalid;
    sc_core::sc_out<bool> &m_axi_acready;
    sc_core::sc_in<uint32_t> &m_axi_acsnoop;
    sc_core::sc_out<uint32_t> &m_axi_awid;
    sc_core::sc_in<uint32_t> &m_axi_bid;
    sc_core::sc_out<uint32_t> &m_axi_arid;
    sc_core::sc_in<uint32_t> &m_axi_rid;
    sc_core::sc_in<uint64_t> &entry;
    sc_core::sc_in<uint64_t> &stackptr;
    sc_core::sc_in<uint64_t> &satp;
    sc_core::sc_out<uint64_t> &m_axi_awaddr;
    sc_core::sc_out<uint64_t> &m_axi_wdata;
    sc_core::sc_out<uint64_t> &m_axi_araddr;
    sc_core::sc_in<uint64_t> &m_axi_rdata;
    sc_core::sc_in<uint64_t> &m_axi_acaddr;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    SC_CTOR(Vtop);
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

  public:
    // API METHODS
  private:
    void eval() { eval_step(); }
    void eval_step();
  public:
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
};

#endif  // guard
