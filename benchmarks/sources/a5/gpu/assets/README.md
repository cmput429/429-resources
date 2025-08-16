## Overview

These are the source and binary files for for the CMPUT 429 GPU assignment.

`/thread-divergence` contains the files for the first section, Thread Divergence
`/memory-coalesing` contains the files for the second section, Memory Coalesing

The `makefile` automatically builds the binaries, although this should not be required

The makefile runs all the simulations for the assignment, it assumes that

-   `GEM_PATH`: leads to `<path>/gem5`, where your gem5 installation is located

WARNING: if using docker container, make sure you have it set up so it can point to gem5 m5ops and you have the m5ops with addr versions built

If you are using docker, you should be using a command like 

    `docker run --rm -u 1000:1000 -v $GEM_PATH$:$GEM_PATH -w $PWD ghcr.io/gem5/gpu-fs make`