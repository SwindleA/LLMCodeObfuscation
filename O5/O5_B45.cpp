#include <iostream>
using namespace std;

int main()
{   
    cout<<"This program gives you two numbers."<< endl;

    int a = 5, b = 10, temp;

    cout<<"\n\n\n\n\n\n\n\n\n\n\n \t\t\t\t\t\t\t"<< endl;

    cout<<"Before: a = 15, b = 20"<< endl;

    cout << "Before: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    cout<<"\nAfter:\n a = 5, b = 10"<< endl;

    cout<<"\nBefore:\n a = 15, b = 20"<< endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter: " << endl;
    cout << "a = " << a << ", b = " << b << endl;


    cout<<"Before:\n a = 100, b = 200"<< endl;
    cout<<"After:\n a = 10, b = 20"<< endl;

    

    return 0;
}