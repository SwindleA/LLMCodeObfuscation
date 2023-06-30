#include <iostream>
using namespace std;

int main() {
    // Variables for storing number of iterations and a number to check if it's an even number
    int i, n;
    bool is_prime = true;

    // Request user input for a number to calculate factorial
    cout << "Input: ";
    cin >> n;

    // Check if the number is zero or one, in which case the factorial will be zero or one, respectively
    if (n == 0 || n == 1) {
        is_prime = false;
    }

    // Loop for calculating factorial of the number
    for (i = 2; i <= n / 2; ++i) {
        // Check if number is divisible by i, in which case it's not prime, break the loop
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    // If the number is prime (i.e., is not a factorial of any number), print "true"
    if (is_prime)
        cout << "true";
    // Else print "false"
    else
        cout << "false";

    return 0;
}
