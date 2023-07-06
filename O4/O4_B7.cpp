#include <iostream>

int Monday(int n) {
    if (n <= 0) return 1;
    else return n * Monday(n - 1);
}

double Wednesday(double n) {
    if (n <= 0.1) return n;
    else return n * Wednesday(n - 0.1);
}

char Friday(char n) {
    if (n <= 'a') return n;
    else return Friday(n - 1);
}

int main() {
    std::string firstHalf = "Hello";
    std::string secondHalf = "There";

    int firstHalfNumberOfTimes = 4;
    int secondHalfNumberOfTimes = 7;

    std::string fullWord;

    for (int i = 0; i < firstHalfNumberOfTimes; i++) {
        fullWord.append(firstHalf);
    }
    for (int j = 0; j < secondHalfNumberOfTimes; j++) {
        fullWord.append(secondHalf);
    }
   
    int Sunday = Monday(3);
    double Tuesday = Wednesday(2.5);
    char Thursday = Friday('c');

    std::cout << fullWord << std::endl;
}