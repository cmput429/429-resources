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

A `Hello World!` program is located in the `scripts` directory to help you get familiar with the gem5 simulator. There are also a collection of tutorial videos located on the [course website](https://cmput429.github.io/429-website/) that you should watch, since they contain a myriad of useful tidbits.
