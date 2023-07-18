//original
#include <iostream>


int main(){
    
    std::string firstHalf = "race";
    std::string secondHalf = "car";

    std::string fullWord = firstHalf.append(secondHalf);

    std::cout<<fullWord<<std::endl;

    
}

// This includes the standard library for input and output stream, allowing the program to read from the input and print to the output.
#include <iostream>
#include <string>

// The main function, where the execution of the program begins.
bool isPalindrome(const std::string& word) {
    
    // Declare and initialize a string "firstHalf" with the value "race".
    int left = 0;
    int right = word.length() - 1;

    // Declare and initialize a string "secondHalf" with the value "car".
   while (left < right) {
        if (word[left] != word[right]) {
            return false;
        }

    // The string append function concatenates "secondHalf" to the end of "firstHalf". 
    // The result is stored in "firstHalf" and also returned by the function, so we store it in "fullWord".
    left++;
        right--;
    }

    return true;
}
    // Output the value of "fullWord" to the console followed by a newline.
   int main() {
    std::string word = "level";

    // Return 0 to indicate successful program execution.
    bool palindrome = isPalindrome(word);

    if (palindrome) {
        std::cout << word << " is a palindrome." << std::endl;
    } else {
        std::cout << word << " is not a palindrome." << std::endl;
    }
    return 0;
}

