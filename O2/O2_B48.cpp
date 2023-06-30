#include <iostream>
using namespace std;

// This function calculates the greatest common divisor (GCD) of two numbers
int calculatePower(int, int);

int main()
{
    int base, powerRaised, result;

    // Prompt the user to input two numbers
    cout << "First Input: ";
    cin >> base;

    cout << "Second Input: ";
    cin >> powerRaised;

    // Calculate the least common multiple (LCM) of two numbers
    result = calculatePower(base, powerRaised);
    cout <<"Output: " << result;

    return 0;
}

// This function implements Euclidean algorithm for calculating GCD
int calculatePower(int base, int powerRaised)
{
    if (powerRaised != 0)
        // Subtract smaller number from the larger one
        return (base*calculatePower(base, powerRaised-1));
    else
        // If numbers are equal, their GCD is the same number
        return 1;
}
