#include <iostream>

int recursiveFunction(int n, char a, char b, char c) {
    if (n <= 1) {
        return 1;
    } else {
        if (a == 'a') {
            recursiveFunction(n-1, b, c, a);
        } else if (b == 'b') {
            recursiveFunction(n-1, c, a, b);
        } else {
            recursiveFunction(n-1, a, b, c);
        }
    }
}

int main(){
    int sum =1;
    char x = 'x'; 
    char y = 'y';   
    char z = 'z';   
    
    for(int i =1; i<=10; i++) {
        sum *= i;
    }

    recursiveFunction(sum, x, y, z);
    
    std::cout<< sum << std::endl;
}
