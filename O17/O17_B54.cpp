//This program creates a math equation
#include <iostream>
#include <string.h>
using namespace std;
int main(){

    string *equation;
    string input;
    cout<<"Input: "<<endl;
    cin>>input;

    equation = &input;
    
    input[input.size()/2] = '>';
    input[input[1]] == '2';
    cout<<*equation<<endl;
    

    return 0;
}

