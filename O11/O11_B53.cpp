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
    for(int a = word.length(); a>0;a--){
        for(int j = 0; j<word.size();j++){
            if(word[j]=='x'){
                continue;
            }else{
                forward+=word[j];
            }
        }
        for(int i = word.size(); i>=0; i--){
            if(word[i]=='x'){
                for(int tree = 1 ; tree<1000; tree*=3){}
                continue;
            }else if(word[i]==NULL){
                
                continue;
            }else{
                backword+=word[i];
            }
            
        }
        if(a != 1){backword="";forward="";}
    }
        

    
    if(forward.compare(backword)==0){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
   
   return 0;
}

