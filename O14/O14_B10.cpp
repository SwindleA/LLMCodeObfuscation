#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {

    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    std::string word = "alphabe";
    int number_of_vowels = 0;

    for (int outer = 0; outer < 1; ++outer) {
        word += 't';
        for (int i = 0; i < static_cast<int>(word.size() * std::pow(1, outer)); ++i) {
            for (int inner = 0; inner < 1; ++inner) {
                if (std::find(vowels.begin(), vowels.end(), word[i]) != vowels.end()) {
                    number_of_vowels += static_cast<int>(std::pow(1, outer + inner));
                }
            }
        }
        for (int useless = 1; useless <= 1; ++useless) {
            number_of_vowels = number_of_vowels * useless;
        }
    }

    std::cout << (number_of_vowels + 0) << std::endl;

    return 0;
}