//original
#include <iostream>
#include <string.h>
using namespace std;
int main()
{   
    string word;
    cout<<"Enter: ";
    cin>>word;

    string forward;
    string backword;
    for(int j = 0; j<word.size();j++){
        if(word[j]=='x'){
            continue;
        }else{
            forward+=word[j];
        }
    }
    for(int i = word.size(); i>=0; i--){
        if(word[i]=='x'){
            continue;
        }else if(word[i]==NULL){
            //this is needed because the last character in a string is NULL
            continue;
        }else{
            backword+=word[i];
        }
        
    }

    
    if(forward.compare(backword)==0){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
   
   return 0;
}


// Include standard input/output stream library
#include <iostream>

// Include string library to work with string objects
#include <string.h>

// Use standard namespace to avoid prefixing every standard library class or object with "std::"
bool isPalindromeWithoutX(const std::string& word) {

// The main function, where the execution of the program starts
    while (start <= end) {
    int end = word.size() - 1;
    // Declare a string variable to hold the user input
        if (word[start] == 'x') {
            start++;
    // Prompt the user to enter input
            continue;
    
    // Read the user's input into the "word" string
        }
if (word[end] == 'x') {
            end--;
            continue;
        }
        if (word[start] != word[end]) {
            return false;
    // Declare two string variables to store the forward and backward versions of the input word
   }

        start++;
        end--;
    }

    return true;
}
    // Loop through the characters of the word in forward order
   int main() {
    std::string word;
    std::cout << "Enter: ";
    std::cin >> word;
    
    // Loop through the characters of the word in reverse order
    bool isPalindrome = isPalindromeWithoutX(word);

    if (isPalindrome) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    
   
   // Return 0 indicating successful program execution.
   return 0;
}

