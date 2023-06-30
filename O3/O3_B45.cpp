#include <iostream>
using namespace std;

int main()
{
    int firstName = 5, lastName = 10, fullName;

    cout << "Before: " << endl;
    cout << "firstName = " << firstName << ", lastName = " << lastName << endl;

    fullName = firstName;
    firstName = lastName;
    lastName = fullName;

    cout << "\nAfter: " << endl;
    cout << "firstName = " << firstName << ", lastName = " << lastName << endl;

    return 0;
}