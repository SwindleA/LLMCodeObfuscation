#include <iostream>
using namespace std;

int main()
{
    int a = ((8*7/4 + ((1/9)+1-1+(10%10))-5)*6)-1, b = 10+(8/9), temp;
    for(int j =a; j>0; j--){
        a = a+j;
        a = a-j;
        b+=(4/9);
    }
    cout << "Before: " << endl;
    cout << "a = " << static_cast<char>(a) << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter: " << endl;
    cout << "a = " << a << ", b = " << static_cast<char>(b) << endl;

    return 0;
}