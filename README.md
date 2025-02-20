# 429 Resources
Resources necessary for Assignments 1-4 in CMPUT 429.

## Directory Structure
- gem5 - a pointer to the gem5 CPU simulation tool at version 23.0.0.1
- scripts - a collection of examples and tutorial scripts
- local_resources - binaries and configuration information for programs used in this course and run under gem5
- riscv-gnu-toolchain - a pointer to the riscv cross compiling toolchain

## Getting Started

To get up and running, run `git clone --recurse-submodules` and then `setup.sh`. After doing this, and then sourcing your shell (`source ~/.bashrc`), you should be able to build gem5.

Running the `setup.sh` script will set some environment variables. these environment variables will allow you to use the scripts in the `scripts/` directory.

You will then need to compile gem5. By default, gem5 will use the system `python-config` program, so if you want to use some newer features of gem5 you will need to use the command `PYTHON_CONFIG=$C429_RESOURCES/python3.13-config scons build/RISCV/gem5.opt` instead (which uses this repository's python-config program to link python 3.13).

A `Hello World!` program is located in the `scripts` directory to help you get familiar with the gem5 simulator. There are also a collection of tutorial videos located on the [course website](https://cmput429.github.io/429-website/) that you should watch, since they contain a myriad of useful tidbits.
