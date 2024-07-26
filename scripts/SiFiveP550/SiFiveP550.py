# Copyright (c) 2015 Jason Power
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met: redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer;
# redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in the
# documentation and/or other materials provided with the distribution;
# neither the name of the copyright holders nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

""" This file creates a multicore CPU and a two-level cache system
and a system memory. This script takes a single parameter which specifies
a binary to execute. If none is provided it executes 'hello' by default
(mostly used for testing).

See Part 1, Chapter 3: Adding cache to the configuration script in the
learning_gem5 book for more information about this script.
This file exports options for the L1 I/D and L2 cache sizes."""

# Modified by Ayrton Chilibeck for CMPUT 429, 2024
# TODO:
#  - Modify the assignment to reflect my changes

#### IMPORTS ####

# import the m5 (gem5) library created when gem5 is built
import m5
import os
import sys
from enum import Enum

# import all of the SimObjects
from m5.objects import *
from m5.util import fatal
from m5.stats.gem5stats import get_simstat

# import the caches which we made
from P550Caches import *
from P550XBar import *
from P550FUPool import *
import Spec

#### CONSTANTS ####

try:
    os.environ['GEM_TESTS']
    os.environ['GEM_PATH']
    os.environ['GEM_CONFIGS']
except e:
    fatal("This script requires the GEM_TESTS, GEM_PATH and GEM_CONFIGS environment variables")

# Add the common scripts to our path
# m5.util.addToPath(os.environ['GEM_CONFIGS'])
sys.path.append(os.environ['GEM_CONFIGS'])

# import the SimpleOpts module
from common import SimpleOpts
from common import Options
from common import ObjectList

# Default to running 'hello', use the compiled ISA to find the binary
# grab the specific path to the binary
thispath = os.path.dirname(os.path.realpath(__file__))
default_binary = os.path.join(
    os.environ['GEM_TESTS'],
    "test-progs/hello/bin/riscv/linux/hello",
)

#### CLI OPTIONS ####
# Note: The SimpleOpts class is just a wrapper around argparse,
#        so we can use all argument options as we would there

# Binary to execute
SimpleOpts.add_option("--binary", nargs="?", default=default_binary)

# Arguments to the binary
SimpleOpts.add_option("--input", default="", help="Use this if you need a file")
SimpleOpts.add_option("--args" , default="", help="Use this for simple args")
SimpleOpts.add_option("--spec" , default=None, help="Use this if you want to run a spec benchmark. NOTE: this will override input and args")

# Number of CPU's
SimpleOpts.add_option("--nprocs", default=1, type=int)

# Branch Predictor
SimpleOpts.add_option("--branch_predictor", default=None)

# Number of instructions for which to run
# NOTE: this can also be added with the Options function
# Options.addCommonOptions(SimpleOpts.parser)
SimpleOpts.add_option("-I", "--maxinsts",
                      action="store", type=int,
                      default=None,
                      help="Total number of instructions to simulate")

# Finalize the arguments and grab the args so we can pass it on to our objects
args = SimpleOpts.parse_args()

# Some constraints from the data sheet
if int(args.nprocs) > 8:
    fatal("The SiFiveP550 processor only supports up to 8 cores")

#### THE SYSTEM ####
# "abandon all hope, ye who enter here"
#   - Ayrton Chilibeck, died of an anurysm c. 2024

# create the system we are going to simulate
system = System()

# Set the clock frequency of the system (and all of its children)
system.clk_domain = SrcClockDomain()
system.clk_domain.clock = "2GHz"
system.clk_domain.voltage_domain = VoltageDomain()

# Set up the system
system.mem_mode = "timing"  # Use timing accesses
system.mem_ranges = [AddrRange("8192MB")]  # Create an address range

# Create a multicore CPU
system.cpu = [RiscvO3CPU() for i in range((int(args.nprocs)))]

# Create a memory bus to a private L2 cache for each core
system.l2bus = [L2XBar() for i in range((int(args.nprocs)))]

# Create an L2 cache for each processor
system.l2cache = [L2Cache(args) for i in range((int(args.nprocs)))]

# NOTE optionally we could create an l3 cache as well
system.l3bus = L3XBar()

# and the corresponding cache
system.l3cache = L3Cache(args)

# Create a memory bus
# Note that this is the system membus to the unified DRAM
system.membus = SystemXBar()

for i in range(int(args.nprocs)):
    # Create an L1 instruction and data cache
    system.cpu[i].icache = L1ICache(args)
    system.cpu[i].dcache = L1DCache(args)

    # Connect the instruction and data caches to the cpu[i]
    system.cpu[i].icache.connectCPU(system.cpu[i])
    system.cpu[i].dcache.connectCPU(system.cpu[i])

    # create the interrupt controller for the cpu[i]
    system.cpu[i].createInterruptController()

    # Hook the cpu[i] ports up to the l2bus
    system.cpu[i].icache.connectBus(system.l2bus[i])
    system.cpu[i].dcache.connectBus(system.l2bus[i])

    system.l2cache[i].connectCPUSideBus(system.l2bus[i])

    # Connect the L2 cache to the l3 cache
    system.l2cache[i].connectMemSideBus(system.l3bus)

    # Add all the functional units
    system.cpu[i].fuPool = FuPool


    if args.branch_predictor:
        print(ObjectList.bp_list)
        bpClass = ObjectList.bp_list.get(args.branch_predictor)
        system.cpu[i].branchPred = bpClass()

# Connect the L3 cache to the system membus
system.l3cache.connectCPUSideBus(system.l3bus)
system.l3cache.connectMemSideBus(system.membus)

# Connect the system up to the membus
system.system_port = system.membus.cpu_side_ports

# Create a DDR3 memory controller, cause why not
system.mem_ctrl = MemCtrl()
system.mem_ctrl.dram = DDR3_1600_8x8()
system.mem_ctrl.dram.range = system.mem_ranges[0]
system.mem_ctrl.port = system.membus.mem_side_ports

system.workload = SEWorkload.init_compatible(args.binary)

# Create a process for a simple "Hello World" application
process = Process()
# Set the command
# cmd is a list which begins with the executable (like argv)
if args.input == "":
    process.cmd = [os.path.join(os.getcwd(), args.binary), args.args]
else:
    process.cmd = [os.path.join(os.getcwd(), args.binary), os.path.join(os.getcwd(), args.input), args.args]

if args.spec:
    process = Spec.get_spec(args.spec)

# Set the cpu to use the process as its workload and create thread contexts
# Add the common scripts to our path
m5.util.addToPath(os.environ['GEM_CONFIGS'])
for i in range(int(args.nprocs)):
    system.cpu[i].workload = process
    system.cpu[i].createThreads()

# set up the root SimObject and start the simulation
root = Root(full_system=False, system=system)

# Use our maxinsts to limit the execution time of the process
if args.maxinsts:
    for i in range(args.nprocs):
        system.cpu[i].max_insts_any_thread = args.maxinsts
else:
    # Run the entire program
    pass

# instantiate all of the objects we've created above
m5.instantiate()

print(f"Beginning simulation! Executing {args.maxinsts} instructions for {process.cmd}...")
exit_event = m5.simulate()
print(f"Exiting @ tick {m5.curTick()} because {exit_event.getCause()}")
# if you want to use the python stats API
# simstats = get_simstat(system)
#
# print(simstats.cpu[0].numCycles)
