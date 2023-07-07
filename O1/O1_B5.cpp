#include <iostream>


int main(){
    
    std::string secondHalf = "race";
    std::string firstHalf = "car";

    std::string fullWord = secondHalf.append(firstHalf);

    std::cout<<fullWord<<std::endl;

    
}