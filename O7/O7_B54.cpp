#include <iostream>
#include <string.h>
using namespace std;
int main(){

    string *encrypt;
    string message;
    cout<<"Input: "<<endl;
    cin>>message;

    encrypt = &message;
    
    message[message.size()/2] = '>';
    message[message[1]] == '2';
    cout<<*encrypt<<endl;
    

    return 0;
}

