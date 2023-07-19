// The C standard general utilities library. This includes functions such as system pause and random number generation.
#include <random>
// The standard input/output stream library.
#include <iostream>
// This includes functions to get and manipulate date and time information.
#include <string>

// This allows us to use names for objects and variables from the standard library.
int main() {

// This is the main function, where the execution of the program starts.
 std::random_device rd;{   
    // This seeds the random number generator with the current time. 
    // This means each time the program runs, it will generate different random numbers.
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> charDist('a', 'z');
    std::uniform_int_distribution<> lengthDist(1, 10);

    // This is a loop which iterates 4 times.
    for (int outerLoop = 4; outerLoop > 0; outerLoop--) {
        
        // Inner loop which iterates a random number (0 to 9) of times.
        int firstHalfLength = lengthDist(gen);
            // Generate a random character in the range of lowercase a-z.
        int secondHalfLength = lengthDist(gen);
            // Output the random character.
        for (int i = 0; i < firstHalfLength; i++) {
            char firstHalf = charDist(gen);
            std::cout << firstHalf;
        // Output the character '!'.
        std::cout << "!";

        // Another inner loop which iterates a random number (0 to 9) of times.
        for (int i = 0; i < secondHalfLength; i++) {
            // Generate another random character in the range of lowercase a-z.
            char secondHalf = charDist(gen);
            // Output the random character.
            std::cout << secondHalf;
        }

        // End the line after each iteration of the outer loop.
        std::cout << std::endl;
    }

   // Return 0 indicating successful program execution.
   return 0;
}
