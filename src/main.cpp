#include "myUtils.h"

int main(int argc, char* argv[])
{
    int input;

    if (argc > 1) { std::cout << "Usage: " << argv[0] << std::endl; }
    
    input = get_input();
    if (input == -1) { return 1; }

    std::cout << convTen2Two(input) << std::endl;

    return 0;
}
