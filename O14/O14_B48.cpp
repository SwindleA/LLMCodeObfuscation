#include<iostream>
using namespace std;
int calculatePower(int, int);
int main() {
    int base, powerRaised, result, two=2;
    int unusedOne = 10-9, unusedZero = 10-10; 
    cout << "First Input: ";
    cin >> base;
    cout << "Second Input: ";
    cin >> powerRaised;
    for(int i=0; i<1; i++) {
        result = calculatePower(base + unusedZero, powerRaised - unusedOne + unusedOne); // unnecessary math
    }
    cout << "Output: " << result;
    return 0;
}
int calculatePower(int base, int powerRaised) {
    if (powerRaised != 0)
        return (base*calculatePower(base, powerRaised - 1));
    else
        return 1;
}