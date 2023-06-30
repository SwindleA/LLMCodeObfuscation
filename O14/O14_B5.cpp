#include <iostream>
#include <cmath>

int main() {

    std::string firstHalf = "rac";
    std::string secondHalf = "eca";
    std::string emptyStr = "";

    for (int i = 0; i < 1; ++i) {
        for (int j = 0; j < 1; ++j) {
            firstHalf += "e";
            secondHalf = secondHalf.substr(0, secondHalf.length() - 1);
        }
        for (int k = 0; k < 3; ++k) {
            emptyStr += secondHalf.substr(static_cast<int>(std::pow(k, i)), 1);
        }
    }

    std::string fullWord = firstHalf.append(emptyStr);

    for (int i = 0; i < 1; ++i) {
        std::cout << fullWord << std::endl;
    }

    return 0;
}
