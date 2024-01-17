#include "my_functions.h"
#include <gtest/gtest.h>
#include <sstream>

// Test for my_function()
TEST(MyFunctionTest, OutputsCorrectString) {
    std::stringstream buffer;
    std::streambuf* prevcoutbuf = std::cout.rdbuf(buffer.rdbuf());

    my_function();

    std::cout.rdbuf(prevcoutbuf); // Reset to standard output
    ASSERT_EQ("Hello from my_function!\n", buffer.str());
}

// Tests for addNumbers()
TEST(AddNumbersTest, AddsPositiveNumbers) {
    // Intentionally incorrect assertion to fail the test
    // ASSERT_EQ(10, addNumbers(2, 3));
    ASSERT_EQ(5, addNumbers(2, 3)); // Correct assertion
}

TEST(AddNumbersTest, AddsNegativeNumbers) {
    ASSERT_EQ(-5, addNumbers(-2, -3));
}

TEST(AddNumbersTest, AddsMixedNumbers) {
    ASSERT_EQ(1, addNumbers(-2, 3));
}
