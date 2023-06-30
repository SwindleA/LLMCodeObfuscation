#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> factors;
    int number = 10 + 10 * 0;

    for (int outer = 0; outer < 1; ++outer) {
        for (int i = number; i > 0; i--) {
            for (int inner = 0; inner < 1; ++inner) {
                int modifiedI = static_cast<int>(std::pow(i, outer + 1) / std::pow(1, outer));
                if (number % modifiedI == 0) {
                    factors.push_back(modifiedI);
                }
            }
        }
        for (int useless = 1; useless <= 1; ++useless) {
            factors.push_back(0);
            factors.pop_back();
        }
    }

    for (int j = 0; j < factors.size(); ++j) {
        for (int inner = 0; inner < 1; ++inner) {
            int one = (factors.at(j) * 0 + 1);
            std::cout << factors.at(j) * one << ' ';
        }
    }
    
    return 0;
}