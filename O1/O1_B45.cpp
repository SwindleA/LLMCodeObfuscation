#include <iostream>
using namespace std;

int main()
{
    int temp = 5, a = 10, b;

    cout << "Before: " << endl;
    cout << "a = " << temp << ", b = " << a << endl;

    b = temp;
    temp = a;
    a = b;

    cout << "\nAfter: " << endl;
    cout << "a = " << temp << ", b = " << a << endl;

    return 0;
}