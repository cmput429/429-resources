def get_spec(bench: str):  # TODO add support for more of the benchmarks
    # if bench == 'perlbench':
    #     return perlbench
    if bench == 'xz':
        return xz
    elif bench == 'gcc':
        return gcc
    elif bench == 'gcc1':
        return gcc1
    elif bench == 'abench':
        return abench
    elif bench == 'abench1':
        return abench1
    # elif bench == 'bwaves':
    #     return bwaves
    # elif bench == 'gamess':
    #     return gamess
    elif bench == 'mcf':
        return mcf
    elif bench == 'mcf1':
        return mcf1
    elif bench == 'mcf2':
        return mcf2
    elif bench == 'x264_v':
        return x264_v
    elif bench == 'x264_s':
        return x264_s
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
    elif bench == 'lbm':
        return lbm
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

gcc1 = Process()
gcc1.executable = gcc.executable
input = os.path.join(data_dir, 'gcc/mcf.c')
gcc1.cmd = [gcc.executable] + [input] + ['-o', 'gcc_tmp.o']

#505.mcf_r
mcf = Process()
mcf.executable = os.path.join(binary_dir, 'mcf_r_base.riscv')
input = os.path.join(data_dir, 'mcf/mcf1.in')
mcf.cmd = [mcf.executable] + [input]

mcf1 = Process()
mcf1.executable = os.path.join(binary_dir, 'mcf_r_base.riscv')
input = os.path.join(data_dir, 'mcf/mcf2.in')
mcf1.cmd = [mcf.executable] + [input]

mcf2 = Process()
mcf2.executable = os.path.join(binary_dir, 'mcf_r_base.riscv')
input = os.path.join(data_dir, 'mcf/mcf3.in')
mcf2.cmd = [mcf.executable] + [input]

#401.bzip2
bzip2 = Process()
bzip2.executable =  binary_dir+'bzip22006.arm'
data=data_dir+'bzip2/test/input/dryer.jpg'
bzip2.cmd = [bzip2.executable] + [data, '2']
bzip2.output = 'dryer.out'

#519.lbm_r
lbm = Process()
lbm.executable = os.path.join(binary_dir, 'lbm_r_base.riscv')
file = os.path.join(data_dir, 'lbm/lbm.orb')
lbm.cmd = [lbm.executable] + ['500', 'reference.dat', '0', '0', file]

# abench (my synthetic one)
abench = Process()
abench.executable = os.path.join(binary_dir, 'abench.riscv')
input = os.path.join(data_dir, 'abench1.in')
abench.cmd = [abench.executable] + [input]

abench1 = Process()
abench1.executable = os.path.join(binary_dir, 'abench.riscv')
input = os.path.join(data_dir, 'abench2.in')
abench1.cmd = [abench1.executable] + [input]

#525.x264_s
x264_s = Process()
x264_s.executable = os.path.join(binary_dir, 'x264_r.s.riscv')
input = os.path.join(data_dir, 'x264/BuckBunny.264')
x264_s.cmd = [x264_s.executable, '-p 1', '-B 1000',
                    '-o bb.mkv', input, '854x480']
#'-o bb.mkv', input, '854x480']

x264_v = Process()
x264_v.executable = os.path.join(binary_dir, 'x264_r.v.riscv')
x264_v.cmd = [x264_v.executable] + ['-p 1', '-B 1000',
                                    '-o bb.mkv', input, '854x480']
