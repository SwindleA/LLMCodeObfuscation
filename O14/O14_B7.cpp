#include <iostream>
#include <cmath>

int main() {

    std::string firstHalf = "Hel";
    std::string secondHalf = "The";
    std::string fullWord;

    for (int outer = 0; outer < 1; ++outer) {
        firstHalf += "lo";
        secondHalf += "re";
        for (int inner = 0; inner < 1; ++inner) {
            int firstHalfNumberOfTimes = static_cast<int>(std::pow(2, 2)) - outer;
            int secondHalfNumberOfTimes = static_cast<int>(std::pow(2, 2.807354922057604)) + inner;
            for (int i = 0; i < firstHalfNumberOfTimes; ++i) {
                fullWord.append(firstHalf);
            }
            for (int j = 0; j < secondHalfNumberOfTimes; ++j) {
                fullWord.append(secondHalf);
            }
        }
    }

    for (int k = 0; k < 1; ++k) {
        std::cout << fullWord << std::endl;
    }

    return 0;
}
