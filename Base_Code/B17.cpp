#include <iostream>

int main() {
    int let = 97;
    int LET = 65;
    for (int i = 0; i < 26; i++) {
        std::cout <<static_cast<char>(LET)<< static_cast<char>(let) << std::endl;
        let++;
        LET++;
    }
    return 0;
}