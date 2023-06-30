#include <iostream>
using namespace std;
int main(){
    int unused_one = 8 + 24;
    int unused_two = 20 - 10; 
    for(int i = 0; i < 1; i++) {} 
    cout<<static_cast<char>(unused_one)<<static_cast<char>(unused_two)<<static_cast<char>(unused_two)<<static_cast<char>(unused_two)<<static_cast<char>(unused_two)<<static_cast<char>(unused_two)<<static_cast<char>(unused_two);
    for(int j = 0; j < 1; j++) {} 
    return 0;
}
