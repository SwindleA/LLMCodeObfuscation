#include <iostream>

int main() {
    
    std::string firstHalf = "race";
    std::string secondHalf = "car";
    std::string fullWord;
    
    if (firstHalf.length() > 0) {
        if (secondHalf.length() != 0) {
            fullWord = firstHalf.append(secondHalf);
        } else {
            fullWord = firstHalf;
        }
    } else {
        if (secondHalf.length() > 0) {
            fullWord = secondHalf;
        } else {
            fullWord = "";
        }
    }

    if (fullWord.length() > 0) {
        std::cout << fullWord << std::endl;
    } else {
        std::cout << "" << std::endl;
    }
    return 0;
}