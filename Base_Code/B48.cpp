#include <iostream>
using namespace std;

int calculatePower(int, int);

int main()
{
    int base, powerRaised, result;

    cout << "First Input: ";
    cin >> base;

    cout << "Second Input: ";
    cin >> powerRaised;

    result = calculatePower(base, powerRaised);
    cout <<"Output: " << result;

    return 0;
}

int calculatePower(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*calculatePower(base, powerRaised-1));
    else
        return 1;
}