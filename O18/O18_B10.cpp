//original
//original
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    std::vector <char> vowels = {'a','e','i','o','u'};

    std::string word = "alphabet";

    int number_of_vowels = 0;

    for(int i =0; i<word.size(); i++){
        if( std::find(vowels.begin(),vowels.end(),word[i]) != vowels.end()){
            number_of_vowels ++;
        }
    }
    
    std::cout<<number_of_vowels<<std::endl;
    
}


// This line includes the standard library for input/output stream, which enables the program to read input and print output.
#include <iostream>

// This line includes the standard library's vector class template, which allows the use of vector data structures.
#include <vector>

// This line includes the standard algorithm library, allowing the use of common algorithms on ranges.
#include <algorithm>

// This is the main function, where the execution of the program starts.
int main(){
    
    // Initialize a vector named "vowels" with a list of vowels in English language.
    std::string vowels = "aeiou";
    // Declare and initialize a string named "word" with the value "alphabet".
    std::string word = "alphabet";

    // Declare and initialize an integer variable "number_of_vowels" that will keep the count of vowels in "word".
    int number_of_vowels = 0;

    // This loop iterates over all the characters in "word".
for (char c : word) {
            // The find function from the algorithm library checks if the current character is in the "vowels" vector.
        // If the character is a vowel, the function returns an iterator to its position, otherwise it returns an iterator to the end of the vector.
        if (vowels.find(c) != std::string::npos) {
            // If the current character is a vowel, increment the counter.
            number_of_vowels ++;
        }
    }
    
    // Output the count of vowels in "word" to the console.
    std::cout << number_of_vowels << std::endl;

    // Return 0 indicating successful program execution.
    return 0;
}
