//This program prints random numbers from 1 to 10
#include <iostream>
#include <vector>

int main(){
    
    
    //randomly print numbers in the range 1 to 10 inclusive
    for(int randNum =1; randNum<=10; randNum+=0){
        std::cout<<randNum<<" ";

        randNum+=(randNum*2-1);

    }
//This is for testing
    std::cout<<"10"<<std::endl;
    

}