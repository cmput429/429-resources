# Copyright (c) 1990-2010, Ayrton Chilibeck.
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without modification,
# are permitted provided that the following conditions are met:
#
# Redistributions in binary form must reproduce the above copyright notice,
# this list of conditions and the following disclaimer in the documentation and/or
# other materials provided with the distribution.
#
# Neither the name of the Ayrton Chilibeck nor the names of its contributors may be
# used to endorse or promote products derived from this software without specific
# prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
# GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
# OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#

# Invoke using `gem5 -m gem5.utils.multisim P550System.py`
from gem5.components.boards.simple_board import SimpleBoard
from gem5.components.memory import SingleChannelDDR3_1600
from gem5.components.processors.cpu_types import CPUTypes
from gem5.components.processors.simple_processor import SimpleProcessor
from gem5.isas import ISA
from gem5.resources.resource import obtain_resource,BinaryResource
from gem5.resources.downloader import list_resources
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

# We use the P550 processor with one core.
#  see the P550Processor.py file
#  TODO Create your processor and add it to this list
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

    # Set the board workload to our workload
    board.set_workload(obtain_resource("riscv-spec-mcf-run-se"))

    # Set up the simulator
    multisim.add_simulator(
        Simulator(
            board=board,
            id=f"process_{processor.__str__()}"
        )
    )

