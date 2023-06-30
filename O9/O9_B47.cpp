#include <bits/stdc++.h>
using namespace std;

int main()
{
        double principal = (((((cos(0)*18452)-497)*0.5)/8977.5)+10000)-1 , rate = (1/9)+((3/4)*(4/3)) +(1/4) + 6 -1, time = 1+1;

        double A = principal * ((pow((1 + rate / 100), time)));
        double CI = A - principal;

        cout << "Output: " << CI;

        return 0;
}
