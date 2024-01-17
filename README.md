# C++20 Project Setup Template
### For Apple Silicon Mac using C++20, CMake & GoogleTest with VSCode

## Introduction
This guide outlines steps for setting up a new project using C++20, CMake, and the GoogleTest unit  
testing framework. This repo is tailored and tested for Apple Silicon Macs, but the process is  
similar on other operating systems.  

## Prerequisites

### Essential Tools
- **CMake**: Build, test, and package software.
- **Git**: Version control system.
- **Xcode Command Line Tools**: Includes Make, Clang C/C++ compiler, and LLDB debugger.

### Optional Tools
(Based on specific development needs)  
- **GCC Compiler**: Preferred for embedded development (e.g., AVR).
- **Visual Studio Code**: Advanced code editor.
  - **CMake Tools Extension for Visual Studio Code**: Enhances CMake integration with VSCode.

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
1. Make sure **CMake Tools** VSCode extension is installed
2. Select a 'Kit' for CMake in the bottom menu-bar of VSCode to set compiler and toolchain  
for the project *(choose Clang or GCC)*. You can change 'kit' later by pressing this part   
of the bottom menu again. VSCode may also prompt to choose kit by showing a dropdown list.  
*Note: Once a 'kit' is selected, CMake should build the project as mentioned in next section.*  
*If it builds, skip to the 'Compilation & Execution' section*  
3. If it does not build, press **F1**, type and select 'CMake: Configure' to configure before  
moving to next section

### Building the Project [optional]
1. Create a 'build' directory: `mkdir build && cd build`  
2. Generate the build system and fetch Google Tests: `cmake ..`  
3. Compile the project: `cmake --build .`    
*Note: This may not be needed if using CMake Tools and may be automatically setup*

## Compilation & Execution

### Compile using 'CMake: Build'
- Press **F5** to compile and debug with LLDB in debug console  
- Press **Shift + F5** to compile and run binary in terminal *(Running task 'Run MyProject')*
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

### Set new Github repo
1. **Clear Template Commit History [optional]**
  ```bash
  git checkout --orphan new-start
  git add -A
  git commit -m "Initial commit from template"
  git branch -D main
  git branch -m main
  git push -f origin main
  ```
2. **Remove Template Origin & Set New Origin**
  ```bash
  git remote remove origin
  git remote add origin YOUR_REPO_URL
  ```

## Additional Notes
- **Running Specific Tests**: If you have multiple tests, you can use command-line arguments  
with the Google Test executable to filter tests.
- **Automated Testing with CMake**: Set up CTest (integrated with CMake) to run all tests  
using the `ctest` command in your build directory.
- **Debugging**: Use a debugger like gdb or lldb to debug application or test crashes.

## License
Distributed under the MIT License. See `LICENSE` for more information.