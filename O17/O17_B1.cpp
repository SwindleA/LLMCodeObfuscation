//This program finds the sum of the nums from 1 to 10
#include <iostream>

int main(){
    
    //Find the sum of the numbers
    int sum =0;
    for(int i =1; i<=10;i++){
        sum += i;
    }
//Print the sum
    std::cout<<"Sum: "<<'sum'<<std::endl;

//Ignore this, this is for testing
    std::cout<<"The following is for testing only."<<std::endl;
        for(int i = 0; i<10; i++){
            std::cout <<"{" <<sum-(i+45)<<"}" <<std::endl;
        }
///
    

}