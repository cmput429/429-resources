/*
 * Copyright (c) 2004-2006 The Regents of The University of Michigan
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met: redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer;
 * redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution;
 * neither the name of the copyright holders nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Authors: Kevin Lim, Taylor Lloyd
 */

#include "cpu/pred/global.hh"

#include "base/intmath.hh"
#include "base/bitfield.hh"
#include "base/trace.hh"
#include "debug/Fetch.hh"

GlobalBP::GlobalBP(const GlobalBPParams *params)
    : BPredUnit(params),
      globalPredictorSize(params->globalPredictorSize),
      globalHistoryBits(ceilLog2(params->globalPredictorSize)),
	  globalHistory(params->numThreads, 0),
      globalCtrBits(params->globalCtrBits),
      globalCtrs(globalPredictorSize, SatCounter(globalCtrBits))
{
    if (!isPowerOf2(globalPredictorSize)) {
        fatal("Invalid global predictor size! (Must be power of 2)\n");
    }

    DPRINTF(Fetch, "Branch predictor: global predictor size: %i\n",
            globalPredictorSize);
    DPRINTF(Fetch, "Branch predictor: global history size: %i\n", globalHistoryBits);
    DPRINTF(Fetch, "Branch predictor: global counter bits: %i\n", globalCtrBits);

    // Setup the history mask
    globalHistoryMask = (1 << globalHistoryBits) - 1;
    // Setup the 'predict taken' threshold
    threshold = (1ULL << (globalCtrBits - 1)) - 1;
}

inline void GlobalBP::updateGlobalHistTaken(ThreadID tid)
{
    globalHistory[tid] = (globalHistory[tid] << 1) | 1;
    globalHistory[tid] = globalHistory[tid] & globalHistoryMask;
}

inline void GlobalBP::updateGlobalHistNotTaken(ThreadID tid)
{
    globalHistory[tid] = globalHistory[tid] << 1;
    globalHistory[tid] = globalHistory[tid] & globalHistoryMask;
}

void GlobalBP::btbUpdate(ThreadID tid, Addr branch_addr, void * &bp_history)
{
	// Update Global History to Not Taken
	globalHistory[tid] = globalHistory[tid] & (globalHistoryMask & ~1ULL);
}

bool GlobalBP::lookup(ThreadID tid, Addr branch_addr, void * &bp_history)
{
    bool taken = globalCtrs[globalHistory[tid] & globalHistoryMask] > threshold;

    DPRINTF(Fetch, "Branch predictor: prediction is %i.\n", (int)taken);
    GlobalHistory *history = new GlobalHistory;
    history->globalHistory = globalHistory[tid];
    history->predTaken = taken;
    bp_history = static_cast<void *>(history);

    if (taken) {
        updateGlobalHistTaken(tid);
        return true;
    } else {
        updateGlobalHistNotTaken(tid);
        return false;
    }
}

void GlobalBP::uncondBranch(ThreadID tid, Addr branch_addr, void * &bp_history)
{
    // Create the history
    GlobalHistory *history = new GlobalHistory;
    history->globalHistory = globalHistory[tid];
    history->predTaken = true;
    bp_history = static_cast<void *>(history);
    updateGlobalHistTaken(tid);
}

void GlobalBP::update(ThreadID tid, Addr branch_addr, bool taken, 
					  void *bp_history, bool squashed, 
					  const StaticInstPtr & inst, Addr corrTarget)
{
	assert(bp_history);

    DPRINTF(Fetch, "Branch Predictor: Updating predictive counters\n");

	GlobalHistory *history = static_cast<GlobalHistory *>(bp_history);
    unsigned global_predictor_idx =
            history->globalHistory & globalHistoryMask;
	if (taken) {
		globalCtrs[global_predictor_idx]++;
	} else {
		globalCtrs[global_predictor_idx]--;
	}

	if (squashed) { 
		// Recover using our past history
		DPRINTF(Fetch, "Branch Predictor: Update - recovering from squash\n");
		globalHistory[tid] = (history->globalHistory << 1) | taken;
		globalHistory[tid] = globalHistory[tid] & globalHistoryMask;        
	} else {
        delete history;
    }
}

void GlobalBP::squash(ThreadID tid, void *bp_history) 
{
    DPRINTF(Fetch, "Branch Predictor: Recovering from squash\n");
    GlobalHistory *history = static_cast<GlobalHistory *>(bp_history);
    globalHistory[tid] = history->globalHistory;
    delete history;
}

GlobalBP*
GlobalBPParams::create()
{
    return new GlobalBP(this);
}
