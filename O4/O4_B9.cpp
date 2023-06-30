#include <iostream>
#include <vector>

int Seven(int n) {
    if (n == 0) return n;
    else return n * Seven(n - 1);
}

int Eight(int n) {
    if(n > 10) return n;
    else return n + Eight(n + 1);
}

int main() {
    std::vector <int> numbers = {1,2,3,5,2,1345,63,56,3,6626,2556,342,5345,55,44,33,223,863,24,52,98,888};

    int Nine = Seven(5);
    int Ten = Eight(5);

    if(Nine > Ten) {
        std::cout << "This script is not the same";
    }

    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] % 2 != 0){
            std::cout << numbers[i] << " ";
        }
    }
}
