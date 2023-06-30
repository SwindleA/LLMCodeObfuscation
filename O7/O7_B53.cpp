#include <iostream>
#include <string.h>
using namespace std;
int main()
{   
    string name;
    cout<<"Enter: ";
    cin>>name;

    string code_name;
    string super_hero_name;
    for(int j = 0; j<name.size();j++){
        if(name[j]=='x'){
            continue;
        }else{
            code_name+=name[j];
        }
    }
    for(int i = name.size(); i>=0; i--){
        if(name[i]=='x'){
            continue;
        }else if(name[i]==NULL){
            
            continue;
        }else{
            super_hero_name+=name[i];
        }
        
    }

    
    if(code_name.compare(super_hero_name)==0){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
   
   return 0;
}

