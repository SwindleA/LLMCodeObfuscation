#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    std::cout<<"This is the number of people invited to my party: ";
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