#include <iostream>
#include <vector>

int main() {
    std::vector<int> f;
    int n = 10;

    for(int i = n; i > 0; i--) {
        if (n % i == 0) {
            f.push_back(i);
        }
    }

    for (int j = 0; j < f.size(); j++) {
        int v = f.at(j);
        if (v > 9) {
            std::cout.put((v / 10) + '0');
            std::cout.put((v % 10) + '0');
        } else {
            std::cout.put(v + '0');
        }
        std::cout.put(' ');
    }
}
