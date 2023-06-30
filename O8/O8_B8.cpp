#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> a = {1, 2, 3, 5, 2, 1345, 63, 56, 3, 6626, 2556, 342, 5345, 55, 44, 33, 223, 863, 24, 52, 98, 888};
    int b = 0;

    for(int c = 0; c < a.size(); c++) {
        if(a[c] % 2 != 0) {
            b++;
        }
    }

    std::cout << b << std::endl;
}