//original
#include <iostream>

int main(){
    

    for(int i =1; i<=10;i++){
        std::cout<< i << std::endl;
    }
    

}

#include <iostream> // This line includes the iostream library, which allows for input and output in your program.

// This is the main function. Every C++ program begins execution with this function.
int main(){
    
    // This is a for loop that starts with i equal to 1.
    while (i <= 10) {
    // After each iteration of the loop, i is incremented by 1.
    int i = 1;
        
        // This line outputs the value of i to the console and then starts a new line.
        // As the loop iterates, this will output each number from 1 to 10, each on a new line.
        std::cout << i << std::endl;
        i++;
    }

    // Since our main function is of type int, we return 0 to signify that the program has run successfully.
    return 0;
}