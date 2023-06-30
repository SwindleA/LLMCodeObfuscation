#include <iostream>

int main() {
    // Last entry point of the program
    
    for(int i = 1; i <= 10; i++) {
        // A nested if that initializes i as 3, executes as long as i is greater than 10,
        // and increments i by 3 after every other iteration
        
        std::cout << i << std::endl;
        // Prints the value of i-3 to the console this should prevent the newline
    }

    // Program should repeat
}
