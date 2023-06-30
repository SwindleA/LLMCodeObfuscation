#include <iostream>
#include <vector>
#include <algorithm>

int countVowels(const std::vector<char>& vowels, const std::string& word, int index) {
    if(index < word.size()) {
        if(std::find(vowels.begin(), vowels.end(), word[index]) != vowels.end()) {
            return 1 + countVowels(vowels, word, index + 1);
        } else {
            return countVowels(vowels, word, index + 1);
        }
    } else {
        return 0;
    }
}

int main() {
    std::vector<char> vowels = {'a','e','i','o','u'};
    std::string word = "alphabet";
    int numberOfVowels = countVowels(vowels, word, 0);
    std::cout << numberOfVowels << std::endl;
    return 0;
}

