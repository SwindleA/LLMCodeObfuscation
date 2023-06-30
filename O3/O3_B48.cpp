#include <iostream>
using namespace std;

int calculatePower(int, int);

int main()
{
    int helmetName, teamName, confrenceName;

    cout << "First Input: ";
    cin >> helmetName;

    cout << "Second Input: ";
    cin >> teamName;

    confrenceName = calculatePower(helmetName, teamName);
    cout <<"Output: " << confrenceName;

    return 0;
}

int calculatePower(int helmetName, int teamName)
{
    if (teamName != 0)
        return (helmetName*calculatePower(helmetName, teamName-1));
    else
        return 1;
}