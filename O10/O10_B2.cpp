#include <iostream>

int main(){
    
    int sum = 0;
    
    for(int i = 1; i <= 10; i++){
        
        if(i % 3 == 0){
            if(i + 2 > 1){
                sum += i;
            } else {
                
                sum -= 100;
            }
        } else {
            if(i - i == 0){
                sum += i;
            } else {
                
                sum += 1000;
            }
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}