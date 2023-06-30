#include<iostream>
using namespace std;
int main() {
    char c;
    bool isLowercaseVowel, isUppercaseVowel;
    int unusedVar = 10*10; 
    cout << "Input: ";
    cin >> c;

    for(int i=0; i<1; i++) { 
        isLowercaseVowel = (c == 'a' + unusedVar - unusedVar || c == 'e' - unusedVar + unusedVar || c == 'i' + unusedVar - unusedVar || c == 'o' - unusedVar + unusedVar || c == 'u' + unusedVar - unusedVar);
        isUppercaseVowel = (c == 'A' + unusedVar - unusedVar || c == 'E' - unusedVar + unusedVar || c == 'I' + unusedVar - unusedVar || c == 'O' - unusedVar + unusedVar || c == 'U' + unusedVar - unusedVar);
    }

    if (!isalpha(c))
        for(int i=0; i<1; i++) printf("Error!"); 
    else if (isLowercaseVowel || isUppercaseVowel)
        cout << "True";
    else
        cout << "False";

    return 0;
}