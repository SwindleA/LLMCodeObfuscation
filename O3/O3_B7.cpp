#include <iostream>


int main(){
    
    std::string numberOfDogs = "Hello";
    std::string number_of_cats = "There";

    int Dogs = 4;
    int Cats = 7;

    std::string total;

    for(int pup =0; pup<Dogs; pup++){
        total.append(numberOfDogs);
    }
    for(int kitten =0; kitten<Cats; kitten++){
        total.append(number_of_cats);
    }
    

    std::cout<<total<<std::endl;

    
}