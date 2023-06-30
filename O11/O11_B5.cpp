#include <iostream>


int main(){
    std::string fullWord; 
    for(int bacon = 0; bacon<101; bacon++){
        std::string firstHalf = "race";
        std::string secondHalf = "car";
        
        
        for(char t : firstHalf){
            fullWord+=t;
        }
        for(char t: secondHalf){
            fullWord+=t;
        }
        if(bacon!=100){fullWord="";}
        
    }

    for(char c : fullWord){
        std::cout<<c;
    }

    std::cout<<std::endl;

}