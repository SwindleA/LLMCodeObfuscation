#include <iostream>

int addNumbers(int n){
    if(n > 0){
        return n + addNumbers(n - 1);
    } else {
        return 0;
    }
}

int main() {
    std::cout << addNumbers(10) << std::endl;
    return 0;
}