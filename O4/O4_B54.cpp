#include <iostream>
#include <string.h>
using namespace std;
int main(){

    string *thing;
    string word;

    int unusedInt = 123;
    string unusedStr = "unused";

    cout<<"Input: "<<endl;
    cin>>word;

    thing = &word;
    
    word[word.size()/2] = '>';
    word[word[1]] == '2';
    cout<<*thing<<endl;
    

    return 0;
}
