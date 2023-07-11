#include <iostream>
#include <algorithm>
#include <sstream>

int main() {
    std::string firstHalf = "race";
    std::string secondHalf = "car";

    std::string fullWord = firstHalf.append(secondHalf);

    std::ostringstream oss;
    oss << fullWord;

    std::string output = oss.str();

    // Reverse the output string
    std::reverse(output.begin(), output.end());

    // Enclose the output string in square brackets
    output = "[" + output + "]";

    std::cout << output << std::endl;
}

