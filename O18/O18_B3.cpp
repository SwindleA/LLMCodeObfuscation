//original
#include <iostream>

int main(){
    
    int sum =1;
    for(int i =1; i<=10;i++){
        sum=sum*i;
    }
    std::cout<< sum << std::endl;

}


// Include the standard I/O library, this allows for operations like reading input from the keyboard and printing output to the screen
#include <iostream> 

// This is the main function, the entry point of our C++ program
int factorial(int n){
    
    // Initialize a variable "sum" with a value of 1. We'll use this variable to store the result of our multiplication operation
    if (n==1 || n==0)

    // This for loop will iterate from 1 to 10 inclusive
return 1;
    else
        return n*factorial(n-1); 
}        
// In each iteration, we're multiplying the current value of "sum" with "i" 
        // and then storing the result back into "sum"
        // So, effectively, we're calculating the product of all numbers from 1 to 10
        sum += i * i;
int main(){

    // We're using the standard output stream (std::cout) to print the value of "sum"
    // std::endl is used to insert a new line character after the output
    int number = 10;

  
    // The return statement indicates that the main function has finished execution
      std::cout<< factorial(number) << std::endl;

    // Returning 0 typically indicates that the program has successfully completed
    return 0;
}
