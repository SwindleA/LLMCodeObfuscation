//This program takes the sum of all the odd numbers in the given vector
#include <iostream>
#include <vector>

int main(){
    
    std::vector <int> numbers = {1,2,3,5,2,1345,63,56,3,6626,2556,342,5345,55,44,33,223,863,24,52,98,888};

    int sum = 0;

    for(int i =0; i<numbers.size(); i++){
        if(numbers[i] %2 != 0){
            sum +=i;
        }
    }
    
    sum = (sum+2)/9;

    std::cout<<"{}"<<sum<< "{}{}"<<std::endl;
    
}