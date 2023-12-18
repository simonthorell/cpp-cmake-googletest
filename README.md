# C++20 Project Setup Guide
### For Apple Silicon Mac using C++20, CMake & GoogleTest

## Introduction
This guide outlines steps for setting up a new project using C++20, CMake, and the GoogleTest unit  
testing framework. This repo is tailored and tested for Apple Silicon Macs, but the process is  
similar on other operating systems.  

## Prerequisites
Before you begin, ensure you have the following installed on your Mac:
- **CMake**
- **Git**
- **Xcode Command Line Tools** *(includes Make, Clang C/C++ compiler & LLDB debugger)*
- [Optional] **GCC Compiler** *(preferred for embedded development such as AVR)*
- [Optional] **Visual Studio Code** & **CMake Tools** VSCode extension

### Installing Prerequisites on Mac
- **CMake**:
  - Install using Homebrew: `brew install cmake`
  - Verify installation: `cmake --version`
- **Git**:
  - Install using Homebrew: `brew install git`
  - Verify installation: `git --version`
- **Xcode Command Line Tools**:
  - Install using: `xcode-select --install`
  - Verify installation: `code --version`
- **GCC Compiler (Optional)**:
  - Install using Homebrew: `brew install gcc`
  - Verify installation: `gcc --version`  
  *Note: Clang is the default compiler on macOS. To use GCC, specify it in your CMake*  
  *configuration or use environment variables.*  
- **Visual Studio Code (Optional)**:
  - Download and install from [Visual Studio Code website](https://code.visualstudio.com/)

## Project Setup

### Cloning the Repository
1. Clone the repository: `git clone https://github.com/simonthorell/cpp-cmake-googletest.git`.
2. Navigate to the project directory: `cd cpp-cmake-googletest`.

### CMake Tools
1. Make sure **CMake Tools** VSCode extension is installed.
2. Press **F1** and type and select 'CMake: Configure' *(if not done automatically)*

### Building the Project *(may not be needed if using CMake Tools)*
1. Create a 'build' directory: `mkdir build && cd build`.  
2. Generate the build system and fetch Google Tests: `cmake ..`.  
3. Compile the project: `cmake --build .`.  

## Compilation & Execution

### Compile using 'CMake: Build'
- Press **F5** to compile and debug with LLDB in debug console  
- Press **Shift + F5** to compile and run binary in terminal *(Running task* **Run MyProject***)*
- Press **Ctrl + F5** to compile and run without debugging
- Press **F7** to compile only

### Running Tests [optional]
- In the build folder, replace 'TestMyProject' with your test executable's name and  
execute: `./tests/TestMyProject`.  
*Note: Tests are running automatically during compilation in current setup*

### Running Executable [optional]
- In the build folder, replace 'MyProject' with your executable's name and  
run: `./src/MyProject`.  
*Note: Use The Run MyProject task to perform this action (or press shift + F5)*

## Additional Notes
- **Running Specific Tests**: If you have multiple tests, you can use command-line arguments  
with the Google Test executable to filter tests.
- **Automated Testing with CMake**: Set up CTest (integrated with CMake) to run all tests  
using the `ctest` command in your build directory.
- **Debugging**: Use a debugger like gdb or lldb to debug application or test crashes.
