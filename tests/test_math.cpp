#include <gtest/gtest.h>
#include "math.hpp"

TEST(MathTests, Add) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-1, 1), 0);
}

TEST(MathTests, Sub) {
    EXPECT_EQ(sub(5, 2), 3);
    EXPECT_EQ(sub(2, 5), -3);
}
