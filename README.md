# 429 Resources
Resources necessary for Assignments 1-4 in CMPUT 429.

## Directory Structure
- cpu2017 - inputs and compiled binaries for a collection of the SPEC CPU 2017 benchmarks
- gem5 - a pointer to the gem5 CPU simulation tool at version 23.0.0.1
- hashmark - inputs and compiled binaries for the hashmark benchmarks
- hello - a hello world program to get you familiar with gem5
- scripts - a collection of useful scripts for the course
- riscv-gnu-toolchain - a pointer to the riscv cross compiling toolchain

If you only want to download the required files, then you can clone this repo normally and then run `git submodule update $GEM_PATH` if you have the `$GEM_PATH` environment variable set.

## Getting Started
You should set the following environment variables on your system either by editing your `.bashrc` (or whatever your preferred shell file is) or by `export`ing them:
- `GEM_PATH` - this should be the `gem5` directory in this repo
- `GEM_CONFIGS='$GEM_PATH/configs`
- `GEM_SRC='$GEM_PATH/src`
- `GEM_TESTS='$GEM_PATH/tests`

Setting these environment variables will allow you to use the scripts in the `scripts/` directory in place instead of copying to the gem5 repository. Additionally this makes it easier to explain things during the tutorial videos.
