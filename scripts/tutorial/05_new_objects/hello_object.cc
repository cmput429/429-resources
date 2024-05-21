#include "hello_object.hh"

#include <iostream>

namespace gem5 {

HelloObject::HelloObject(const HelloObjectParams &params) :
  SimObject(params)
{
  std::cout << "Hello World! From a SimObject" << std::endl;
}
}
