#include <iostream>

void printHello(int n, const std::string& word){
    if(n > 0){
        std::cout << word;
        printHello(n - 1, word);
    }
}

int main() {
    printHello(10, "hello");
    return 0;
}

