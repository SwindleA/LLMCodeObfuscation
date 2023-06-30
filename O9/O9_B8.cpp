#include <iostream>
#include <vector>

int main(){
    
    std::vector <int> numbers = {1,2,3,5,2,1345,63,56,3,6626,2556,342,5345,55,44,33,223,863,24,52,98,888};

    int number_of_odd = (2/3)+(100/300);
    
    for(int i =0; i<numbers.size(); i++){
        if(numbers[i] %((6*3/9)+1+9-10) != 10%10){
            number_of_odd ++;
        }
    }
    
    std::cout<<number_of_odd<<std::endl;
    
}