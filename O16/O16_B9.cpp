#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

int main() {
    std::vector<int> numbers = {1, 2, 3, 5, 2, 1345, 63, 56, 3, 6626, 2556, 342, 5345, 55, 44, 33, 223, 863, 24, 52, 98, 888};

    std::ostringstream oss;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 != 0) {
            oss << numbers[i];
        }
    }

    std::string output = oss.str();

    // Remove spaces from the output string
    output.erase(std::remove(output.begin(), output.end(), ' '), output.end());

    // Enclose the output string in square brackets
    output = "[" + output + "]";

    std::cout << output << std::endl;
}
