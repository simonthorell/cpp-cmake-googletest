file(GLOB_RECURSE SOURCE_FILES "*.cpp")

add_executable(MyProject ${SOURCE_FILES})
target_include_directories(MyProject PUBLIC "../include")