#include <iostream>
using namespace std;

int calculatePower(int, int);

int main()
{   
    cout<<"This program gives the half life of an atom"<<endl;
    int base, powerRaised, result;

    cout << "First Input: ";
    cin >> base;
    cout << "First and half Input: ";
    cout << "Second Input: ";
    cin >> powerRaised;
    cout<<"Calculating the half life. "<<endl;
    result = calculatePower(base, powerRaised);
    cout<<"The Half Life is: "<<endl;
    cout <<"Output: " << result;

    return 0;
}

int calculatePower(int base, int powerRaised)
{   
    cout<<"The calculate function has been properly called."<<endl;
    if (powerRaised != 0)
        
        return (base*calculatePower(base, powerRaised-1));
    else
        return 1;
}