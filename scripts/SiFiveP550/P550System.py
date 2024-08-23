from gem5.components.boards.simple_board import SimpleBoard
from gem5.components.memory import SingleChannelDDR3_1600
from gem5.components.processors.cpu_types import CPUTypes
from gem5.components.processors.simple_processor import SimpleProcessor
from gem5.isas import ISA
from gem5.resources.resource import obtain_resource,BinaryResource
from gem5.simulate.simulator import Simulator
from gem5.utils.requires import requires

import gem5.utils.multisim as multisim

from m5.objects import *

#####
# Needed for local imports since gem5 takes our file
#  and executes it in the context of the multisim module
import sys
import os

thispath = os.path.dirname(os.path.realpath(__file__))
sys.path.append(thispath)
######

from P550Caches import *
from P550Processor import *

# This check ensures the gem5 binary is compiled to the RISCV ISA target. If not,
# an exception will be thrown.
requires(isa_required=ISA.RISCV)

# We can run multiple simulations at once
# Be careful of running out of memory!
# NOTE: this only sets the max number
#  of processes to run at once, not
#  the maximum number of sims you can run
multisim.set_num_processes(4)

for workload in obtain_resource("riscv-polybench-suite"):
    # We use the P550 Cache system
    #  see P550Caches.py
    cache_hierarchy = P550CacheHierarchy()

    # We use a single channel DDR3_1600 memory system
    memory = SingleChannelDDR3_1600(size="8GiB")

    # We use the P550 processor with one core.
    #  see the P550Processor.py file
    processor = P550Processor(num_cores=1)

    # The gem5 library simble board which can be used to run simple SE-mode
    # simulations.
    board = SimpleBoard(
        clk_freq="3GHz",
        processor=processor,
        memory=memory,
        cache_hierarchy=cache_hierarchy,
    )

    # Set the board workload to our workload
    board.set_workload(workload)

    # Set up the simulator
    multisim.add_simulator(
        Simulator(
            board=board,
            id=f"process_{workload.get_id()}"
        )
    )

