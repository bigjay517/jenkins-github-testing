#include <gtest/gtest.h>
#include "math_functions.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(Main, multi) {
    EXPECT_EQ(4, multi(2, 2));
    EXPECT_EQ(100, multi(50, 2));
    EXPECT_EQ(24, multi(4, 6));
}