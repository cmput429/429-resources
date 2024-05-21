def get_spec(bench: str, workload=None):  # TODO add support for more of the benchmarks
    # if bench == 'perlbench':
    #     return perlbench
    elif bench == 'xz':
        return xz
    elif bench == 'gcc':
        if workload == 1:
            return gcc_wl1
        else:
            return gcc
    # elif bench == 'bwaves':
    #     return bwaves
    # elif bench == 'gamess':
    #     return gamess
    elif bench == 'mcf':
        return mcf
    # elif bench == 'milc':
    #     return milc
    # elif bench == 'zeusmp':
    #     return zeusmp
    # elif bench == 'gromacs':
    #     return gromacs
    # elif bench == 'cactusADM':
    #     return cactusADM
    # elif bench == 'leslie3d':
    #     return leslie3d
    # elif bench == 'namd':
    #     return namd
    # elif bench == 'gobmk':
    #     return gobmk
    # elif bench == 'dealII':
    #     return dealII
    # elif bench == 'soplex':
    #     return soplex
    # elif bench == 'povray':
    #     return povray
    # elif bench == 'calculix':
    #     return calculix
    # elif bench == 'hmmer':
    #     return hmmer
    # elif bench == 'sjeng':
    #     return sjeng
    # elif bench == 'GemsFDTD':
    #     return GemsFDTD
    # elif bench == 'libquantum':
    #     return libquantum
    # elif bench == 'h264ref':
    #     return h264ref
    # elif bench == 'tonto':
    #     return tonto
    # elif bench == 'lbm':
    #     return lbm
    # elif bench == 'omnetpp':
    #     return omnetpp
    # elif bench == 'astar':
    #     return astar
    # elif bench == 'wrf':
    #     return wrf
    # elif bench == 'sphinx3':
    #     return sphinx3
    # elif bench == 'xalancbmk':
    #     return xalancbmk
    # elif bench == 'specrand_i':
    #     return specrand_i
    # elif bench == 'specrand_f':
    #     return specrand_f
    else:
        return None

from m5.objects import Process
import os

base_dir = os.path.join(os.environ['GEM_PATH'],"../cpu2017/")
binary_dir = os.path.join(base_dir, "executables/")
data_dir = os.path.join(base_dir, "inputs/")

#502.gcc_r
gcc = Process()
gcc.executable = os.path.join(binary_dir, 'cpugcc_r_base.riscv')
input = os.path.join(data_dir, 'gcc/lbm.c')
gcc.cmd = [gcc.executable] + [input] + ['-o', 'gcc_tmp.o']

#505.mcf_r
mcf = Process()
mcf.executable = os.path.join(binary_dir, 'mcf_r_base.riscv')
input = os.path.join(data_dir, 'mcf/mcf1.in')
mcf.cmd = [mcf.executable] + [input]

#401.bzip2
bzip2 = Process()
bzip2.executable =  binary_dir+'bzip22006.arm'
data=data_dir+'bzip2/test/input/dryer.jpg'
bzip2.cmd = [bzip2.executable] + [data, '2']
bzip2.output = 'dryer.out'

#473.astar
astar=Process()
astar.executable =  binary_dir+'astar2006.arm'
data=data_dir+'astar/test/input/lake.cfg'
astar.cmd = [astar.executable]+[data]
astar.output = 'lake.out'


