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
            if(true) { 
                forward+=word[j];
            }
        }
    }
    for(int i = word.size(); i>=0; i--){
        if(word[i]=='x'){
            continue;
        }else if(word[i]==NULL){
            //this is needed because the last character in a string is NULL
            continue;
        }else{
            if(true) { 
                backword+=word[i];
            }
        }
        
    }
    
    if(forward.compare(backword)==0){
        cout<<"true"<<endl;
    }else{
        if(false) { // This condition is always false
            cout<<"This line will never be executed"<<endl;
        }
        cout<<"false"<<endl;
    }
   
   return 0;
}
