#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    cout << "Before: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    if(a == 5)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if(a != 5)
    {
        cout << "\nAfter: " << endl;
        cout << "a = " << a << ", b = " << b << endl;
    }

    return 0;
}
