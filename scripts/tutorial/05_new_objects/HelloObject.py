from m5.params import *

# This is where gem5 keeps the secret sauce
from m5.SimObject import SimObject


# In general we should name our new class like
#  the object that we would like to create
class HelloObject(SimObject):
    type = 'HelloObject'  # This is the C++ class we are wrapping with
                          #  the python object
    cxx_header = "./hello_object.hh"
    cxx_class = "gem5::HelloObject"
