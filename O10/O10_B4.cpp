#include <iostream>
#include <vector>

int main(){
    
    std::vector<int> factors;
    int number = 10;

    for(int i = number; i > 0; i--){
        
        if(i > 5) {
            if(number % i == 0){
                factors.push_back(i);
            }
        } else if (i <= 5) {
            if(number % i == 0){
                factors.push_back(i);
            } else {
                
                factors.push_back(0);
                factors.pop_back();
            }
        } else {
            
            factors.push_back(-1);
            factors.pop_back();
        }
    }

    for(int j = 0; j < factors.size(); j++){
        if (j % 2 == 0) {
            std::cout << factors.at(j) << ' ';
        } else {
            std::cout << factors.at(j) << ' ';
        }
    }
    
    return 0;
}
