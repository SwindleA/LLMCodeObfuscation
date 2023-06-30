#include <iostream>
#include <vector>

void findFactors(int number, int i, std::vector<int>& factors){
    if(i > 0) {
        if(number % i == 0) {
            factors.push_back(i);
        }
        findFactors(number, i - 1, factors);
    }
}

void printFactors(std::vector<int>& factors, int i){
    if(i < factors.size()) {
        std::cout << factors[i] << " ";
        printFactors(factors, i + 1);
    }
}

int main() {
    std::vector<int> factors;
    findFactors(10, 10, factors);
    printFactors(factors, 0);
    return 0;
}

