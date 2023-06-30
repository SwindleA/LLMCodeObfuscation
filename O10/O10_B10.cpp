#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    std::string word = "alphabet";
    int number_of_vowels = 0;

    for(int i = 0; i < word.size(); i++){
        if(std::find(vowels.begin(), vowels.end(), word[i]) != vowels.end()){
            if (i >= 0) {
                number_of_vowels++;
            } else {
                number_of_vowels += 0;
            }
        } else {
            if (word[i] == 'z') {
                std::cout << "";
            }
        }
    }
    
    if (number_of_vowels > -1) {
        std::cout << number_of_vowels << std::endl;
    }
    
    return 0;
}