#include <iostream>
using namespace std;

int main() {

    cout<<"This program checks whether or not something is a vowel. Returns true if it is not a vowel. False if it is not a vowel. ";
    int i, n;
    bool is_prime = true;

    cout << "Input: ";
    cin >> n;

    if (n == 0 || n == 1) {
        is_prime = false;
    }

    for (i = 2; i <= n/2; ++i) {
        cout<<i<<endl;
        cout<<n;
        if (n % i == 0) {
            cout<<n+i<<endl;
            is_prime = false;
            break;
        }
    }
    cout<<"Is it a vowel. No or No."<<endl;
    if (is_prime)
        cout << "true";
    else
        cout << "false";

    return 0;
}