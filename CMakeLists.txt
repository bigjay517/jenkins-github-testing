# CMakeLists files in this project can
# refer to the root source directory of the project as ${JENKINS_GITHUB_TESTING_SOURCE_DIR} and
# to the root binary directory of the project as ${HELLO_BINARY_DIR}.
cmake_minimum_required (VERSION 3.14)
project (JENKINS_GITHUB_TESTING)

# Add executable called "main" that is built from the source files
add_executable (main main)

#GoogleTest features
# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/master.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)