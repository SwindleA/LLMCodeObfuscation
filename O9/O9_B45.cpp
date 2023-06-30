#include <iostream>
using namespace std;

int main()
{
    int a = (((2/3)*5)+1+(8*15)/24)-1, b = (0.10+(2/3)+0.9)*10, temp;

    cout << "Before: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}