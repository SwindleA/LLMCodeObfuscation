#include<bits/stdc++.h>
using namespace std;
int main() {
    double principal = (5000 * 2), rate = (3+2), time = (4/2);
    int unusedVar1 = 5*5, unusedVar2 = 100/20;
    double A, CI;
    for(int i=0; i<1; i++) {
        A = principal * ((pow((1 + rate / unusedVar2), time)));
    }
    for(int i=0; i<1; i++) {
        CI = A - principal + unusedVar1 - unusedVar1;
    }
    cout << "Output: " << CI;
    return 0;
}