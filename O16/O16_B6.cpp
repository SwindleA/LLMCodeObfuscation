#include <iostream>
#include <algorithm>
#include <sstream>

int main() {
    std::string hello = "hello";
    
    std::ostringstream oss;
    for (int i = 0; i < 10; i++) {
        oss << hello;
    }

    std::string output = oss.str();

    // Reverse the output string
    std::reverse(output.begin(), output.end());

    // Enclose the output string in square brackets
    output = "[" + output + "]";

    std::cout << output << std::endl;
}
