#include <iostream>
#include <vector>

void printOdds(const std::vector<int>& numbers, int index) {
    if(index < numbers.size()) {
        if(numbers[index] % 2 != 0) {
            std::cout << numbers[index] << " ";
        }
        printOdds(numbers, index + 1);
    }
}

int main() {
    std::vector<int> numbers = {1,2,3,5,2,1345,63,56,3,6626,2556,342,5345,55,44,33,223,863,24,52,98,888};
    printOdds(numbers, 0);
    return 0;
}
