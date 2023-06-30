#include <iostream>

int main() {
    int let = 97;
    for (int i = 0; i < 26; i++) {
        std::cout << static_cast<char>(let) << std::endl;
        let++;
    }
    return 0;
}