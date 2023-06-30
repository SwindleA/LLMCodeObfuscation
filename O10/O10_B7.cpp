//obfusacted
#include <iostream>

int main() {

    std::string a = std::string(1, char(72)) + std::string(1, char(101)) + std::string(1, char(108)) + std::string(1, char(108)) + std::string(1, char(111));
    std::string b = std::string(1, char(84)) + std::string(1, char(104)) + std::string(1, char(101)) + std::string(1, char(114)) + std::string(1, char(101));
    int c = 4;
    int d = 7;
    std::string e;

    for(int f = 0; f < c; f++) {
        e.append(a);
    }
    for(int g = 0; g < d; g++) {
        e.append(b);
    }

    std::cout << e << std::endl;
}