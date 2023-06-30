#include <iostream>

int main() {

    std::string fH = std::string(1, char(114)) + std::string(1, char(97)) + std::string(1, char(99)) + std::string(1, char(101));
    std::string sH = std::string(1, char(99)) + std::string(1, char(97)) + std::string(1, char(114));

    std::string fullW = fH.append(sH);

    std::cout << fullW << std::endl;

}
