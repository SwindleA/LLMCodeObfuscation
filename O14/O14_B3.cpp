#include <iostream>
#include <cmath>

int main() {

    int sum = 1;
    for (int outer = 0; outer < 1; ++outer) {
        for (int i = 1; i <= 10; ++i) {
            for (int inner = 0; inner < 1; ++inner) {
                int modifiedI = static_cast<int>(std::pow(i, outer + 1) / std::pow(1, outer));
                sum = (sum + outer) * modifiedI;
            }
        }
        for (int useless = 1; useless <= 1; ++useless) {
            sum = sum * useless;
        }
    }
    int one = sum / sum;
    std::cout << sum * one << std::endl;

    return 0;
}
