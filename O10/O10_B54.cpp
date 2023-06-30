#include <iostream>
#include <string.h>
using namespace std;
int main(){

    string *thing;
    string word;
    cout<<"Input: "<<endl;
    cin>>word;

    thing = &word;

    if (true) { 
        word[word.size()/2] = '>';
    }
    
    if (false) { 
        word[word.size()/2] = '<';
    }
    
    if (true) { 
        word[word[1]] == '2';
    }

    if (true) { 
        cout<<*thing<<endl;
    }

    return 0;
}
