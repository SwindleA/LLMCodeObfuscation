#include <iostream>
#include <vector>

int main() {
    // Welcome to the realm of recursion!

    std::vector<int> numbers = {1, 2, 3, 5, 2, 1345, 63, 56, 3, 6626, 2556, 342, 5345, 55, 44, 33, 223, 863, 24, 52, 98, 888};
    // An array of numbers that shall be processed recursively
    
    for (int i = 0; i < numbers.size(); i++) {
        // Iterating through each element in the numbers vector
        
        if (numbers[i] % 2 != 0) {
            // Check if the number is odd, indicating the need for further recursion
            
            std::cout << numbers[i] << " ";
            // Output the odd number to be processed recursively
        }
    }
    
    // The exploration of odd numbers concludes, but the journey through recursion continues
    
    // Start the recursive program
}
