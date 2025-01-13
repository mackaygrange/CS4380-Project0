#include<iostream>
#include<string>
#include <limits>
#include <cctype>

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

std::string convTen2Two(int input)
{
    std::string output;
    int r;

    while (input > 0)
    {
        r = input % 2;
        input = input / 2;
        output.insert(0, std::to_string(r));
    }

    return output;
}

int main(int argc, char* argv[])
{
    int input;

    if (argc > 1) { std::cout << "Usage: " << argv[0] << std::endl; }
    
    input = get_input();
    
    std::cout << convTen2Two(input) << std::endl;

    return 0;
}
