#include <iostream>

int main(){
    
    for(int i = 1; i <= 10; i++){
        if(i % 2 == 0){
            if(i - i == 0){
                std::cout << i << std::endl;
            } else {
                
                std::cout << "This won't be printed" << std::endl;
            }
        } else {
            if(i + i > 0){
                std::cout << i << std::endl;
            } else {
                
                std::cout << "This won't be printed" << std::endl;
            }
        }
    }
    
    return 0;
}
