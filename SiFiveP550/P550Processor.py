""" 
The Processor
"""

from gem5.isas import ISA
from gem5.components.processors.base_cpu_core import BaseCPUCore
from gem5.components.processors.base_cpu_processor import BaseCPUProcessor
from gem5.utils.requires import requires
from P550CacheHierarchy import *

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
        predictor: BranchPredictor
    ) -> None:
        requires(isa_required=ISA.RISCV)

        # Get the FU pool setup
        fu_pool = P550Core.init_fupool(1,1,1)

        # The basic OOO CPU
        cpu = RiscvO3CPU(
            fuPool=fu_pool,
            cpu_id=core_id,
            branchPred=predictor
        )

        # Inheritance requirements
        super().__init__(
            core=cpu,
            isa=ISA.RISCV
        )

    @classmethod
    def init_fupool(cls, integer: int, muldiv: int, rdwr: int):
        # See the src/o3/FuncUnitConfig.py for what these actually mean
        # if you want you can even make your own
        return FUPool(FUList=[IntALU(count=integer), IntMultDiv(count=muldiv), FP_ALU(count=2), FP_MultDiv(count=2), ReadPort(count=rdwr), WritePort(count=rdwr)])


class P550Processor(BaseCPUProcessor):
    """
    The full processor (multiple cores) for the P550 machine
    """

    def __init__(
        self,
        num_cores: int,
        predictor: BranchPredictor = LocalBP()
    ) -> None:
        super().__init__(
            # Initialize as many cores as we want
            cores=[
                P550Core(core_id=i, predictor=predictor)
                for i in range(num_cores)
            ]
        )

    def __str__(self):
        return "SiFiveP550"
