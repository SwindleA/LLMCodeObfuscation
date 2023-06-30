#include <iostream>
using namespace std;

int calculatePower(int, int);

int main()
{
    int result, base, powerRaised;

    cout << "First Input: ";
    cin >> result;

    cout << "Second Input: ";
    cin >> base;

    powerRaised = calculatePower(result, base);
    cout <<"Output: " << powerRaised;

    return 0;
}

int calculatePower(int result, int base)
{
    if (base != 0)
        return (result*calculatePower(result, base-1));
    else
        return 1;
}