from gem5.resources.resource import obtain_resource
from gem5.simulate.simulator import Simulator
from gem5.utils.requires import requires
from m5.objects import *

from gem5.components.boards.simple_board import SimpleBoard
from gem5.components.processors.cpu_types import CPUTypes
from gem5.isas import ISA
from gem5.components.processors.simple_processor import SimpleProcessor
from gem5.components.cachehierarchies.classic.private_l1_cache_hierarchy import PrivateL1CacheHierarchy
from gem5.components.memory.single_channel import SingleChannelDDR3_1600

requires(ISA.RISCV)

# Simple processor
processor = SimpleProcessor(num_cores=1, cpu_type=CPUTypes.TIMING, isa=ISA.RISCV)
# Simple cache hierarchy
cache = PrivateL1CacheHierarchy(l1d_size="32KiB", l1i_size="32KiB")
# Simple memory module
memory = SingleChannelDDR3_1600(size="8GiB")

# Link everything together in your board
board = SimpleBoard(
    clk_freq="3GHz",
    cache_hierarchy=cache,
    processor=processor,
    memory=memory,
)

# Check out https://resources.gem5.org for more things to run
board.set_se_binary_workload(obtain_resource("riscv-hello"))

# Set up the simulation (This is where you would set up the checkpoints)
simulator = Simulator(
    board=board,
)

# Run it all
simulator.run()
