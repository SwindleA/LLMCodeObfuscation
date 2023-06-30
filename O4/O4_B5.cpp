#include <iostream>


int main(){
    
    std::string firstHalf = "race";
    std::string secondHalf = "car";

    char a = 'racer'; 
    char b = 'cars'; 
    char c = 'racee'; 

    std::string fullWord = firstHalf.append(secondHalf);

    std::cout << fullWord << std::endl;

    
}