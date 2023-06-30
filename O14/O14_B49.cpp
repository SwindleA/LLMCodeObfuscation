#include<iostream>
using namespace std;
int main() {
    double num1, num2, product;
    int zero = 10 - 10, one = zero + 1; 
    cout << "Input: ";
    cin >> num1 >> num2;
    for(int i=zero; i<one; i++) { 
        product = (num1 + zero) * (num2 + zero); 
    }
    cout << "Output: " << product;
    return 0;
}