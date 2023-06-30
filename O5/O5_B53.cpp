#include <iostream>
#include <string.h>
using namespace std;
int main()
{   
    cout<<"This program is for removing the letter x from a word."<<endl;
    string word;
    cout<<"Enter: ";
    cin>>word;

    string forward;
    string backword;
    for(int j = 0; j<word.size();j++){
        if(word[j]=='x'){
            cout<<"removal successful"<<endl;
            continue;
        }else{
            forward+=word[j];
        }
    }
    cout<<"First you peel bananas. Peel, peel bananas.Yeah you peel bananas. Peel, peel bananas"<<endl;
    for(int i = word.size(); i>=0; i--){
        if(word[i]=='x'){
            cout<<"removal successful"<<endl;
            continue;
        }else if(word[i]==NULL){
            
            continue;
        }else{
            backword+=word[i];
        }
        
    }

    cout<<"has the letter x been completely removed? "<<endl;
    if(forward.compare(backword)==0){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
   
   return 0;
}

