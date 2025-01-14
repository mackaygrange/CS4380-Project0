# CMake Standards:
cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Compilation Information:
project(Project0 VERSION 1.0 LANGUAGES CXX)

# Fetch gtest for testing suite:
# include(FetchContent)
# FetchContent_Declare(
#   googletest
#   URL https://github.com/google/googletest/archive/5376967f6948923e2411081fd9372e71a59d8e77.zip
# )

# For Windows: Prevent overriding the parent project's compiler/linker settings
# set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
# FetchContent_MakeAvailable(googletest)

set(SOURCE_FILES
    src/main.cpp
    src/myUtils.cpp
)

set(TEST_FILES
    tests/unit_tests.cpp
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# add_executable(tests ${TEST_FILES})

# target_link_libraries(tests gtest_main)

# enable_testing()
# add_test(NAME unit_tests COMMAND tests)
