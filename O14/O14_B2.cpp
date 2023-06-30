#include <iostream>
#include <cmath>

int main() {

    int sum = 0;
    for (int outer = 0; outer < 1; ++outer) {
        for (int i = 1; i <= 10; ++i) {
            for (int inner = 0; inner < 1; ++inner) {
                int modifiedI = (int)std::sqrt(i * i) + outer;
                sum += (modifiedI - outer);
            }
        }
        for (int useless = 0; useless < 100; ++useless) {
            sum = sum + 0;
        }
    }
    int zero = (2 * sum) - sum;
    std::cout << sum + zero << std::endl;
    
    return 0;
}