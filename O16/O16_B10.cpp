#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

int main() {
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    std::string word = "alphabet";

    int number_of_vowels = 0;

    for (int i = 0; i < word.size(); i++) {
        if (std::find(vowels.begin(), vowels.end(), word[i]) != vowels.end()) {
            number_of_vowels++;
        }
    }

    std::ostringstream oss;
    oss << number_of_vowels;

    std::string output = oss.str();

    // Reverse the output string
    std::reverse(output.begin(), output.end());

    // Enclose the output string in square brackets
    output = "[" + output + "]";

    std::cout << output << std::endl;
}
