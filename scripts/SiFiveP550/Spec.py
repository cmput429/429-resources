def get_spec(bench: str):  # TODO add support for more of the benchmarks
    # if bench == 'perlbench':
    #     return perlbench
    if bench == 'xz':
        return xz
    elif bench == 'gcc':
        return gcc
    elif bench == 'gcc1':
        return gcc_wl1
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

#502.gcc_r with alternate workload
gcc_wl1 = Process()
gcc_wl1.executable = os.path.join(binary_dir, 'cpugcc_r_base.riscv')
input = os.path.join(data_dir, 'gcc/train01.c')
gcc_wl1.cmd = [gcc_wl1.executable] + [input] + ['-o', 'gcc_tmp.o']

#505.mcf_r
mcf = Process()
mcf.executable = os.path.join(binary_dir, 'mcf_r_base.riscv')
input = os.path.join(data_dir, 'mcf/mcf1.in')
mcf.cmd = [mcf.executable] + [input]

#557.xz_r
xz = Process()
xz.executable = os.path.join(binary_dir, 'xz_r_base.riscv')
input = os.path.join(data_dir, 'xz/code.c.xz')
