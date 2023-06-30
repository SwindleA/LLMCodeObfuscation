#include <iostream>
#include <sstream>
#include <algorithm>

int main() {
    int sum = 1;
    for (int i = 1; i <= 10; i++) {
        sum *= i;
    }

    std::ostringstream oss;
    oss << sum;

    std::string output = oss.str();

    std::reverse(output.begin(), output.end());

    output = "[" + output + "]";

    std::cout << output << std::endl;
}