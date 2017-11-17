#include "../my_app.hpp"
#include "gtest/gtest.h"

TEST(multiply, base)
{
    EXPECT_EQ(1, MyApp::multiply(1, 1));
}
