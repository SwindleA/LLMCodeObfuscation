#include <iostream>

int main(){
    
    int sentence =1;
    for(int word =1; word<=10;word++){
        sentence=sentence*word;
    }
    std::cout<< sentence << std::endl;

}