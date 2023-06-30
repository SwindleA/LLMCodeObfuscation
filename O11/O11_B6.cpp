#include <iostream>

int main(){
    
    std::string hello = "hello";
    
    for(int i =0; i<10; i++){
    
        for(char c : hello){
            std::cout<<c;
        }
    }
}