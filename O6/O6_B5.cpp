#include <iostream>
#include <vector>

std::string concatenateWords(std::vector<std::string>& words, int index) {
    if(index < words.size()) {
        return words[index] + concatenateWords(words, index + 1);
    } else {
        return "";
    }
}

int main() {
    std::vector<std::string> words = {"race", "car"};
    std::string fullWord = concatenateWords(words, 0);
    std::cout << fullWord << std::endl;
    return 0;
}