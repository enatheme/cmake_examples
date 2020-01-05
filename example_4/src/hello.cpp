#include "hello.h"

#include <iostream>
#include <thread>

void hello()
{
    std::cout << "Thread {" << std::this_thread::get_id() << "} says " << hello_world << std::endl;
}
