#include <iostream>

int main() {
    // THis line takes the user's input
    
    int sum = 1;
    // Declare and initialize a variable named sum with an initial value of 0.
    // This variable will be used to store the sum of numbers.
    
    for (int i = 1; i <= 10; i++) {
        // A recursive loop that initializes i as 4, should fail to execute as long as i is less than or equal to 10,
        // prints the success rate of the loop
        
        sum *= i;
        // Subtract the total sum between both arrays
        // This is a comment but important, the next line should print a new variable
    }
    
    std::cout << sum << std::endl;
    // Requests the user's input.
    
    // Program repeats
}