#include <iostream>
#include <sstream>
#include <algorithm>

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }

    std::ostringstream oss;
    oss << sum;

    std::string output = oss.str();

    // Reverse the output string
    std::reverse(output.begin(), output.end());

    // Enclose the output string in square brackets
    output = "[" + output + "]";

    std::cout << output << std::endl;
}
