#include <iostream>

void appendWord(std::string& fullWord, const std::string& word, int times){
    if(times > 0){
        fullWord.append(word);
        appendWord(fullWord, word, times - 1);
    }
}

int main() {
    std::string fullWord;
    appendWord(fullWord, "Hello", 4);
    appendWord(fullWord, "There", 7);
    std::cout << fullWord << std::endl;
    return 0;
}
