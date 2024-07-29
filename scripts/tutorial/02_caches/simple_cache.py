# This tutorial is based heavily on the
# [learning gem5 tutorial](https://www.gem5.org/documentation/learning_gem5/part1/cache_config/)
#### IMPORTS ####
# import the m5 (gem5) library created when gem5 is built
import m5
import os
import sys

# import all of the SimObjects
from m5.objects import *
from m5.util import fatal

from caches import *

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

# Default to running 'hello', use the compiled ISA to find the binary
# grab the specific path to the binary
thispath = os.path.dirname(os.path.realpath(__file__))
default_binary = os.path.join(
    os.environ['GEM_TESTS'],
    "test-progs/hello/bin/riscv/linux/hello",
)

# Creaing a simple system
system = System()  # YAAAAAAAAAAAY

# We can now reference the system and change some parameters
system.clk_domain = SrcClockDomain()
system.clk_domain.clock = '1GHz'
system.clk_domain.voltage_domain = VoltageDomain()

# now we set the memory
system.mem_mode = 'timing'
system.mem_ranges = [AddrRange('512MB')]

# The type of CPU
system.cpu = RiscvTimingSimpleCPU()

# NOTE: add the caches
system.cpu.icache = L1ICache()
system.cpu.dcache = L1DCache()

system.cpu.icache.connectCPU(system.cpu)
system.cpu.dcache.connectCPU(system.cpu)

# NOTE: we remove these
# # Cache ports!
# system.cpu.icache_port = system.membus.cpu_side_ports
# system.cpu.dcache_port = system.membus.cpu_side_ports

system.l2bus = L2XBar()  # note that this is built in, but you
                         #  can try to make your own too!

# Connect all of the caches to the l2
system.cpu.icache.connectBus(system.l2bus)
system.cpu.dcache.connectBus(system.l2bus)

# Make the L2
system.l2cache = L2Cache()
system.l2cache.connectCPUSideBus(system.l2bus)

# The system bus to main memory
system.membus = SystemXBar()

# Connect the L2 to the system bus
system.l2cache.connectMemSideBus(system.membus)

# Setup an interrupt controller
system.cpu.createInterruptController()
system.system_port = system.membus.cpu_side_ports
# NOTE: RISCV does not require the PIO setup they have in the tutorial

# MEMORYYYYY
system.mem_ctrl = MemCtrl()
system.mem_ctrl.dram = DDR3_1600_8x8()
system.mem_ctrl.dram.range = system.mem_ranges[0]
system.mem_ctrl.port = system.membus.mem_side_ports

# Set up our binary
binary = default_binary

# for gem5 V21 and beyond
system.workload = SEWorkload.init_compatible(binary)

process = Process()
process.cmd = [binary]
system.cpu.workload = process
system.cpu.createThreads()

# Instantiate the system with gem5
root = Root(full_system = False, system = system)
m5.instantiate()

print("Beginning simulation!")
exit_event = m5.simulate()

# And once simulation finishes, we can inspect the state of the system.
print('Exiting @ tick {} because {}'
      .format(m5.curTick(), exit_event.getCause()))

