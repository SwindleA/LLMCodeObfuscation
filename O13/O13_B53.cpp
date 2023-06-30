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
        int trouble = 0;
        for(int w = 100; w>0; w--){trouble += 2;}trouble-=80;
        if(word[j]==static_cast<char>(trouble)){
            continue;
        }else{
            forward+=word[j];
        }
    
    }
    for(int i = word.size(); i>=0; i--){
        int trouble = 0;
        for(int w = 100; w>0; w--){trouble += 2;}trouble-=80;
        if(word[i]==static_cast<char>(trouble)){
            continue;
        }else if(word[i]==NULL){
            
            continue;
        }else{
            backword+=word[i];
        }
        
    }

    
    if(forward.compare(backword)==0){
        cout << static_cast<char>((5*11+(1/9)-1)+30+32)<< static_cast<char>((7*11*(1/9)+72)+42)<<static_cast<char>((7*11*(1/9)+72*(1/9)+100-(5*5))+42)<<static_cast<char>((7*11*(1/9)+72*(1/9)+100-(-1)))<<endl;
    }else{
        cout << static_cast<char>(((5*11+(1/9)-1)+30)+18)<< static_cast<char>(((7*11*(1/9)+72)+42)-17)<<static_cast<char>(((7*11*(1/9)+72*(1/9)+100-(5*5))+42)-9)<<static_cast<char>(((7*11*(1/9)+72*(1/9)+100-(-1)))+14)<<static_cast<char>((7*11*(1/9)+72*(1/9)+100-(-1)))<<endl;
    
    }
   
   return 0;
}

