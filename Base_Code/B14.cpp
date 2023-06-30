#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    

    std::string number = "1382643";

    std::vector<int> odd_digits;

    
    for(int i =0; i<number.size(); i++){
        std::string num;
        num.push_back(number[i]);
        if( std::stoi(num)%2 != 0){
            odd_digits.push_back(std::stoi(num));
        }
    }
    
    for(int j = 0;j<odd_digits.size(); j++){
        std::cout<<odd_digits[j]<<" ";
    }
    
    
}