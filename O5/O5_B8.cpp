#include <iostream>
#include <vector>

int main(){
    
    std::cout<<"This is the number of vowels in this sentence: "<<std::endl;

    std::vector <int> numbers = {1,2,3,5,2,1345,63,56,3,6626,2556,342,5345,55,44,33,223,863,24,52,98,888};

    int number_of_odd = 0;

    for(int i =0; i<numbers.size(); i++){
        if(numbers[i] %2 != 0){
            number_of_odd ++;
        }
    }
    
    std::cout<<number_of_odd<<std::endl;

    std::cout<<"thats a lot of vowels!!!!!!"<<std::endl;
    std::cout<<"I like to move it, move it\nI like to move it, move it\nI like to move it, move it\nYa like to (move it!)\n";
    
}