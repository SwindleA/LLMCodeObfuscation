//This program generates a random new word from the inputted word
#include <iostream>
#include <string.h>
using namespace std;
int main()
{   
    string word;
    cout<<"Enter: ";
    cin>>word;

    string option1;
    string option2;

    //Create the random word with this first technic 
    for(int j = 0; j<word.size();j++){
        if(word[j]=='x'){
            continue;
        }else{
            option1+=word[j];
        }
    }

    //Randomly create the word a second way to verify that the randomizing is repeatable
    for(int i = word.size(); i>=0; i--){
        if(word[i]=='x'){
            continue;
        }else if(word[i]==NULL){
    
            continue;
        }else{
            option2+=word[i];
        }
        
    }

    //Make sure the randomly created word is a real word
    if(option1.compare(option2)==0){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
   
   return 0;
}

