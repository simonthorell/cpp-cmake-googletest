# C++20 Project Setup Guide
### For Apple Silicon Mac, CMake & GoogleTest

## Introduction
This guide outlines steps for setting up a new project using C++20, CMake, and the GoogleTest unit testing framework. It's tailored for Apple Silicon Macs (M1/M2), but the process is similar on other operating systems.

## Installation Instructions

### Installing CMake on Mac
- **Using Homebrew**: Run `brew install cmake` in the terminal.
- **Verifying Installation**: Check the installed version with `cmake --version`.

## Project Setup

### Cloning the Repository
1. Clone the repository: `git clone https://github.com/simonthorell/cpp-cmake-googletest.git`.
2. Navigate to the project directory: `cd cpp-cmake-googletest`.

### Building the Project
1. Create a 'build' directory: `mkdir build && cd build`.
2. Generate the build system and fetch Google Tests: `cmake ..`.
3. Compile the project: `cmake --build .`.

## Execution

### Running Tests
- In the build folder, replace 'TestMyProject' with your test executable's name and execute: `./tests/TestMyProject`.

### Running Executable
- In the build folder, replace 'MyProject' with your executable's name and run: `./src/MyProject`.

## Additional Notes
- **Running Specific Tests**: If you have multiple tests, you can use command-line arguments with the Google Test executable to filter tests.
- **Automated Testing with CMake**: Set up CTest (integrated with CMake) to run all tests using the `ctest` command in your build directory.
- **Debugging**: Use a debugger like gdb or lldb to debug application or test crashes.
