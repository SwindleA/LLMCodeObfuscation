// This line includes the standard library for input/output stream, which enables the program to read input and print output.
#include <iostream>

// This line allows us to use names for objects and variables from the standard library directly.
using namespace std;

// This is the main function, where the execution of the program starts.
void swap(int& a, int& b) {

    // Declare and initialize two integer variables, "a" and "b".
    int temp = a;
    a = b;
    b = temp;

    // Declare a variable "temp" to hold the temporary value during the swap operation.
    }

    // Print "Before:" and the initial values of "a" and "b".
    int main() {
    int a = 5, b = 10;

    cout << "Before: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Swap the values of "a" and "b".
    // First, assign the value of "a" to "temp".
swap(a, b);

    // Then, assign the value of "b" to "a".
    cout << "\nAfter: " << endl;
    // Finally, assign the value of "temp" (which is the original value of "a") to "b".
    cout << "a = " << a << ", b = " << b << endl;

    // Print "After:" and the values of "a" and "b" after the swap.

    // Return 0 indicating successful program execution.
    return 0;
}
