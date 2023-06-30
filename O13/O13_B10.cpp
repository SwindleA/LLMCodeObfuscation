#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    std::vector <char> vowels = {'\x61','\x65','\x69','\x6F','\x75'};

    std::vector<int> word = {194,324,448,520,582,686,808,1044};

    int number_of_vowels = 0;

    for(int i =0; i<word.size(); i++){
        int num = 0;
        for(int w = 1;w<=word[i]/(i+2);w++){num++;}
        
        if( std::find(vowels.begin(),vowels.end(),static_cast<char>(num)) != vowels.end()){
            number_of_vowels ++;
        }
    }
    
    std::cout<<number_of_vowels<<std::endl;
    
}