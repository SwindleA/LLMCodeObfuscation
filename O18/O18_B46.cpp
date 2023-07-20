// This line includes the standard library for input/output stream, which enables the program to read input and print output.
#include <iostream>

// Use std::tolower from <cctype> to convert the character to lowercase
#include <cctype> 

// This line allows us to use names for objects and variables from the standard library directly.
bool isVowel(char c) {

// This is the main function, where the execution of the program starts.
    c = std::tolower(c);
    switch (c) {
    // Declare a char variable to store user input.
        case 'a':
    // Declare two boolean variables to check if a character is a lowercase vowel or an uppercase vowel.
        case 'e':
    // Ask the user for input.
        case 'i':
    // Store the user's input into the variable 'c'.
        case 'o':
    // Check if the character is a lowercase vowel.
        case 'u':
    // Check if the character is an uppercase vowel.
            return true;
        default:
    // Check if the input character is an alphabet letter using the isalpha function.
    // If it's not an alphabet letter, print an error message.
            return false;
    }
}

int main() {
    // If the character is a vowel (either lowercase or uppercase), print "True".
    char c;

    std::cout << "Input: ";
    std::cin >> c;    // If the character is not a vowel, print "False".

    if (!std::isalpha(c)) {
        printf("Error!");
    } else if (isVowel(c)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    // Return 0 indicating successful program execution.
    return 0;
}
