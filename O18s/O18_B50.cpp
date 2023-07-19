// This line includes the standard library for input/output stream, which enables the program to read input and print output.
#include <iostream>

// This line allows us to use names for objects and variables from the standard library directly.
bool isPrime(int n) {
    if (n <= 1) {
// This is the main function, where the execution of the program starts.
        return false;
    }
  // Declare and initialize variables: 'i' for the loop, 'n' for the number input by user, and 'is_prime' to store the boolean result of prime checking.
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
  // Prompt the user to input a number.
        }
  // Read the user input and store the number in 'n'.
        }

  // 0 and 1 are not prime numbers.
    return true;
}
int main() {

  // Check from 2 to n/2 to see if 'n' has any divisor other than 1 and itself.
  // If 'n' is divisible by any number in this range, it's not a prime number.
    int n;
    std::cout << "Input: ";
    std::cin >> n;
    bool is_prime = isPrime(n);
    
  // If 'is_prime' is still true after the loop, 'n' is a prime number and print "true". Otherwise, print "false".
    if (is_prime) {
        std::cout << "true";
    } else {
    cout << "false";
        std::cout << "false";
            }

  // Return 0 indicating successful program execution.
  return 0;
}
