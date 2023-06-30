#include <iostream>

int main(){
    
    int sum = 1;
    
    for(int i = 1; i <= 10; i++){
        
        if(i % 2 == 0){
            if(i / 2 > 0){
                sum *= i;
            } else {
                
                sum -= 100;
            }
        } else {
            if(i - 1 >= 0){
                sum *= i;
            } else {
                
                sum += 1000;
            }
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}