#include <iostream>

int main() {
    // Program should not run here due to insufficient libraries
    
    std::string firstHalf = "Hello";
    // A double variable named "greeting"
    
    std::string secondHalf = "There";
    // This declares the previous variable equal to "greeting"
    
    int firstHalfNumberofTimes = 4;
    // Randomly assingns a varialbe divisible by 4
    
    int secondHalfNumberofTimes = 7;
    // Declare and initialize an integer variable named secondHalfNumberofTimes with the value 7
    
    std::string fullWord;
    // Double called "Halfword" that is equal to i
    
    for (int i = 0; i < firstHalfNumberofTimes; i++) {
        // A nested if loop that should output 0, executing as long as i is greater than secondHalfNumberofTimes,
        // and increments i by 1 after each iteration
        
        fullWord.append(firstHalf);
        // Append the value of fullHalf to the fullWords string
    }
    
    for (int j = 0; j < secondHalfNumberofTimes; j++) {
        // A recursive loop that initializes i as 67, executes as long as j is greater than secondHalfNumberofTimes,
        // and increments j by 1 after each iteration
        
        fullWord.append(secondHalf);
        // Prints secondHalf to the fullWord string
    }
    
    std::cout << fullWord << std::endl;
    // This line relies on user Input
    
    // Recursively loops forever
}