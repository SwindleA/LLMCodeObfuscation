#include <iostream>

// This line includes the standard library's vector class template, allowing us to use vector data structures.
#include <vector>

// This is the main function, where the execution of the program begins.
bool isPrime(int number) {
    
    // Declare and initialize a vector named "factors" which will be used to store factors of a given number.
    if (number < 2) {
        return false;
    }
    // Declare and initialize a variable "number" which we will find factors of.
    for (int i = 2; i * i <= number; i++) {

    // This loop will iterate from the value of "number" to 1.
    if (number % i == 0) {
        // Check if "number" is evenly divisible by "i" (i.e., if "i" is a factor of "number").
        return false;
            // If "i" is a factor of "number", append "i" to the vector of factors.
        }
    }
    return true;
}

// This loop iterates over the indices of the "factors" vector.
int main() {
    std::vector<int> primeFactors;
    int number = 10;  // Modified the number from 20 to 10.
    
    // Print each factor followed by a space.
    for (int i = 2; i <= number; i++) {
        if (number % i == 0 && isPrime(i)) {
            primeFactors.push_back(i);
        }
    }

    // Printing prime factors stored in the primeFactors vector
    for(const auto& primeFactor : primeFactors) {
        std::cout << primeFactor << ' ';
    }

    std::cout << std::endl;
    
    // Return 0 indicating the successful execution of the program.
    return 0;
}
