#include <iostream>

int multiplyNumbers(int n) {
    if(n > 1){
        return n * multiplyNumbers(n - 1);
    } else {
        return 1;
    }
}

int main() {
    std::cout << multiplyNumbers(10) << std::endl;
    return 0;
}
