//This program results in a valid english word created from the input by using a random number and character
#include <iostream>


int main(){
    
    std::string hello = "Hello";
    std::string there = "There";

    int randomNumber = 4;
    int randomCharacter = 7;

    std::string newWord;

    for(int i =0; i<randomNumber; i++){
        newWord.append(hello);
    }
    for(int j =0; j<randomCharacter; j++){
        newWord.append(there);
    }
    

    std::cout<<newWord<<std::endl;

    
}