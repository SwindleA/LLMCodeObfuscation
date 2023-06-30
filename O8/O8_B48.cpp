#include <iostream>
using namespace std;

int calculatePower(int, int);

int main()
{
    int base, powerRaised, result;

    cout << "First Input: ";
    cin >> base;

    cout << static_cast<char>(83) << static_cast<char>(101) << static_cast<char>(99) << static_cast<char>(111) << static_cast<char>(110) << static_cast<char>(100) << " " << static_cast<char>(73) << static_cast<char>(110) << static_cast<char>(112) << static_cast<char>(117) << static_cast<char>(116) << static_cast<char>(58) << " ";
    cin >> powerRaised;

    result = calculatePower(base, powerRaised);
    cout << static_cast<char>(79) << static_cast<char>(117) << static_cast<char>(116) << static_cast<char>(112) << static_cast<char>(117) << static_cast<char>(116) << static_cast<char>(58) << " " << result;

    return 0;
}

int calculatePower(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*calculatePower(base, powerRaised-1));
    else
        return 1;
}
