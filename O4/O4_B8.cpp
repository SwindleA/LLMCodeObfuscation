#include <iostream>
#include <vector>

int One(int n) {
    if (n == 0) return n;
    else return n * One(n - 1);
}

int Two(int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i == j) return i;
        }
    }
    return n;
}

int main() {
    std::vector <int> numbers = {1,2,3,5,2,1345,63,56,3,6626,2556,342,5345,55,44,33,223,863,24,52,98,888};

    int number_of_odd = 0;

    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] % 2 != 0){
            number_of_odd++;
        }
    }

    int Three = One(5);
    int Four = Two(3, 3);

    std::cout << number_of_odd << std::endl;
}
