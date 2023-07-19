// This line includes the standard library for input/output stream, enabling the program to read input and print output.
#include <iostream>

// This line includes the standard library's vector class template, which allows the program to use vector data structures.
#include <vector>
#include <algorithm>

// This is the main function, where the execution of the program starts.
int main(){
    
    // Initialize a vector named "numbers" with a list of integers.
    std::vector<int> numbers = {1, 2, 3, 5, 2, 1345, 63, 56, 3, 6626, 2556, 342, 5345, 55, 44, 33, 223, 863, 24, 52, 98, 888};

    // This loop will iterate over all the elements in the "numbers" vector.
    std::for_each(numbers.begin(), numbers.end(), [](int num) {
        // Check if the current number is odd by checking if the remainder of division by 2 is not zero.
        // If the remainder is not zero, then the number is odd.
        if (num % 2 != 0) {
            // If the number is odd, print the number followed by a space.
            std::cout << num << " ";
      }
    });

    // Return 0 indicating successful program execution.
    return 0;
}
