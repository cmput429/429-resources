# Copyright (c) 2012 ARM Limited
# All rights reserved.
#
# The license below extends only to copyright in the software and shall
# not be construed as granting a license to any other intellectual
# property including but not limited to intellectual property relating
# to a hardware implementation of the functionality of the software
# licensed hereunder.  You may use the software subject to the license
# terms below provided that you ensure that this notice is replicated
# unmodified and in its entirety in all distributions of the software,
# modified or unmodified, in source code or in binary form.
#
# Copyright (c) 2006-2008 The Regents of The University of Michigan
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
#
# Authors: Steve Reinhardt

# Simple test script
#
# "m5 test.py"

import optparse
import sys
import os

import m5
from m5.objects import *
from m5.util import addToPath, fatal

addToPath('../')

from common import Options
from common import Simulation
from common import CacheConfig
from common import ObjectList

from spec import Mybench

### Create the Options Parser
parser = optparse.OptionParser()
Options.addCommonOptions(parser)
Options.addSEOptions(parser)
### Parse for command line options
(options, args) = parser.parse_args()


### Override some options values to match the ARM Cortex A9 

options.num_cpus = 1
options.cpu_type = "DerivO3CPU"   # The A9 is an OutOfOrder CPU
options.cpu_clock = "2GHz"

options.caches = True              # Symmetric, L1 caches
options.cacheline_size = 64

options.l1i_size = "32kB"
options.l1i_assoc = 4

options.l1d_size = "32kB"
options.l1d_assoc = 4

options.l2cache = True
options.l2_size = "256kB"
options.l2_assoc = 4

### Setup the workload to execute on the CPUs
multiprocesses = []
if options.cmd:
   process = Process()
   process.executable = options.cmd
   process.cmd = [options.cmd] + options.options.split()
   multiprocesses.append(process)
else:
   print("No workload specified. Exiting!\n", file=sys.stderr)
   sys.exit(1)


### Handle file pipes, if any

if options.input != "":
    process.input = options.input
if options.output != "":
    process.output = options.output
if options.errout != "":
    process.errout = options.errout

numThreads = 1

### Using the provided options, setup the CPU and cache configuration

(CPUClass, test_mem_mode, FutureClass) = Simulation.setCPUClass(options)
CPUClass.numThreads = numThreads

np = options.num_cpus

### Assemble the system

system = System(cpu = [CPUClass(cpu_id=i) for i in range(np)],
                physmem = SimpleMemory(range=AddrRange("512MB")),
                membus = SystemXBar(),
                mem_mode = test_mem_mode,
                cache_line_size = options.cacheline_size)

if numThreads > 1:
    system.multi_thread = True

# Create a top-level voltage domain
system.voltage_domain = VoltageDomain(voltage = options.sys_voltage)

# Create a source clock for the system and set the clock period
system.clk_domain = SrcClockDomain(clock =  options.sys_clock,
                                   voltage_domain = system.voltage_domain)

# Create a CPU voltage domain
system.cpu_voltage_domain = VoltageDomain()

# Create a separate clock domain for the CPUs
system.cpu_clk_domain = SrcClockDomain(clock = options.cpu_clock,
                                       voltage_domain =
                                       system.cpu_voltage_domain)

# All cpus belong to a common cpu_clk_domain, therefore running at a common
# frequency.
for cpu in system.cpu:
    cpu.clk_domain = system.cpu_clk_domain

### Reconfigure the CPU to match the Cortex A9 specs

cpu = system.cpu[0]
cpu.decodeWidth = 2     # 2 way superscalar frontend
cpu.fetchWidth = 2
cpu.issueWidth = 2
cpu.dispatchWidth = 2

# Functional Unit definitions taken from FuncUnitConfig.py, modified to match A9

class IntALU(FUDesc):
    opList = [ OpDesc(opClass='IntAlu') ]
    count = 1

class IntMultDiv(FUDesc):
    opList = [ OpDesc(opClass='IntMult', opLat=3),
               OpDesc(opClass='IntDiv', opLat=20) ]
    count = 1

class RdWrPort(FUDesc):
    opList = [ OpDesc(opClass='MemRead'), OpDesc(opClass='MemWrite') ]
    count = 1

# Attach the Functional units
cpu.fuPool = FUPool(FUList=[IntALU(), IntMultDiv(), RdWrPort()])

### Configure the CPUs to run the requested workload
for i in range(np):
    if len(multiprocesses) == 1:
        system.cpu[i].workload = multiprocesses[0]
    else:
        system.cpu[i].workload = multiprocesses[i]

    if options.checker:
        system.cpu[i].addCheckerCpu()

    if options.bp_type:
        bpClass = ObjectList.bp_list.get(options.bp_type)
        system.cpu[i].branchPred = bpClass()

    # Fill in cpu.isa
    system.cpu[i].createThreads()

### Connect up system memory and CPU cache

system.system_port = system.membus.cpu_side_ports
system.physmem.port = system.membus.mem_side_ports
CacheConfig.config_cache(options, system)

### Create the root, instantiate the system, and run the simulation

root = Root(full_system = False, system = system)
Simulation.run(options, root, system, FutureClass)
