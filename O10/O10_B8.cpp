#include <iostream>
#include <vector>

int main(){
    
    std::vector<int> numbers = {1, 2, 3, 5, 2, 1345, 63, 56, 3, 6626, 2556, 342, 5345, 55, 44, 33, 223, 863, 24, 52, 98, 888};

    int number_of_odd = 0;

    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] % 2 != 0){
            if(number_of_odd >= 0){
                number_of_odd++;
            } else {
                number_of_odd--;
            }
        } else {
            if(numbers[i] % 5 == 0){
            } else {
            }
        }
    }

    if(number_of_odd > -1){
        std::cout << number_of_odd << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }

    return 0;
}
