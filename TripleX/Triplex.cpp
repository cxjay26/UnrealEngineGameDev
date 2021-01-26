#include <iostream> 

int main()
{
    // Print welcome messages to the terminal
    std::cout << "You work for the CIA and need to defuse the bomb!...\n";
    std::cout << "Enter the code to defuse the bomb!...\n";

    //declaring our 3 number code
    const int CodeA = 4;
    const int CodeB = 6;
    const int CodeC = 8;

    /*
    this is
    a multi line
    comment in cpp
    */

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "- There are three numbers to the code to diffuse the bomb" <<std::endl;
    std::cout << "- The Codes add-up to: " << CodeSum << std::endl;
    std::cout << "- The Codes multiply to: " << CodeProduct << std::endl;

    int PlayerGuess;

    std::cin >> PlayerGuess;
    std::cout << "You entered: " << PlayerGuess;

    return 0;
}