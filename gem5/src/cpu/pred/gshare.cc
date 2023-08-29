#include "cpu/pred/gshare.hh"

#include "base/intmath.hh"
#include "base/trace.hh"
#include "debug/Fetch.hh"

GShareBP::GShareBP(const GShareBPParams *params)
    : BPredUnit(params)
{
    
}

void GShareBP::btbUpdate(ThreadID tid, Addr branch_addr, void * &bp_history)
{

}

bool GShareBP::lookup(ThreadID tid, Addr branch_addr, void * &bp_history)
{
    return true;
}

void GShareBP::uncondBranch(ThreadID tid, Addr branch_addr, void * &bp_history)
{

}

void GShareBP::update(ThreadID tid, Addr branch_addr, bool taken, 
					  void *bp_history, bool squashed, 
					  const StaticInstPtr & inst, Addr corrTarget)
{

}

void GShareBP::squash(ThreadID tid, void *bp_history) 
{

}

GShareBP*
GShareBPParams::create()
{
    return new GShareBP(this);
}
