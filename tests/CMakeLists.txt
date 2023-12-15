# Fetch GoogleTest source code
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
  # Update URL to latest version zip: https://github.com/google/googletest/releases
)
FetchContent_MakeAvailable(googletest)

# Link against gtest or gtest_main as needed
add_executable(TestMyProject test_main.cpp)
target_link_libraries(TestMyProject gtest_main)
add_test(NAME test_my_project COMMAND TestMyProject)

# For more info on GoogleTest, see https://google.github.io/googletest/quickstart-cmake.html