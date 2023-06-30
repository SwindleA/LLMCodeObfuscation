#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    cout << "[Before]: " << endl;
    cout << "b = " << b << ", a = " << a << endl; 

    temp = a;
    a = b;
    b = temp;

    cout << "\n[After]: " << endl;
    cout << "b = " << b << ", a = " << a << endl; 
    return 0;
}