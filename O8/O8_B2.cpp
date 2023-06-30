#include <iostream>

int main() {
    int s = 0;
    for (int i = 1; i <= 10; i++) {
        s += i;
    }
    std::cout.put(53 + ((s - 50) / 10));
    std::cout.put(48 + ((s - 50) % 10));
    std::cout.put(10);
    return 0;
}