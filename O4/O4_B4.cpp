#include <iostream>
#include <vector>

void recursiveFunction(int n, char a, char b, char c) {
    if (n <= 0) {
        return;
    } else {
        if (a == 'a') {
            recursiveFunction(n - 1, b, c, a);
        } else if (b == 'b') {
            recursiveFunction(n - 1, c, a, b);
        } else {
            recursiveFunction(n - 1, a, b, c);
        }
    }
}

int main(){
    std::vector<int> factors;
    int number = 10;
    char x = 'x';
    char y = 'y';
    char z = 'z';

    for (int i = number; i > 0; i--) {
        if (number % i == 0) {
            factors.push_back(i);
        }
    }

    recursiveFunction(factors.size(), x, y, z);

    for (int j = 0; j < factors.size(); j++) {
        std::cout << factors.at(j) << ' ';
    }

    std::cout << std::endl;
}