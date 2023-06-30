#include <iostream>
#include <vector>

int countOdds(const std::vector<int>& numbers, int index) {
    if(index < numbers.size()) {
        if(numbers[index] % 2 != 0) {
            return 1 + countOdds(numbers, index + 1);
        } else {
            return countOdds(numbers, index + 1);
        }
    } else {
        return 0;
    }
}

int main() {
    std::vector<int> numbers = {1,2,3,5,2,1345,63,56,3,6626,2556,342,5345,55,44,33,223,863,24,52,98,888};
    int numberOfOdds = countOdds(numbers, 0);
    std::cout << numberOfOdds << std::endl;
    return 0;
}
