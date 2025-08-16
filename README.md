# 429 Resources
Resources necessary for Assignments 1-4 in CMPUT 429.

## Directory Structure
- gem5 - a pointer to the gem5 CPU simulation tool at version 25.0.0.1
- examples - a collection of examples and tutorial scripts
- benchmarks - binaries and configuration information for programs used in this course and run under gem5

## Getting Started

To get up and running, run `setup.sh`. After doing this, you should see the gem5 compilation begin.

Running the `setup.sh` script will set some environment variables. these environment variables will allow you to use the scripts in the `scripts/` directory.

The script will attempt to compile gem5 automatically. By default, gem5 will use the system `python-config` program, so if you want to use some newer features of gem5 you will need to use the command `PYTHON_CONFIG=$C429_RESOURCES/python3.13-config scons build/RISCV/gem5.opt` instead (which uses this repository's python-config program to link python 3.13).

A `Hello World!` program is located in the `examples` directory to help you get familiar with the gem5 simulator. There are also a collection of tutorial videos located on the [course website](https://cmput429.github.io/429-website/) that you should watch, since they contain a myriad of useful tidbits.
