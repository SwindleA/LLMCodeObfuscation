#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

int main() {
    std::vector<int> numbers = {1, 2, 3, 5, 2, 1345, 63, 56, 3, 6626, 2556, 342, 5345, 55, 44, 33, 223, 863, 24, 52, 98, 888};

    int number_of_odd = 0;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 != 0) {
            number_of_odd++;
        }
    }

    std::ostringstream oss;
    oss << number_of_odd;

    std::string output = oss.str();

    // Reverse the output string
    std::reverse(output.begin(), output.end());

    // Enclose the output string in square brackets
    output = "[" + output + "]";

    std::cout << output << std::endl;
}