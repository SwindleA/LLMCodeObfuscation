// This line includes the standard library for input/output stream, which enables the program to read input and print output.
#include <iostream>

// This line allows us to use names for objects and variables from the standard library directly.
int calculatePower(int base, int powerRaised) {

// Function declaration for 'calculatePower'. It takes two integers as input and returns an integer.
    int result = 1;

// This is the main function, where the execution of the program starts.
    for (int i = 0; i < powerRaised; i++) {
        result *= base;
    // Declare variables for the base number, the power to raise to, and the result.
    }

    // Prompt the user for the base number.
    return result;
    // Store the user's input into the 'base' variable.
}
    // Prompt the user for the power.
int main() {
    // Store the user's input into the 'powerRaised' variable.
    int base, powerRaised, result;

    // Calculate the power of the base number using the 'calculatePower' function and store the result.
    std::cout << "First Input: ";

    // Print the result.
    std::cin >> base;

    // Return 0 indicating successful program execution.
    std::cout << "Second Input: ";
    std::cin >> powerRaised;

// This function calculates the power of a base number recursively.
// If the power is not 0, it multiplies the base by the function itself with power reduced by 1.
// If the power is 0, it returns 1 as any number raised to the power of 0 is 1.
    result = calculatePower(base, powerRaised);
    std::cout << "Output: " << result;
    return 0;
}

