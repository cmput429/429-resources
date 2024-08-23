from gem5.isas import ISA
from gem5.components.processors.base_cpu_core import BaseCPUCore
from gem5.components.processors.base_cpu_processor import BaseCPUProcessor
from gem5.utils.requires import requires

from m5.objects import *

class P550Core(BaseCPUCore):
    """
    A core for the P550 processor. Consisting of:
    - 1 Integer ALU
    - 1 MulDiv ALU
    - 1 RdWrPort ALU
    """

    def __init__(
        self,
        core_id: int,
    ) -> None:
        requires(isa_required=ISA.RISCV)

        # Get the FU pool setup
        fu_pool = P550Core.init_fupool(1,1,1)

        # The basic OOO CPU
        cpu = RiscvO3CPU(
            fuPool=fu_pool,
            cpu_id=core_id
        )

        # Inheritance requirements
        super().__init__(
            core=cpu,
            isa=ISA.RISCV
        )

    @classmethod
    def init_fupool(cls, integer: int, muldiv: int, rdwr: int):
        return FUPool(FUList=[IntALU(count=integer), IntMultDiv(count=muldiv), RdWrPort(count=rdwr)])


class P550Processor(BaseCPUProcessor):
    """
    The full processor (multiple cores) for the P550 machine
    """

    def __init__(
        self,
        num_cores: int
    ) -> None:
        super().__init__(
            # Initialize as many cores as we want
            cores=[
                P550Core(core_id=i)
                for i in range(num_cores)
            ]
        )

class IntALU(FUDesc):
    # Setup the integer ALU
    opList = [ OpDesc(opClass='IntAlu') ]

    def __init__(self, count: int):
        super().__init__()
        self.count = count

class IntMultDiv(FUDesc):
    # Setup the multiply/divide ALU
    opList = [ OpDesc(opClass='IntMult', opLat=3),
               OpDesc(opClass='IntDiv', opLat=20) ]

    def __init__(self, count: int):
        super().__init__()
        self.count = count

class RdWrPort(FUDesc):
    # The read/write port handlers
    opList = [ OpDesc(opClass='MemRead'), OpDesc(opClass='MemWrite') ]

    def __init__(self, count: int):
        super().__init__()
        self.count = count
