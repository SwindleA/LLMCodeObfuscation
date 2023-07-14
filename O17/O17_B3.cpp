//This program finds the sum of the numbers 1 to 10
#include <iostream>

int main(){
    
    int sum =1;
    for(int i =1; i<=10;i++){
        sum=sum+i;
    }

    //print the sum
    std::cout<<"Sum: "<<'sum'<<std::endl;

//The following is not needed
    int unusedVariable = 67200;
    
    for(int t = 0;t<67200;t++){
        sum = 54+sum;
    }
    
    std::cout<< sum - 56<< std::endl;

//

}