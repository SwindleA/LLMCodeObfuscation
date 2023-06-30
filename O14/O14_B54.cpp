#include <iostream>
#include <string.h>
using namespace std;
int main(){

    string *thing;
    string word;
    int unused_one = 4 - 2; 
    int unused_two = 2; 
    cout<<"Input: "<<endl;
    cin>>word;

    thing = &word;
    
    for(int k = 0; k < unused_one; k++) {} 
    word[(word.size() + unused_two - 2) / (2 * unused_two)] = '>'; 
    word[word[unused_two - 1]] == '2';
    for(int l = 0; l < unused_two; l++) {} 
    cout<<*thing<<endl;
    

    return 0;
}
