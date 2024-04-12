cmake_minimum_required(VERSION 3.27)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled main.c
        product.c
        patterns.c
        mathtable.c
        milespergallon.c
        credit_limit.c
        better_table.c
        interest.c
        grade_counter.c
        max_of_three.c
        random.c
        frequency.c
        craps_dice_game.c
)
target_link_libraries(untitled m)
