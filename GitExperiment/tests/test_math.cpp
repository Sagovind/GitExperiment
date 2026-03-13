#include "math.hpp"
#include <gtest/gtest.h>

TEST(MathTests, AddWorks) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-1, 1), 0);
}

TEST(MathTests, SubWorks) {
    EXPECT_EQ(sub(5, 2), 3);
}

TEST(MathTests, MulWorks) {
    EXPECT_EQ(mul(3, 4), 12);
}

TEST(MathTests, DivideWorks) {
    EXPECT_EQ(divide(10, 2), 5);
    EXPECT_THROW(divide(5, 0), std::invalid_argument);
}

TEST(MathTests, SafeDivideWorks) {
    EXPECT_DOUBLE_EQ(safe_divide(5, 2), 2.5);
    EXPECT_DOUBLE_EQ(safe_divide(5, 0), 0.0);
}
