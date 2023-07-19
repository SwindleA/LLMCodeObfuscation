// This line includes a standard library that contains most of the standard C++ libraries. 
// It's a convenience header file primarily used in competitive programming but is generally not recommended for use in production software.
#include <iostream>

// This line allows us to use names for objects and variables from the standard library directly.
#include <cmath>

// This is the main function, where the execution of the program starts.
double calculateCompoundInterest(double principal, double rate, double time) {

        // Declare and initialize variables for principal amount, rate of interest and time period for compound interest calculation.
    return principal * (std::pow(1 + rate / 100, time)) - principal;
}

        // Calculate the total amount after interest has been compounded.
        // The formula for compound interest is A = P(1 + r/n)^(nt), 
        // where P is the principal amount, r is the annual interest rate, 
        // n is the number of times that interest is compounded per year, and t is the time the money is invested for in years. 
        // In this case, we assume that interest is compounded once per year (n=1).
int main() {
    double principal = 10000, rate = 5, time = 2;
        // Calculate compound interest by subtracting the original principal from the total amount.
    double compoundInterest = calculateCompoundInterest(principal, rate, time);

        // Print the compound interest.
    std::cout << "Output: " << compoundInterest << std::endl;

        // Return 0 indicating successful program execution.
        return 0;
}
