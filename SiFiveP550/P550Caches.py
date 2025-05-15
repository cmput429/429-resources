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

""" Caches with options for a simple gem5 configuration script

This file contains L1 I/D and L2 caches to be used in the simple
gem5 configuration script.

If you need additional CLI options, you should use the SimpleOpts
wrapper to set up command line options from each individual class.
"""

import m5
import os
from m5.objects import Cache

from gem5.isas import ISA
from gem5.utils.override import *
from gem5.components.boards.abstract_board import *
from gem5.components.cachehierarchies.abstract_cache_hierarchy import AbstractCacheHierarchy
from gem5.components.cachehierarchies.abstract_three_level_cache_hierarchy import AbstractThreeLevelCacheHierarchy
from gem5.components.cachehierarchies.classic.abstract_classic_cache_hierarchy import AbstractClassicCacheHierarchy
from m5.objects import CoherentXBar, SystemXBar, L2XBar
from m5.objects import SnoopFilter
from m5.objects import BaseXBar

# Add the common scripts to our path
m5.util.addToPath(os.environ['GEM_CONFIGS'])

from common import SimpleOpts

from P550XBar import *

# Some specific options for caches
# For all options see src/mem/cache/BaseCache.py


class L1Cache(Cache):
    """Simple L1 Cache for the P550 core"""

    assoc = 4
    tag_latency = 2
    data_latency = 2
    response_latency = 2
    mshrs = 4
    tgts_per_mshr = 20

    def __init__(self, size="32KiB", assoc=4):
        super().__init__()
        self.size = size
        self.assoc = assoc

    def connectBus(self, bus):
        """Connect this cache to a memory-side bus"""
        self.mem_side = bus.cpu_side_ports

    def connectCPU(self, cpu):
        """Connect this cache's port to a CPU-side port
        This must be defined in a subclass"""
        raise NotImplementedError


class L1ICache(L1Cache):
    """Simple L1 instruction cache with default values"""

    def __init__(self, size="32KiB", assoc=4):
        super().__init__(size, assoc)

    def connectCPU(self, cpu):
        """Connect this cache's port to a CPU icache port"""
        self.cpu_side = cpu.icache_port


class L1DCache(L1Cache):
    """Simple L1 data cache with default values"""

    def __init__(self, size="32KiB", assoc=4):
        super().__init__(size, assoc)

    def connectCPU(self, cpu):
        """Connect this cache's port to a CPU dcache port"""
        self.cpu_side = cpu.dcache_port


class L2Cache(Cache):
    """Simple L2 Cache with default values"""

    # Default parameters
    size = "256KiB"
    assoc = 8
    tag_latency = 20
    data_latency = 20
    response_latency = 20
    mshrs = 20
    tgts_per_mshr = 12

    SimpleOpts.add_option("--l2_size", help=f"L2 cache size. Default: {size}")

    def __init__(self, size=None, assoc=8):
        super().__init__()
        self.assoc = assoc
        self.size = size

    def connectCPUSideBus(self, bus):
        self.cpu_side = bus.mem_side_ports

    def connectMemSideBus(self, bus):
        self.mem_side = bus.cpu_side_ports


class L3Cache(Cache):
    """L3 Cache for the SiFiveP550 Processor"""

    # Default parameters
    size = "2MiB"  # can be from 1-8 MB
    assoc = 8  # this is made up
    tag_latency = 60  # all of these are made up
    data_latency = 60
    response_latency = 60
    mshrs = 60  # the number of Miss Status Holding Registers
    tgts_per_mshr = 24  # also made up

    def __init__(self, opts=None, size="2MiB", assoc=8):
        super().__init__()
        self.size = size
        self.assoc = assoc

    def connectCPUSideBus(self, bus):
        self.cpu_side = bus.mem_side_ports

    def connectMemSideBus(self, bus):
        self.mem_side = bus.cpu_side_ports


class MMUCache(Cache):
    """
    A simple Memory Management Unit (MMU) cache with default values.

    If the cache does not have a downstream cache or the downstream cache
    is mostly inclusive as usual, ``writeback_clean`` should be set to ``False``.

    from gem5/src/python/components/cachehierarchies/classic/caches
    """

    def __init__(
        self,
        size: str,
        assoc: int = 4,
        tag_latency: int = 1,
        data_latency: int = 1,
        response_latency: int = 1,
        mshrs: int = 20,
        tgts_per_mshr: int = 12,
        writeback_clean: bool = True,
    ):
        super().__init__()
        self.size = size
        self.assoc = assoc
        self.tag_latency = tag_latency
        self.data_latency = data_latency
        self.response_latency = response_latency
        self.mshrs = mshrs
        self.tgts_per_mshr = tgts_per_mshr
        self.writeback_clean = writeback_clean


class P550CacheHierarchy(
    AbstractClassicCacheHierarchy, AbstractThreeLevelCacheHierarchy
):
    """
    Cache hierarchy for the SiFiveP550 processor.

    3-level cache hierarchy:
    - L1 I/D cache
    - Private L2
    - Shared L3

    Also incorporates an MMU cache, although details around the actual
    MMU used in the P550 are scarce, it is a Sv39 unit.

    Templated from gem5/src/python/gem5/components/cachehierarchies/clasic/
    private_l1_shared_l2_cache_hierarchy.py
    """

    def __init__(
        self,
        system_bus: Optional[BaseXBar] = None,
        l1i_size: str = "32KiB",
        l1d_size: str = "32KiB",
        l2_size: str = "128KiB",
        l3_size: str = "2MiB",
        l1i_assoc: int = 4,
        l1d_assoc: int = 4,
        l2_assoc: int = 8,
        l3_assoc: int = 8
    ) -> None:
        """
        Instantiation of the cache hierarchy.
        """

        AbstractClassicCacheHierarchy.__init__(self=self)
        AbstractThreeLevelCacheHierarchy.__init__(
            self=self,
            l1i_size=l1i_size,
            l1i_assoc=l1i_assoc,
            l1d_size=l1d_size,
            l1d_assoc=l1d_assoc,
            l2_size=l2_size,
            l2_assoc=l2_assoc,
            l3_size=l3_size,
            l3_assoc=l3_assoc
        )

        if system_bus is None:
            self.system_bus = SystemXBar(width=64)

    @overrides(AbstractClassicCacheHierarchy)
    def get_mem_side_port(self) -> Port:
        return self.l2l3_membus.mem_side_ports

    @overrides(AbstractClassicCacheHierarchy)
    def get_cpu_side_port(self) -> Port:
        return self.l1l2_membus.cpu_side_ports

    @overrides(AbstractCacheHierarchy)
    def incorporate_cache(self, board: AbstractBoard) -> None:
        """
        Creates the self-contained cache hierarchy for use in the system.

        This function creates an instance of the L1 and L2 caches for
        each core in the processor, connecting them together with the
        L2XBar, then creates an instance of the L3 cache, connecting
        all L2 caches to the L3 through the L3XBar. Finally, it connects
        the entire cache hierarchy to the CPU by the system port
        """

        # Connect to the system
        board.connect_system_port(self.system_bus.cpu_side_ports)

        for _, port in board.get_memory().get_mem_ports():
            self.system_bus.mem_side_ports = port

        # Create the caches
        cores = board.get_processor().get_num_cores()
        self.l1icaches = [
            L1ICache(
                size=self._l1i_size,
                assoc=self._l1i_assoc
            )
            for _ in range(cores)
        ]

        self.l1dcaches = [
            L1DCache(
                size=self._l1d_size,
                assoc=self._l1d_assoc
            )
            for _ in range(cores)
        ]

        self.l2bus = [P550L2XBar() for _ in range(cores)]

        self.l2caches = [
            L2Cache(
                size=self._l2_size,
                assoc=self._l2_assoc
            )
            for _ in range(cores)
        ]

        self.l3bus = P550L3XBar()

        self.l3cache = L3Cache(size=self._l3_size, assoc=self._l3_assoc)

        # ITLB Page walk caches
        self.iptw_caches = [
            MMUCache(size="8KiB", writeback_clean=False)
            for _ in range(board.get_processor().get_num_cores())
        ]
        # DTLB Page walk caches
        self.dptw_caches = [
            MMUCache(size="8KiB", writeback_clean=False)
            for _ in range(board.get_processor().get_num_cores())
        ]

        for i, cpu in enumerate(board.get_processor().get_cores()):
            # L1 Caches
            cpu.connect_icache(self.l1icaches[i].cpu_side)
            cpu.connect_dcache(self.l1dcaches[i].cpu_side)

            self.l1icaches[i].mem_side = self.l2bus[i].cpu_side_ports
            self.l1dcaches[i].mem_side = self.l2bus[i].cpu_side_ports
            self.iptw_caches[i].mem_side = self.l2bus[i].cpu_side_ports
            self.dptw_caches[i].mem_side = self.l2bus[i].cpu_side_ports

            # MMU Caches
            cpu.connect_walker_ports(
                self.iptw_caches[i].cpu_side, self.dptw_caches[i].cpu_side
            )

            # L2 cache connection
            self.l2caches[i].cpu_side = self.l2bus[i].mem_side_ports
            self.l2caches[i].mem_side = self.l3bus.cpu_side_ports

            cpu.connect_interrupt()

        # L3 Cache connection
        self.l3cache.cpu_side = self.l3bus.mem_side_ports
        self.l3cache.mem_side = self.system_bus.cpu_side_ports
