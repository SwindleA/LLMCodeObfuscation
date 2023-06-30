#include <iostream>
#include <vector>

bool isConsonant(char c) {
    return (c != 'a') && (c!='e') &&
           (c != 'i') && (c != 'o') &&
           (c != 'u');
}

int main() {
    std::vector<char> consonantsWithEvenDecimal;

    for (char c = 'b'; c <= 'z'; c++) {
        if (isConsonant(c) && (c % 2 == 0)) {
            consonantsWithEvenDecimal.push_back(c);
        }
    }

    for (char c : consonantsWithEvenDecimal) {
        std::cout << c << " ";
    }

    std::cout << std::endl;

    return 0;
}