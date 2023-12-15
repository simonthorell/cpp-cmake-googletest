# Project Template
## Mac, C++20, CMake & GoogleTest
This is a quick template how to start a new project using C++20 with CMake and GoogleTest  
unit testing Framework. The below instruction is only tested on Apple Silicon Mac (M1/M2)  
but process would be similar on other operating systems. 

## Install CMake on Mac
*** Install CMake using homebrew ***
brew install cmake
*** Check Version ***
cmake --version

## Clone this repo & enter the project folder in your IDE
git clone https://github.com/simonthorell/cpp-cmake-googletest.git
cd cpp-cmake-googletest

## Create and enter the 'build' directory:
mkdir build && cd build

## Generate build system and fetch Google Tests:
cmake ..

## Compile the project
cmake --build .

## Run Tests (in build folder)
*** Replace 'TestMyProject' with your test executable's name ***
./tests/TestMyProject  

## Run Executable (in build folder)
*** Replace 'MyProject' with your executable's name ***
./src/MyProject

## Notes
- **Running Specific Tests:** If you have multiple tests and want to run a specific one, you can use command-line arguments with the Google Test executable to filter tests.

- **Automated Testing with CMake:** If you set up CTest (which is integrated with CMake), you can run all tests using the ctest command in your build directory.

- **Debugging:** If your application or tests crash, you can use a debugger like gdb or lldb to debug them.