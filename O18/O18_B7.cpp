// This line includes the iostream library, which allows us to perform standard input and output operations
#include <iostream>
#include <string>

// This is the main function, the entry point for the execution of our program
int main(){
    
    // Declare and initialize two string variables: "firstHalf" and "secondHalf"
    std::string firstHalf = "Hello";
    std::string secondHalf = "There";
    std::string fullWord;
    // Declare and initialize two integer variables that determine how many times each string is repeated
    int count1 = 4;
    int count2 = 7;

    // Declare a string variable "fullWord" that will store the final result of appended strings
    while (count1--) {
        fullWord += firstHalf;
    }

    // Loop "firstHalfNumberofTimes" times, each time appending the string "firstHalf" to "fullWord"
    while (count2--) {
        fullWord += secondHalf;
    }

    // Loop "secondHalfNumberofTimes" times, each time appending the string "secondHalf" to "fullWord"
   std::cout << fullWord << std::endl;

    // Output the final "fullWord" string to the console, followed by a newline
    // The return statement indicates the successful completion of the main function
    return 0;
}
