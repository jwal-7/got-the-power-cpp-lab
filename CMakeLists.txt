cmake_minimum_required(VERSION 3.24)

project(ive-got-the-power)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(power_calc_test_naive tests/power_calc_test_naive.cpp src/power_calc.cpp)
add_executable(power_calc_test_optimized tests/power_calc_test_optimized.cpp src/power_calc.cpp)
add_executable(power_calc_test_unoptimized tests/power_calc_test_unoptimized.cpp src/power_calc.cpp)
add_executable(main main.cpp src/power_calc.cpp)

target_link_libraries(power_calc_test_naive PRIVATE Catch2::Catch2WithMain)
target_link_libraries(power_calc_test_optimized PRIVATE Catch2::Catch2WithMain)
target_link_libraries(power_calc_test_unoptimized PRIVATE Catch2::Catch2WithMain)
