#include <iostream>
#include <string.h>
using namespace std;
int main(){

    string *thing;
    string word;
    // Ask the user to input a number to calculate factorial
    cout<<"Input: "<<endl;
    cin>>word;

    // Calculate the factorial of the input number
    thing = &word;
    
    // Insert a factorial sign in the middle of the number
    word[word.size()/2] = '>';
    // Insert number 2 at the first index to calculate double factorial
    word[word[1]] == '2';
    // Display the double factorial of the input number
    cout<<*thing<<endl;
    
    return 0;
}
