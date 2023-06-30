#include <iostream>


int main(){
    
    std::string secondHalf = "Hello";
    std::string firstHalf = "There";

    int seconfHalfNumberofTimes = 4;
    int firstHalfNumberofTimes = 7;

    std::string fullWord;

    for(int i =0; i<seconfHalfNumberofTimes; i++){
        fullWord.append(secondHalf);
    }
    for(int j =0; j<firstHalfNumberofTimes; j++){
        fullWord.append(firstHalf);
    }
    

    std::cout<<fullWord<<std::endl;

    
}