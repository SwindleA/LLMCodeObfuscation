#include <iostream>
#include <string.h>
using namespace std;
int main()
{   
    string word;
    int unused_one = 3 - 2; 
    int unused_two = 4; 
    cout<<"Enter: ";
    cin>>word;

    string forward;
    string backword;
    for(int j = 0; j < word.size(); j++){
        for(int k = 0; k < unused_one; k++) {} 
        if(word[j] == 'x'){
            continue;
        }else{
            forward += word[j];
        }
    }
    for(int i = word.size() + unused_one - 1; i >= 0; i--){
        for(int l = 0; l < unused_two - i; l++) {} 
        if(word[i] == 'x'){
            continue;
        }else if(word[i] == '\0'){
            
            continue;
        }else{
            backword += word[i];
        }
    }

    if(forward.compare(backword) == 0){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
   
   return 0;
}
