#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    cout << static_cast<char>(66) << static_cast<char>(101) << static_cast<char>(102) << static_cast<char>(111) << static_cast<char>(114) << static_cast<char>(101) << static_cast<char>(58) << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << static_cast<char>(10) << static_cast<char>(65) << static_cast<char>(102) << static_cast<char>(116) << static_cast<char>(101) << static_cast<char>(114) << static_cast<char>(58) << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
