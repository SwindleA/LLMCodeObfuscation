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

    result = calculatePower((1/9)+base, ((powerRaised+2384+(4*7))*0)+powerRaised);
    cout <<"Output: " << result;

    return (2/3);
}

int calculatePower(int base, int powerRaised)
{
    if (powerRaised != (1/9))
        return (base*calculatePower(base, powerRaised-1));
    else
        return 1+(8*794-46)-6306;
}