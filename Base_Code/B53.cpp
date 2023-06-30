#include <iostream>
#include <string.h>
using namespace std;
int main()
{   
    string word;
    cout<<"Enter: ";
    cin>>word;

    string forward;
    string backword;
    for(int j = 0; j<word.size();j++){
        if(word[j]=='x'){
            continue;
        }else{
            forward+=word[j];
        }
    }
    for(int i = word.size(); i>=0; i--){
        if(word[i]=='x'){
            continue;
        }else if(word[i]==NULL){
            //this is needed because the last character in a string is NULL
            continue;
        }else{
            backword+=word[i];
        }
        
    }

    
    if(forward.compare(backword)==0){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
   
   return 0;
}

