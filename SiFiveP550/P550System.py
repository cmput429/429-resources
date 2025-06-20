# Invoke using `gem5 -m gem5.utils.multisim P550System.py`
from gem5.components.boards.simple_board import SimpleBoard
from gem5.components.memory import SingleChannelDDR3_1600
from gem5.components.processors.cpu_types import CPUTypes
from gem5.components.processors.simple_processor import SimpleProcessor
from gem5.isas import ISA
from gem5.resources.resource import obtain_resource,BinaryResource
from gem5.resources.downloader import list_resources
from gem5.simulate.exit_event import ExitEvent
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

from P550CacheHierarchy import *
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

def terminate_print():
    return True

# We use the P550 processor with one core.
#  see the P550Processor.py file
processor_list = [P550Processor(num_cores=1)]#, YourProcessorHere(num_cores=1)]

for processor in processor_list:
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
    board.set_workload(obtain_resource("riscv-spec-mcf-run-se", clients=["resources"]))


    simulation = Simulator(
        board=board,
        on_exit_event={
            ExitEvent.MAX_INSTS : [terminate_print],
        },
        id=f"process_{processor.__str__()}"
    )
    simulation.schedule_max_insts(10**7)
    # Set the board workload to our workload
    # Set up the simulator
    multisim.add_simulator(
        simulation
    )

