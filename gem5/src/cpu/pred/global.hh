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
 * Authors: Kevin Lim
 *          Taylor Lloyd
 */

#ifndef __CPU_PRED_GLOBAL_PRED_HH__
#define __CPU_PRED_GLOBAL_PRED_HH__

#include <vector>

#include "base/types.hh"
#include "cpu/pred/bpred_unit.hh"
#include "base/sat_counter.hh"
#include "params/GlobalBP.hh"

/**
 * Implements a set global-global (gAG) predictor. It uses the branch history
 * to index into a table of counters. Global history is speculatively updated,
 * and corrected during a squash.
 */
class GlobalBP : public BPredUnit
{
  public:
    /**
     * Default branch predictor constructor.
     */
    GlobalBP(const GlobalBPParams *params);
    /**
     * Looks up the given address in the branch predictor and returns
     * a true/false value as to whether it is taken.  Also creates a
     * BPHistory object to store any state it will need on squash/update.
     * @param branch_addr The address of the branch to look up.
     * @param bp_history Pointer that will be set to the BPHistory object.
     * @return Whether or not the branch is taken.
     */
    bool lookup(ThreadID tid, Addr branch_addr, void * &bp_history);

    /**
     * Records that there was an unconditional branch, and modifies
     * the bp history to point to an object that has the previous
     * global history stored in it.
     * @param bp_history Pointer that will be set to the BPHistory object.
     */
    void uncondBranch(ThreadID tid, Addr branch_addr, void * &bp_history);
    /**
     * Updates the branch predictor to Not Taken if a BTB entry is
     * invalid or not found.
     * @param branch_addr The address of the branch to look up.
     * @param bp_history Pointer to any bp history state.
     * @return Whether or not the branch is taken.
     */
    void btbUpdate(ThreadID tid, Addr branch_addr, void * &bp_history);
    /**
     * Updates the branch predictor with the actual result of a branch.
     * @param branch_addr The address of the branch to update.
     * @param taken Whether or not the branch was taken.
     * @param bp_history Pointer to the BPHistory object that was created
     * when the branch was predicted.
     * @param squashed is set when this function is called during a squash
     * operation.
     */
    void update(ThreadID tid, Addr branch_addr, bool taken, void *bp_history,
	 			bool squashed, const StaticInstPtr & inst, Addr corrTarget);

    /**
     * Restores the global branch history on a squash.
     * @param bp_history Pointer to the BPHistory object that has the
     * previous global branch history in it.
     */
    void squash(ThreadID tid, void *bp_history);

  private:
    /** Updates global history as taken. */
    inline void updateGlobalHistTaken(ThreadID tid);

    /** Updates global history as not taken. */
    inline void updateGlobalHistNotTaken(ThreadID tid);

    /**
     * The branch history information that is created with a prediction.
     * It's used for recovery upon a squash, and discarded for correct
     * predictions.
     */
    struct GlobalHistory {
      unsigned globalHistory;
      bool predTaken;
    };

    /** Number of entries in the global predictor */
    unsigned globalPredictorSize;

    /** Number of bits required to index the predictor */
    unsigned globalHistoryBits;

    /** Global history register. */
    std::vector<unsigned> globalHistory;

    /** Number of bits in each counter of the global predictor */
    unsigned globalCtrBits;

    /** Table of the global counters */
    std::vector<SatCounter> globalCtrs;

    /** The mask to ensure no extra history is stored */
    unsigned globalHistoryMask;

    /** Counter threshold to decide taken/untaken */
    unsigned threshold;
};

#endif // __CPU_PRED_GLOBAL_PRED_HH__
