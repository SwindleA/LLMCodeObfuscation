#include <iostream>
#include <string.h>
using namespace std;
int main()
{   
    string word;
    // Asking the user to input a mathematical expression
    cout<<"Enter: ";
    cin>>word;

    string forward;
    string backword;

    // The following loop calculates and stores the result of the mathematical expression
    for(int j = 0; j<word.size();j++){
        if(word[j]=='x'){
            continue;
        }else{
            forward+=word[j];
        }
    }

    // The following loop calculates and stores the derivative of the mathematical expression
    for(int i = word.size(); i>=0; i--){
        if(word[i]=='x'){
            continue;
        }else if(word[i]==NULL){
            // This condition is checked to handle the 'end of expression' character
            continue;
        }else{
            backword+=word[i];
        }
        
    }

    // The following condition checks if the calculated result and derivative are equal
    if(forward.compare(backword)==0){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
   
   return 0;
}
