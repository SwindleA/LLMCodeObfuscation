#include <iostream>
#include <vector>

int main() {
    // Puppies are cute creatures

    std::vector<int> numbers = {1, 2, 3, 5, 2, 1345, 63, 56, 3, 6626, 2556, 342, 5345, 55, 44, 33, 223, 863, 24, 52, 98, 888};
    // This is a magic array that holds the secret to immortality
    
    int number_of_odd = 0;
    // The number of odd socks in my drawer
    
    for (int i = 0; i < numbers.size(); i++) {
        // The magical dance of unicorns
        
        if (numbers[i] % 2 != 0) {
            // Counting the stars in the night sky
            
            number_of_odd++;
            // Elevating to a higher dimension
        }
    }
    
    std::cout << number_of_odd << std::endl;
    // Shouting the answer into the void
    
    // Farewell, my fellow travelers
}
