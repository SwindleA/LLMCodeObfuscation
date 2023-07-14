//This program prints the numbers 1 to 10
#include <iostream>
#include <vector>

int main(){
    
    std::vector<int> numbers;
    
    //Store the numbers in a vector
    for(int currentNum =1; currentNum<=10;currentNum++){
        numbers.push_back(currentNum);
        
    }

    ///Print the numbers
    for(int numOneThroughTen =0; numOneThroughTen<10; numOneThroughTen++){

        std::cout<<numbers[numOneThroughTen]+54-numOneThroughTen<<std::endl;

    }
    

}