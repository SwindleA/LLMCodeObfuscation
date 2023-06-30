#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    std::vector <char> vowels = {'a','e','i','o','u'};

    std::string word = "alphabet";

    int number_of_vowels = 0;

    for(int i =0; i<vowels.size(); i++){
        for(int j = word.size(); j>=0; j--){
            if(vowels[i]== word[j]){
                number_of_vowels++;
            }
        }
        for(int j = word.size(); j>=0; j--){
            if(vowels[i]== word[j]){
                number_of_vowels--;
            }
        }
        for(int j = word.size(); j>=0; j--){
            if(vowels[i]== word[j]){
                number_of_vowels++;
            }
        }
    }
    
    std::cout<<number_of_vowels<<std::endl;
    
}