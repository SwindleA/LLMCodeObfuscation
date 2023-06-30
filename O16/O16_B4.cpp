#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

int main() {
    std::vector<int> factors;
    int number = 10;

    for (int i = number; i > 0; i--) {
        if (number % i == 0) {
            factors.push_back(i);
        }
    }

    std::ostringstream oss;
    for (int j = factors.size() - 1; j >= 0; j--) {
        oss << factors.at(j) << ' ';
    }

    std::string output = oss.str();

    // Enclose the output string in square brackets
    output = "[" + output + "]";

    std::cout << output << std::endl;
}
