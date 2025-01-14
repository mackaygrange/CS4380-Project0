#include <myUtils.h>

std::string convTen2Two(unsigned int baseTenValue)
{
    std::string output;
    int r;

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

    while (true) 
    {
        // Prompt for Input:
        std::cout << "Enter a non-negative base 8 integer between 0 and " << INT_MAX << ": \n(Confirm with enter or return)" << std::endl;
        std::cin >> input;

        // Validate Input:
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid Input! Please enter a valid integer.\n";
            continue;
        }

        // Qualify Input:
        if (input < 0) 
        {
            std::cout << "Invalid Input! Please enter a non-negative integer.\n";
            continue;
        }
    
        // Return Validated and Qualified Input:
        return input;
    }
}

