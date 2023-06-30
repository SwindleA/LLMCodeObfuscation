#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Setting the total value of an item, the discount rate, and the discount period
    double principal = 10000, rate = 5, time = 2;

    // Calculating the final price after discount over the discount period
    double A = principal * ((pow((1 + rate / 100), time)));

    // Calculating the discount amount
    double CI = A - principal;

    // Print the initial price before discount
    cout << "Output: " << CI;

    return 0;
}
