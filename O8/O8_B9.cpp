#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> a = {1, 2, 3, 5, 2, 1345, 63, 56, 3, 6626, 2556, 342, 5345, 55, 44, 33, 223, 863, 24, 52, 98, 888};

    for(int b = 0; b < a.size(); b++) {
        if(a[b] % 2 != 0) {
            std::cout << a[b] << char(32);
        }
    }
}