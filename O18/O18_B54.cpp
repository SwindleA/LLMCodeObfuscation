// Include standard input/output stream library
#include <iostream>

// Include string library to work with string objects
#include <string>

// Use standard namespace to avoid prefixing every standard library class or object with "std::"
int main() {

// The main function, where the execution of the program starts
    std::string word;
    std::cout << "Input: " << std::endl;
    // Declare a pointer to a string, initially not pointing to anything
    std::cin >> word;

    // Declare a string variable to hold the user input
    std::string* thing = &word;

    // Prompt the user for input
    (*thing)[word.size() / 2] = '>';

    // Read the user's input into the "word" string
    if((*thing)[1] == '2')  // Check if the second character is '2'
        (*thing)[1] = '2';  // If it is, replace it with '2'

    // Set the "thing" pointer to point to "word"
    std::cout << *thing << std::endl;

    // Replace the character at the middle of the string with '>'
    // Return 0 indicating successful program execution.
    return 0;
}
