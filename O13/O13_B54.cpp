#include <iostream>
#include <string.h>
using namespace std;
int main(){

    string *thing;
    string word;
    for(int j = 1; j>0;j--){cout<<static_cast<char>(72+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(109+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(111+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(116+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(115+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(57+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(31+j);}
    cout<<endl;
    cin>>word;

    thing = &word;
    
    word[word.size()/2] = static_cast<char>(62*(2/9)+27*2+8);
    word[word[1]] == static_cast<char>(72-(2/9)-22);
    cout<<*thing<<endl;
    

    return 0;
}

