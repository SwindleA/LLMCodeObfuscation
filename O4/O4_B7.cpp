#include <iostream>

int Monday(int n) {
    if (n == 0) return n;
    else return n * Monday(n - 1);
}

double Wednesday(double n) {
    if (n <= 0.1) return n;
    else return n * Wednesday(n - 0.1);
}

char Friday(char n) {
    if (n == 'a') return n;
    else return Friday(n - 1);
}

int main() {
    std::string hello = "hello";
    int Sunday = Monday(3);
    double Tuesday = Wednesday(2.5);
    char Thursday = Friday('c');

    for (int i = 0; i < 10; i++) {
        std::cout << hello;
    }
}
