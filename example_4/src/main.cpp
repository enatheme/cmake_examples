#include "hello.h"

#include <chrono>
#include <thread>

int main()
{
    auto t1 = std::thread(hello);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    auto t2 = std::thread(hello);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    auto t3 = std::thread(hello);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    t1.join();
    t2.join();
    t3.join();
}
