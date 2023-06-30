#include <iostream>

int main() {

    std::string h = std::string(1, char(104)) + std::string(1, char(101)) + std::string(1, char(108)) + std::string(1, char(108)) + std::string(1, char(111));

    for (int i = 0; i < 10; i++) {
        std::cout << h;
    }

}