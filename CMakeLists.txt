cmake_minimum_required(VERSION 3.27)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled main.c
        product.c
        patterns.c
        max_min.c
        mathtable.c
        milespergallon.c
        credit_limit.c
        better_table.c
        interest.c)
target_link_libraries(untitled m)
