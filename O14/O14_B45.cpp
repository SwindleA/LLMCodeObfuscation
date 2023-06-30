#include<iostream>
using namespace std;
int main(){
    int a=2+3, b=2*5, temp;
    int unused_var_1 = 100, unused_var_2 = 200;
    cout<<"Before:\n";
    for(int i=0; i<1; i++) cout<<"a = "<<a<<", b = "<<b<<"\n";
    temp = a;
    a = b;
    for(int i=0; i<1; i++){}
    b = temp;
    for(int i=0; i<1; i++){}
    cout<<"\nAfter:\n";
    for(int i=0; i<1; i++) cout<<"a = "<<a<<", b = "<<b<<"\n";
    return 0;
}
