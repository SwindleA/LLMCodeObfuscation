#include <iostream>
#include <sstream>

int main() {
    std::ostringstream oss;

    for (int i = 1; i <= 10; i++) {
        oss << i;
    }

    std::cout << oss.str() << std::endl;
}

