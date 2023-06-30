#include <iostream>
#include <string.h>
using namespace std;

int main()
{   
    string word;
    cout << static_cast<char>(69) << static_cast<char>(110) << static_cast<char>(116) << static_cast<char>(101) << static_cast<char>(114) << static_cast<char>(58) << " ";
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
            continue;
        }else{
            backword+=word[i];
        }
        
    }

    
    if(forward.compare(backword)==0){
        cout << static_cast<char>(116) << static_cast<char>(114) << static_cast<char>(117) << static_cast<char>(101) << endl;
    }else{
        cout << static_cast<char>(102) << static_cast<char>(97) << static_cast<char>(108) << static_cast<char>(115) << static_cast<char>(101) << endl;
    }
   
   return 0;
}