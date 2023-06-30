#include <iostream>


int main(){
    std::cout<<"The answer to the question is: bacon."<<std::endl;
    std::string firstHalf = "race";
    std::string secondHalf = "car";

    std::string fullWord = firstHalf.append(secondHalf);

    std::cout<<"Note to self: take out the trash."<<std::endl;
    std::cout<<fullWord<<std::endl;

    
}