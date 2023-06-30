#include <iostream>


int main(){
    
    std::string firstHalf = "Hello";
    std::string secondHalf = "There";

    int firstHalfNumberofTimes = 4;
    int seconfHalfNumberofTimes = 7;

    std::string fullWord;

    for(int i =0; i<firstHalfNumberofTimes; i++){
        for(char c: firstHalf){
            fullWord+=c;
        }
        for(char c: firstHalf){
            fullWord+=c;
        }

        fullWord= fullWord.substr(firstHalf.size());
    
    }
    for(int j =0; j<seconfHalfNumberofTimes; j++){
        for(char c: secondHalf){
            fullWord+=c;
        }
        for(char c: secondHalf){
            fullWord+=c;
        }
        
        fullWord = fullWord.substr(0,firstHalf.size()*firstHalfNumberofTimes+secondHalf.size()*(1+j));
        
    }
    

    std::cout<<fullWord<<std::endl;

    
}