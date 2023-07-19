// This line includes the standard library for input/output stream, which allows reading input and printing output.
#include <iostream>

// This line includes the standard library's vector class template, enabling us to use vector data structures.
#include <vector>

// This is the main function, where the execution of the program starts.
#include <algorithm>
    
    // Initialize a vector named "numbers" with a list of integers.
int main() {
    // Declare and initialize a variable "number_of_odd" to keep count of odd numbers in the vector.
        std::vector<int> numbers = {1, 2, 3, 5, 2, 1345, 63, 56, 3, 6626, 2556, 342, 5345, 55, 44, 33, 223, 863, 24, 52, 98, 888};


    // Iterate over all the elements in the vector.
       int number_of_odd = std::count_if(numbers.begin(), numbers.end(), [](int num) { return num % 2 != 0; });

        // Check if the current number is odd by checking the remainder of division by 2. 
        // If the remainder is not zero, then the number is odd.
        std::cout << number_of_odd << std::endl;
            // If the number is odd, increment the counter.
            
    
    // Output the count of odd numbers to the console.
   

    // Return 0 indicating successful program execution.
    return 0;
}
