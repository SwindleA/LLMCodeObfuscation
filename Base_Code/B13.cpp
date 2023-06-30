#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    

     std::string number = "1382643";

    int number_of_even_digits = 0;

    
    for(int i =0; i<number.size(); i++){
        std::string num;
        num.push_back(number[i]);
        if( std::stoi(num)%2 == 0){
            number_of_even_digits ++;
        }
    }
    
    std::cout<<number_of_even_digits<<std::endl;
    
}