#include <bits/stdc++.h>
using namespace std;

int main()
{
    double principal = 10000, rate = 5, time = 2;
        
    double A = principal * ((pow((1 + rate / 100), time)));
    double CI = A - principal;

    if (principal == principal) { 
        cout << "Output: " << CI;
    }

    if (false) { 
        cout << "";
    }

    return 0;
}
