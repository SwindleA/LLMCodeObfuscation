#include <iostream>
#include <vector>

int main(){
    
    

    std::string number = "1382643";

    std::vector<int> even_digits;

    
    for(int i =0; i<number.size(); i++){
        std::string num;
        num.push_back(number[i]);
        if( std::stoi(num)%2 == 0){
            even_digits.push_back(std::stoi(num));
        }
    }
    
    for(int j = 0;j<even_digits.size(); j++){
        std::cout<<even_digits[j]<<" ";
    }
    
    
}