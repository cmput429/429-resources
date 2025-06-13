""" 
Caches with options for a simple gem5 configuration script

This file constructs a CacheHeirarchy from the caches in P550Caches.py.
"""

import m5
import os

m5.util.addToPath(os.environ['GEM_CONFIGS'])

from common import SimpleOpts

from gem5.components.boards.abstract_board import *
from gem5.components.cachehierarchies.abstract_cache_hierarchy import AbstractCacheHierarchy
from gem5.components.cachehierarchies.abstract_two_level_cache_hierarchy import AbstractTwoLevelCacheHierarchy
from gem5.components.cachehierarchies.classic.abstract_classic_cache_hierarchy import AbstractClassicCacheHierarchy

from P550Caches import *

class P550CacheHierarchy(
    AbstractClassicCacheHierarchy, AbstractTwoLevelCacheHierarchy
):
    """
    Cache hierarchy for the SiFiveP550 processor.

    2-level cache hierarchy:
    - L1 I/D cache
    - Private L2

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
        l2_size: str = "256KiB",
        l1i_assoc: int = 4,
        l1d_assoc: int = 4,
        l2_assoc: int = 8,
    ) -> None:
        """
        Instantiation of the cache hierarchy.
        """

        AbstractClassicCacheHierarchy.__init__(self=self)
        AbstractTwoLevelCacheHierarchy.__init__(
            self=self,
            l1i_size=l1i_size,
            l1i_assoc=l1i_assoc,
            l1d_size=l1d_size,
            l1d_assoc=l1d_assoc,
            l2_size=l2_size,
            l2_assoc=l2_assoc,
        )

        if system_bus is None:
            self.system_bus = SystemXBar(width=64)

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
            self.l2caches[i].mem_side = self.system_bus.cpu_side_ports

            cpu.connect_interrupt()

