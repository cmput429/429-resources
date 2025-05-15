# Copyright (c) 2015 Jason Power
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met: redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer;
# redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in the
# documentation and/or other materials provided with the distribution;
# neither the name of the copyright holders nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

""" Caches with options for a simple gem5 configuration script

This file contains crossbars for L2 and L3 to be used in the simple
gem5 configuration file.
"""

import m5
import os
from m5.objects import CoherentXBar

# Add the common scripts to our path
m5.util.addToPath(os.environ['GEM_CONFIGS'])

from common import SimpleOpts

# Some specific options for caches
# For all options see src/mem/cache/BaseCache.py

class P550L3XBar(CoherentXBar):
    # By default this is a 256 bit crossbar
    width = 64

    # We will assume some latency to get through
    #  this crossbar, since the L2 caches will be
    #  connected on-chip but globally
    frontend_latency = 5
    forward_latency = 3
    response_latency = 5
    snoop_response_latency = 3

    point_of_unification = True


class P550L2XBar(CoherentXBar):
    width = 32

    frontend_latency = 1
    forward_latency = 0
    response_latency = 1
    snoop_response_latency = 1

    point_of_unification = False
