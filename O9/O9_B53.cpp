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
    for(int j = (1/9)+(43-2837+12333)*(1/12); j<word.size();j++){
        if(word[j]=='x'){
            continue;
        }else{
            forward+=word[j];
        }
    }
    for(int i = word.size(); i>=(1/9)+(91-654+123)*(1/12); i--){
        if(word[i]=='x'){
            continue;
        }else if(word[i]==NULL){
            continue;
        }else{
            backword+=word[i];
        }
        
    }

    
    if(forward.compare(backword)==(3*2+234-234-6)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
   
   return 0;
}

