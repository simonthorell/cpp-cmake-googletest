cmake_minimum_required(VERSION 3.28)
project(MyProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Optional - include external libraries
# include(FetchContent)

# Fetch libcurl -Uncomment below to use
# FetchContent_Declare(
#   libcurl
#   GIT_REPOSITORY https://github.com/curl/curl.git
#   GIT_TAG curl-8_5_0
# )
# FetchContent_MakeAvailable(libcurl)

# Fetch Nolhmann JSON -Uncomment below to use
# FetchContent_Declare(
#   nlohmann_json
#   GIT_REPOSITORY https://github.com/nlohmann/json.git
#   GIT_TAG v3.11.3
# )
# FetchContent_MakeAvailable(nlohmann_json)

# Add the subdirectories
add_subdirectory(src)
add_subdirectory(tests)

# Add compiler options
add_compile_options(
    -Werror    # Treat warnings as errors
    -Wall      # Enable all warnings
    -Wextra    # Enable extra warnings
    -pedantic  # Ensure standards-compliant code
    -O2        # Optimize code
)