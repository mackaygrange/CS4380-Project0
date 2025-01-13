#include <gtest/gtest.h>
#include <src/main.cpp>

#include <sstream>
#include <string>

void set_stdin(const std::string& input) 
{
    std::istringstream* iss = new std::istringstream(input);
    std::cin.rdbuf(iss->rdbuf());
}
