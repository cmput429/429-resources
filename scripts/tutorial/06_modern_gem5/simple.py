from gem5.components.boards.simple_board import SimpleBoard
from gem5.components.memory import SingleChannelDDR3_1600
from gem5.components.processors.cpu_types import CPUTypes
from gem5.components.processors.simple_processor import SimpleProcessor
from gem5.components.cachehierarchies.classic.private_l1_cache_hierarchy import PrivateL1CacheHierarchy
from gem5.isas import ISA
from gem5.resources.resource import obtain_resource,BinaryResource
from gem5.resources.downloader import list_resources
from gem5.simulate.simulator import Simulator
from gem5.utils.requires import requires

from m5.objects import *

# Ensure the gem5 binary is compiled to the RISCV ISA target
requires(isa_required=ISA.RISCV)

cache_hierarchy = PrivateL1CacheHierarchy(l1d_size="32KiB", l1i_size="32KiB")

memory = SingleChannelDDR3_1600(size="8GiB")

processor = SimpleProcessor(
    cpu_type=CPUTypes.O3,
    num_cores=1,
    isa=ISA.RISCV,
)

board = SimpleBoard(
    clk_freq="3GHz",
    processor=processor,
    memory=memory,
    cache_hierarchy=cache_hierarchy,
)

board.set_se_binary_workload(obtain_resource("riscv-hello", quiet=True))

simulator = Simulator(board=board)
simulator.run()
