#include <myUtils.h>

std::string convTen2Two(unsigned int baseTenValue)
{
    std::string output;
    int r;

    if (baseTenValue == 0)
    {
        output.insert(0, "0");
    }

    while (baseTenValue > 0)
    {
        r = baseTenValue % 2;
        baseTenValue = baseTenValue / 2;
        output.insert(0, std::to_string((int)r));
    }

    return output;
}

int get_input()
{
    int input;
  
    // Prompt for Input:
    std::cout << "Enter a non-negative base 10 integer between 0 and 4294967295 (with no commas) and hit Enter/Return:" << std::endl;
    std::cin >> input;

    // Validate Input:
    if (std::cin.fail() || input < 0)
    {
        std::cout << "Invalid Input!\n";
        return -1;
    }
    
    // Return Validated Input:
    return input;
}

