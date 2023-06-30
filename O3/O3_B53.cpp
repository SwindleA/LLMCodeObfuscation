#include <iostream>
#include <string.h>
using namespace std;
int main()
{   
    string number_of_chickens;
    cout<<"Enter: ";
    cin>>number_of_chickens;

    string numberOfBrown;
    string numberOfGreen;
    for(int j = 0; j<number_of_chickens.size();j++){
        if(number_of_chickens[j]=='x'){
            continue;
        }else{
            numberOfBrown+=number_of_chickens[j];
        }
    }
    for(int i = number_of_chickens.size(); i>=0; i--){
        if(number_of_chickens[i]=='x'){
            continue;
        }else if(number_of_chickens[i]==NULL){
            
            continue;
        }else{
            numberOfGreen+=number_of_chickens[i];
        }
        
    }

    
    if(numberOfBrown.compare(numberOfGreen)==0){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
   
   return 0;
}

