#include <iostream>
#include <string>
#include <sstream>
#include <gtest/gtest.h>

#include "myUtils.h"

TEST(unit_tests, test_convTen2Two)
{
    std::string result = convTen2Two(255);
    std::string expected = "11111111";
    EXPECT_EQ(result, expected) << "== Incorrect Conversion of 255 to Binary ==";
}
