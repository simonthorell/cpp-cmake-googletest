# Fetch GoogleTest source code
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
  # Update URL to latest version zip: https://github.com/google/googletest/releases
)
FetchContent_MakeAvailable(googletest)

# Link against gtest or gtest_main as needed
add_executable(TestMyProject test_main.cpp) # Adjust with your test files
# target_link_libraries(TestMyProject gtest_main)
target_link_libraries(TestMyProject gtest_main MyProjectLib)

# Include the directory where header files is located
target_include_directories(TestMyProject PRIVATE ../include)

# Add your tests here
add_test(NAME test_my_project COMMAND TestMyProject)

# For more info on GoogleTest, see https://google.github.io/googletest/quickstart-cmake.html

# Create a custom target for running tests at compile time
add_custom_target(run_tests ALL
                  COMMAND echo "Running Tests"
                  COMMAND $<TARGET_FILE:TestMyProject>)

# Make sure your main project always builds before the tests
add_dependencies(MyProject run_tests)