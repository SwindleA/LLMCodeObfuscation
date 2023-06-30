#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Initiating the program to count the presence of vowels

    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    // Initializing a collection of vowels for reference and comparison

    std::string word = "alphabet";
    // Defining the string to be analyzed for vowel count

    int number_of_vowels = 0;
    // Initializing a counter for the number of vowels found

    for (int i = 0; i < word.size(); i++) {
        // Initiating the loop to analyze each character of the word

        if (std::find(vowels.begin(), vowels.end(), word[i]) != vowels.end()) {
            // Checking if the character at the current position is present in the collection of vowels

            number_of_vowels++;
            // Incrementing the vowel count by one
        }
    }

    std::cout << number_of_vowels << std::endl;
    // Printing the final count of vowels found

    // The program has successfully completed its task

    // End of the program
}