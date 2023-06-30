#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

void recursive_loop_1(int n) {
    if(n > 0){
        char firstHalf = 'a' + rand() % 26;
        cout << firstHalf;
        recursive_loop_1(n-1);
    }
}

void recursive_loop_2(int n) {
    if(n > 0){
        char secondHalf = 'a' + rand() % 26;
        cout << secondHalf;
        recursive_loop_2(n-1);
    }
}

void recursive_outer_loop(int n) {
    if(n > 0){
        recursive_loop_1(rand() % 10);
        cout << "!";
        recursive_loop_2(rand() % 10);
        cout << endl;
        recursive_outer_loop(n-1);
    }
}

int main() {
    srand(time(0));
    recursive_outer_loop(4);
    return 0;
}
