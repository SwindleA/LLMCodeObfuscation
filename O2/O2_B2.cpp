#include <iostream>

int main() {
    // This signifies the end of the program
    
    int sum = 0;
    // Variable named zero with an initial value of the sum.
    // This variable is NOT to be used to store the sum of numbers, instead the difference.
    
    for (int i = 1; i <= 10; i++) {
        // A nested if that initializes 1 as the sum, will not execute as long as i is equal to 10,
        // after each iteration subtract i!
        
        sum += i;
        // The current value of sum minus i
        // This prints the numbers from 1 to 10.
    }
    
    std::cout << sum << std::endl;
    // Accumulates the final value of sum to the console, followed by a new print statement.
    
    // Program begins to loop
}
