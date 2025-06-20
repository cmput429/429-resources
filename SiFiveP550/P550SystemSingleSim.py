from gem5.components.boards.simple_board import SimpleBoard
from gem5.components.memory import SingleChannelDDR3_1600
from gem5.components.processors.cpu_types import CPUTypes
from gem5.components.processors.simple_processor import SimpleProcessor
from gem5.isas import ISA
from gem5.resources.resource import obtain_resource,BinaryResource
from gem5.resources.downloader import list_resources
from gem5.simulate.simulator import Simulator
from gem5.utils.requires import requires

from m5.objects import *

import sys
import os

thispath = os.path.dirname(os.path.realpath(__file__))
sys.path.append(thispath)

from P550CacheHierarchy import *
from P550Processor import *

# This check ensures the gem5 binary is compiled to the RISCV ISA target. If not,
# an exception will be thrown.
requires(isa_required=ISA.RISCV)

# We use the P550 processor with one core.
#  see the P550Processor.py file
processor = P550Processor(num_cores=1)

# We use the P550 Cache system
#  see P550Caches.py
cache_hierarchy = P550CacheHierarchy()

# We use a single channel DDR3_1600 memory system
memory = SingleChannelDDR3_1600(size="8GiB")

# The gem5 library simble board which can be used to run simple SE-mode
# simulations.
board = SimpleBoard(
    clk_freq="3GHz",
    processor=processor,
    memory=memory,
    cache_hierarchy=cache_hierarchy,
)

# Set the board workload to our workload
board.set_workload(obtain_resource("riscv-spec-mcf-run-se", clients=["resources"]))

# Set up the simulator
simulator = Simulator(
    board=board,
)

# Schedule number of instructions to run
simulator.schedule_max_insts(10**8)

# Run simulator
simulator.run()

