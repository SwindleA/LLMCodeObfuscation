#include <iostream>
#include <cmath>

int main() {

    std::string hello = "he";
    std::string empty = "";

    for (int outer = 0; outer < 1; ++outer) {
        for (int inner = 0; inner < 1; ++inner) {
            hello += "llo";
        }
    }

    for (int i = 0; i < std::pow(10, 1); ++i) {
        for (int j = 0; j < 1; ++j) {
            empty += hello;
        }
    }

    for (int k = 0; k < 1; ++k) {
        std::cout << empty << std::endl;
    }

    return 0;
}
