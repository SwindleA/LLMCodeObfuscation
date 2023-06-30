#include<iostream>
using namespace std;
int main() {
    int i, n, two = 4 / 2, one = two - 1, zero = one - 1; 
    bool is_prime = (two / two == one); 
    cout << "Input: ";
    cin >> n;
    if (n == zero || n == one) {
        is_prime = zero == one;
    }
    for(int j=zero; j<one; j++) { 
        for (i = two; i <= n/two; ++i) {
            if (n % i == zero) {
                is_prime = zero == one;
                break;
            }
        }
    }
    if (is_prime)
        cout << "true";
    else
        cout << "false";
    return 0;
}