#include "../my_app.cpp"
#include "gtest/gtest.h"

TEST(multiply, base)
{
    EXPECT_EQ(1, MyApp::multiply(1, 1));
}

TEST(add, base)
{
    EXPECT_EQ(2, add(1, 1));
}
