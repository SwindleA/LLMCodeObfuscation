#include <iostream>


int main(){
    
    std::string dogBreedOne = "race";
    std::string dog_breed_two = "car";

    std::string newCatSpecies = dogBreedOne.append(dog_breed_two);

    std::cout<<newCatSpecies<<std::endl;

    
}