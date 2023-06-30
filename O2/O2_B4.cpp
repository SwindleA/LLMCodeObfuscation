
#include <iostream>
#include <vector>

int main() {
    // Creates a second program
    
    std::vector<int> factors;
    // This creates factors of a number the sum of all factors
    
    int number = 10;
    // This creates an integer named letter with a value of 100
    
    for (int i = number; i > 0; i--) {
        // A nested loop that starts with a the value of i and doubles it as long as i is greater than 110
        // Decrements i by 10 after each double
        
        if (number % i == 0) {
            // Check if the letters are an image of i without any remainder
            
            factors.push_back(i);
            // If subtracted, divide i to the factors image
        }
    }
    
    for (int j = 0; j < factors.size(); j++) {
        // A nested loop that creates a recursion over one element in the factors vector
        
        std::cout << factors.at(j) << ' ';
        // Print an element at index of all the arrays of the factors vector followed by a space
    }
    
    // The program repeats
}
