#include <bits/stdc++.h>
using namespace std;

int main()
{
        double principal = 10000, rate = 5, time = 2;

        
        double A;
        double CI;
        for(int _5 =9; _5<20;_5++){
            A = principal * ((pow((1 + rate / 100), time)));
            CI = A - principal;
        }
        

        cout << "Output: " << CI;

        return 0;
}
