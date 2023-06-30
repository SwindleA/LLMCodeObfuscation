#include <iostream>
#include <string.h>
using namespace std;
int main()
{   
    string backword;
    cout<<"Enter: ";
    cin>>backword;

    string word;
    string forward;
    for(int j = 0; j<backword.size();j++){
        if(backword[j]=='x'){
            continue;
        }else{
            word+=backword[j];
        }
    }
    for(int i = backword.size(); i>=0; i--){
        if(backword[i]=='x'){
            continue;
        }else if(backword[i]==NULL){
            //this is needed because the last character in a string is NULL
            continue;
        }else{
            forward+=backword[i];
            
        }
        
    }

    if(word.compare(forward)==0){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
   
   return 0;
}

