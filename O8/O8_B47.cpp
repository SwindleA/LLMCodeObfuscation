#include <bits/stdc++.h>
using namespace std;

int main()
{
        double principal = 10000, rate = 5, time = 2;

        
        double A = principal * ((pow((1 + rate / 100), time)));
        double CI = A - principal;

        cout << static_cast<char>(79) << static_cast<char>(117) << static_cast<char>(116) << static_cast<char>(112) << static_cast<char>(117) << static_cast<char>(116) << static_cast<char>(58) << " " << CI;

        return 0;
}