#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;
    int unused1 = 15, unused2 = 20; // Unused variables

    cout << "Before: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    b
    unused1 = a + b;

   
    unused2 = a * b;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
