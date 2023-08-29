# Simple configuration script

import m5
from m5.objects import *
import os, optparse, sys
from m5.util import addToPath

addToPath('../')
#addToPath('../common')
#addToPath('../topologies')

from common import Simulation
from common import Options
from Caches import *
from cpu2000 import *
from m5.objects.BranchPredictor import *
import Mybench
# Get paths we might need.  It's expected this file is in m5/configs/example.
config_path = os.path.dirname(os.path.abspath(__file__))
config_root = os.path.dirname(config_path)+"/common"
m5_root = os.path.dirname(config_root)

parser = optparse.OptionParser()
Options.addCommonOptions(parser)

# Benchmark options

parser.add_option("-b", "--benchmark", default="",
                 help="The benchmark to be loaded.")

(options, args) = parser.parse_args()

if args:
    print("Error: script doesn't take any positional arguments")
    sys.exit(1)

if options.benchmark == 'perlbench':
   process = Mybench.perlbench
elif options.benchmark == 'bzip2':
   process = Mybench.bzip2
elif options.benchmark == 'gcc':
   process = Mybench.gcc
elif options.benchmark == 'bwaves':
   process = Mybench.bwaves
elif options.benchmark == 'gamess':
   process = Mybench.gamess
elif options.benchmark == 'mcf':
   process = Mybench.mcf
elif options.benchmark == 'milc':
   process = Mybench.milc
elif options.benchmark == 'zeusmp':
   process = Mybench.zeusmp
elif options.benchmark == 'gromacs':
   process = Mybench.gromacs
elif options.benchmark == 'cactusADM':
   process = Mybench.cactusADM
elif options.benchmark == 'leslie3d':
   process = Mybench.leslie3d
elif options.benchmark == 'namd':
   process = Mybench.namd
elif options.benchmark == 'gobmk':
   process = Mybench.gobmk;
elif options.benchmark == 'dealII':
   process = Mybench.dealII
elif options.benchmark == 'soplex':
   process = Mybench.soplex
elif options.benchmark == 'povray':
   process = Mybench.povray
elif options.benchmark == 'calculix':
   process = Mybench.calculix
elif options.benchmark == 'hmmer':
   process = Mybench.hmmer
elif options.benchmark == 'sjeng':
   process = Mybench.sjeng
elif options.benchmark == 'GemsFDTD':
   process = Mybench.GemsFDTD
elif options.benchmark == 'libquantum':
   process = Mybench.libquantum
elif options.benchmark == 'h264ref':
   process = Mybench.h264ref
elif options.benchmark == 'tonto':
   process = Mybench.tonto
elif options.benchmark == 'lbm':
   process = Mybench.lbm
elif options.benchmark == 'omnetpp':
   process = Mybench.omnetpp
elif options.benchmark == 'astar':
   process = Mybench.astar
elif options.benchmark == 'wrf':
   process = Mybench.wrf
elif options.benchmark == 'sphinx3':
   process = Mybench.sphinx3
elif options.benchmark == 'xalancbmk':
   process = Mybench.xalancbmk
elif options.benchmark == 'specrand_i':
   process = Mybench.specrand_i
elif options.benchmark == 'specrand_f':
   process = Mybench.specrand_f

options.cpu_type = "DerivO3CPU"
options.cpu_clock = "1GHz"

options.caches = 1
options.cacheline_size = 64

options.l1i_size = "32kB"
options.l1i_assoc = 4

options.l1d_size = "32kB"
options.l1d_assoc = 4

options.l2cache = 1
options.l2_size = "256kB"
options.l2_assoc = 4

options.bp_type = GlobalBP()

numThreads = 1

(CPUClass, test_mem_mode, FutureClass) = Simulation.setCPUClass(options)

CPUClass.numThreads = numThreads

#np = options.num_cpus 
np = 1

system = System(cpu = [CPUClass(cpu_id=i) for i in range(np)],
                physmem = SimpleMemory(range=AddrRange("512MB")),
                membus = SystemXBar(), mem_mode = 'timing')

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


system.system_port = system.membus.cpu_side_ports
system.physmem.port = system.membus.mem_side_ports

for i in range(np):   
    if options.caches:
        system.cpu[i].addPrivateSplitL1Caches(L1Cache(size = '64kB'),
                                              L1Cache(size = '64kB'))
    if options.l2cache:
        system.l2 = L2Cache(size='2MB')
        system.tol2bus = SystemXBar()
        system.l2.cpu_side = system.tol2bus.mem_side_ports
        system.l2.mem_side = system.membus.cpu_side_ports
        system.cpu[i].connectAllPorts(system.tol2bus, system.membus)
    else:
        system.cpu[i].connectAllPorts(system.membus)
    system.cpu[i].workload = process[i]
    system.cpu[i].createInterruptController()
    system.cpu[i].createThreads()

root = Root(full_system = False, system = system)

Simulation.run(options, root, system, FutureClass)
