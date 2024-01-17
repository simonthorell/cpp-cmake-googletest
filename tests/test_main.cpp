#include <gtest/gtest.h>
#include "test_my_functions.cpp"
// Add more test files to include here...

TEST(SampleTest, BasicAssertions) {
  // Test code here
  EXPECT_STRNE("hello", "world");
  EXPECT_EQ(7 * 6, 42);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
