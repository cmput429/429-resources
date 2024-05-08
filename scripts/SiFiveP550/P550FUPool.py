import m5
import os

from m5.objects import *

# Add the common scripts to our path
m5.util.addToPath(os.environ['GEM_CONFIGS'])

class IntALU(FUDesc):
    opList = [ OpDesc(opClass='IntAlu') ]
    count = 1

class IntMultDiv(FUDesc):
    opList = [ OpDesc(opClass='IntMult', opLat=3),
               OpDesc(opClass='IntDiv', opLat=20) ]
    count = 1

class RdWrPort(FUDesc):
    opList = [ OpDesc(opClass='MemRead'), OpDesc(opClass='MemWrite') ]
    count = 1

FuPool = FUPool(FUList=[IntALU(), IntMultDiv(), RdWrPort()])

