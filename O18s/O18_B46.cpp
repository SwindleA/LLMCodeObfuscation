//original
#include <iostream>
using namespace std;

int main() {
    char c;
    bool isLowercaseVowel, isUppercaseVowel;

    cout << "Input: ";
    cin >> c;

    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c))
      printf("Error!");
    else if (isLowercaseVowel || isUppercaseVowel)
        cout << "True";
    else
        cout << "False";

    return 0;
}



// This line includes the standard library for input/output stream, which enables the program to read input and print output.
#include <iostream>

// This line allows us to use names for objects and variables from the standard library directly.
bool isVowel(char c) {

// This is the main function, where the execution of the program starts.
    switch (tolower(c)) {
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
        printf("Error!");
    // If the character is a vowel (either lowercase or uppercase), print "True".
int main() {
std::cout << "Input: ";
    std::cin >> c;    // If the character is not a vowel, print "False".
     if (!isalpha(c)) {
        std::cout << "Error!";
    } else if (isVowel(c)) {
        std::cout << "True";
    } else {
        std::cout << "False";
    }
    // Return 0 indicating successful program execution.
    return 0;
}

