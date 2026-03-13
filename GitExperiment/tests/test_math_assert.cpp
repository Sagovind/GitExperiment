#include "math.hpp"
#include <gtest/gtest.h>

TEST(MathAssertionTests, AddNonZero) {
    int result = add(2, 3);
    ASSERT_NE(result, 0);       // assertion style
    EXPECT_EQ(result, 5);
}

TEST(MathAssertionTests, DivideThrowsOnZero) {
    ASSERT_THROW(divide(10, 0), std::invalid_argument);
}