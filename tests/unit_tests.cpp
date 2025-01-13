#include <gtest/gtest.h>
#include <src/main.cpp>

#include <sstream>
#include <string>

int get_input();

void set_stdin(const std::string& input) 
{
    std::istringstream* iss = new std::istringstream(input);
    std::cin.rdbuf(iss->rdbuf());
}

TEST(main_test, get_input_test_valid)
{
    std::string result = convTenTo2(255);
    std::string expected = "11111111";
    EXPECT_EQ(result, expected) << "== Incorrect Conversion of 255 to Binary =="
}
