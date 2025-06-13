""" 
Caches with options for a simple gem5 configuration script

This file contains L1 I/D and L2 caches to be used in the simple
gem5 configuration script.

If you need additional CLI options, you should use the SimpleOpts
wrapper to set up command line options from each individual class.
"""

import m5
import os
from m5.objects import Cache
from m5.objects import CoherentXBar


from gem5.isas import ISA
from gem5.utils.override import *
from gem5.components.boards.abstract_board import *
from gem5.components.cachehierarchies.abstract_cache_hierarchy import AbstractCacheHierarchy
from gem5.components.cachehierarchies.abstract_two_level_cache_hierarchy import AbstractTwoLevelCacheHierarchy
from gem5.components.cachehierarchies.classic.abstract_classic_cache_hierarchy import AbstractClassicCacheHierarchy
from m5.objects import CoherentXBar, SystemXBar, L2XBar
from m5.objects import SnoopFilter
from m5.objects import BaseXBar

# Add the common scripts to our path
m5.util.addToPath(os.environ['GEM_CONFIGS'])

from common import SimpleOpts


# Some specific options for caches
# For all options see src/mem/cache/BaseCache.py


class L1Cache(Cache):
    """Simple L1 Cache for the P550 core"""
    tag_latency = 2
    data_latency = 2
    response_latency = 2
    mshrs = 4
    tgts_per_mshr = 20

    def __init__(self, size, assoc):
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
    def __init__(self, size, assoc):
        super().__init__(size, assoc)
    def connectCPU(self, cpu):
        """Connect this cache's port to a CPU icache port"""
        self.cpu_side = cpu.icache_port

class L1DCache(L1Cache):
    """Simple L1 data cache with default values"""
    def __init__(self, size, assoc):
        super().__init__(size, assoc)

    def connectCPU(self, cpu):
        """Connect this cache's port to a CPU dcache port"""
        self.cpu_side = cpu.dcache_port


class L2Cache(Cache):
    """Simple L2 Cache with default values"""
    tag_latency = 20
    data_latency = 20
    response_latency = 20
    mshrs = 20
    tgts_per_mshr = 12
    def __init__(self, size, assoc):
        super().__init__()
        self.size = size
        self.assoc = assoc
    def connectCPUSideBus(self, bus):
        self.cpu_side = bus.mem_side_ports
    def connectMemSideBus(self, bus):
        self.mem_side = bus.cpu_side_ports

class P550L2XBar(CoherentXBar):
    width = 32

    frontend_latency = 1
    forward_latency = 0
    response_latency = 1
    snoop_response_latency = 1

    point_of_unification = False

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
