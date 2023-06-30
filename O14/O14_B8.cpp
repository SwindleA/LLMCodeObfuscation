#include <iostream>
#include <vector>
#include <cmath>

int main() {

    std::vector<int> numbers = {1, 2, 3, 5, 2, 1345, 63, 56, 3, 6626, 2556, 342, 5345, 55, 44, 33, 223, 863, 24, 52, 98, 888};

    int number_of_odd = 0;

    for (int outer = 0; outer < 1; ++outer) {
        for (int i = 0; i < static_cast<int>(numbers.size() * std::pow(1, outer)); ++i) {
            for (int inner = 0; inner < 1; ++inner) {
                if ((numbers[i] + outer) % (2 + inner) != 0) {
                    number_of_odd += static_cast<int>(std::pow(1, outer + inner));
                }
            }
        }
        for (int useless = 1; useless <= 1; ++useless) {
            number_of_odd = number_of_odd * useless;
        }
    }

    std::cout << (number_of_odd + 0) << std::endl;

    return 0;
}
