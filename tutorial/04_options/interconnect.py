# Import the connections from m5
from m5.objects import CoherentXBar

class MyXBar(CoherentXBar):
    # The width is the number of bits we can transmit at once
    width = 256

    # Some other neat latency settings
    frontend_latency = 5
    forward_latency = 3
    response_latency = 5
    # You'll learn more about snooping with multiprocessors
    snoop_response_latency = 3

    # Is this where multiple caches combine into a shared cache?
    point_of_unification = True
