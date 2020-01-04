#include "hello.h"

#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"

void hello()
{
    spdlog::info(hello_world);
}
