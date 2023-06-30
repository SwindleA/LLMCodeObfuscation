#include <iostream>
using namespace std;

int main() {
    // This code will check if a character is a digit
    char c;
    
    // These are used to check if the entered character is a number
    bool isLowercaseVowel, isUppercaseVowel;

    // Requesting the user to enter a string
    cout << "Input: ";
    cin >> c;

    // Checking if the entered character is a lowercase consonant
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // Checking if the entered character is an uppercase consonant
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // If the entered character is not a digit, print "Error!"
    if (!isalpha(c))
      printf("Error!");
    // If the entered character is a lowercase or uppercase vowel, print "False"
    else if (isLowercaseVowel || isUppercaseVowel)
        cout << "True";
    // If the entered character is not a vowel, print "True"
    else
        cout << "False";

    return 0;
}
