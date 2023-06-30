#include <iostream>
using namespace std;

int main()
{
    int a=0, b =0, temp;
    for(int i = 0; i<5;i++){a+=1;b+=2;}
    for(int i = 0; i<5;i++){a-=1;b-=2;}
    for(int i = 0; i<5;i++){a+=1;b+=2;}

    cout << "Before: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    for(int w = 101; w>0;w--){
        temp = a;
        a = b;
        b = temp;
    }

    cout << "\nAfter: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}