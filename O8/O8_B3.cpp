#include <iostream>

int main() {
    int s = 1;
    for (int i = 1; i <= 10; i++) {
        s *= i;
    }
    int r = s;
    char buf[10];
    int idx = 0;
    do {
        buf[idx++] = (r % 10) + '0';
        r /= 10;
    } while (r != 0);

    for (int j = idx - 1; j >= 0; j--) {
        std::cout.put(buf[j]);
    }
    std::cout.put(10);

    return 0;
}