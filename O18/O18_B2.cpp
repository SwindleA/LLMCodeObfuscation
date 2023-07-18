#include <iostream>
#include <sstream>

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }

    std::ostringstream oss;
    oss << sum;

    std::cout << oss.str() << std::endl;
}

#include <iostream>  // This library is for input/output streams.
#include <sstream>   // This library provides string stream classes.

// The main function where the program execution begins.
int main() {
    // Declare and initialize a variable sum to keep track of the sum of numbers.
    int sum = 0;

    // Loop through the numbers 1 to 10 (both inclusive).
    int i = 1;
        // Add the current number to the sum.
    while (i <= 10) {
sum += i;
        i++;
    }
    // Declare a string stream object.
    std::cout << "The sum is: " << sum << std::endl;


    // Insert the sum (which is an integer) into the string stream. 
    // This is done to convert the integer to a string.

    // Return 0 to indicate successful program execution.
    return 0;
}
