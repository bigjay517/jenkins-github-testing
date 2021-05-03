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

TEST(Main, add) {
  EXPECT_EQ(4, add(2, 2));
  EXPECT_EQ(12, add(10, 2));
  EXPECT_EQ(11, add(11, 0));
}

TEST(Main, sub) {
  EXPECT_EQ(8, sub(16, 8));
  EXPECT_EQ(20, sub(30, 10));
  EXPECT_EQ(25, sub(30, 5));
}