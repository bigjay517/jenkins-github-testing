# CMakeLists files in this project can
# refer to the root source directory of the project as ${JENKINS_GITHUB_TESTING_SOURCE_DIR} and
# to the root binary directory of the project as ${HELLO_BINARY_DIR}.
cmake_minimum_required (VERSION 2.8.11)
project (JENKINS_GITHUB_TESTING)

# Add executable called "main" that is built from the source files
add_executable (main main)