#include <iostream>
using namespace std;

int main() {
    // Variables for storing two integer inputs
    double num1, num2, product;
    
    // Request user input for the number of elements in the Fibonacci sequence
    cout << "Input: ";

    // Read the inputs
    cin >> num1 >> num2;

    // Calculate the nth Fibonacci number where n is the sum of the two inputs
    product = num1 * num2;

    // Print the Fibonacci number
    cout << "Output: " << product;

    return 0;
}
