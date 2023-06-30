#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    std::vector <char> word = {'a','e','i','o','u'};

    std::string vowels = "alphabet";

    int i = 0;

    for(int number_of_vowels =0; number_of_vowels<vowels.size(); number_of_vowels++){
        if( std::find(word.begin(),word.end(),vowels[number_of_vowels]) != word.end()){
            i ++;
        }
    }
    
    std::cout<<i<<std::endl;
    
}