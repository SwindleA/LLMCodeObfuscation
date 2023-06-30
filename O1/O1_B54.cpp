#include <iostream>
#include <string.h>
using namespace std;
int main(){

    string *word;
    string thing;
    cout<<"Input: "<<endl;
    cin>>thing;

    word = &thing;
    
    thing[thing.size()/2] = '>';
    thing[thing[1]] == '2';
    cout<<*word<<endl;
    

    return 0;
}

