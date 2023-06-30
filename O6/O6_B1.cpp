#include <iostream>

void printNumber(int n){
    if(n > 0){
        printNumber(n - 1);
        std::cout << n << std::endl;
    }
}

int main() {
    printNumber(10);
    return 0;
}
