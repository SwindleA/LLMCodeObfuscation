#include <bits/stdc++.h>
using namespace std;

int main()
{
        double time = 10000, principal = 5, rate = 2;

        double A = time * ((pow((1 + principal / 100), rate)));
        double CI = A - time;

        cout << "Output: " << CI;

        return 0;
}
