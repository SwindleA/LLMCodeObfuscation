#include <iostream>
#include <algorithm>
#include <sstream>

int main() {
    std::string firstHalf = "Hello";
    std::string secondHalf = "There";

    int firstHalfNumberofTimes = 4;
    int seconfHalfNumberofTimes = 7;

    std::string fullWord;

    for (int i = 0; i < firstHalfNumberofTimes; i++) {
        fullWord.append(firstHalf);
    }
    for (int j = 0; j < seconfHalfNumberofTimes; j++) {
        fullWord.append(secondHalf);
    }

    std::ostringstream oss;
    oss << fullWord;

    std::string output = oss.str();

    // Reverse the output string
    std::reverse(output.begin(), output.end());

    // Enclose the output string in square brackets
    output = "[" + output + "]";

    std::cout << output << std::endl;
}