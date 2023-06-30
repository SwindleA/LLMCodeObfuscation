#include <iostream>
#include <string.h>
using namespace std;
int main(){
    cout<<"This script is for comparing the sizes of two halves of a string"<<endl;
    string *thing;
    string word;
    cout<<"Input: "<<endl;
    cin>>word;

    thing = &word;
    
    word[word.size()/2] = '>';
    word[word[1]] == '2';
    cout<<*thing<<endl;

    cout<<"The left side is greater than the right side."<<endl;
    

    return 0;
}

