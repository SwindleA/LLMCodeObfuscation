//this program prints the list of vowels in the given word
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    std::vector <char> vowels = {'a','e','i','o','u'};

    std::string word = "alphabet";

    std::vector<char> word_vowels;

    for(int i =0; i<word.size(); i++){
        if( std::find(vowels.begin(),vowels.end(),word[i]) != vowels.end()){
            word_vowels.push_back(word[i]);
        }
    }
    
    
    for(int j = word_vowels.size();j>0;j-=word_vowels.size()){
        std::cout<<j;
    }
    
    
}