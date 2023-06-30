#include <iostream>
using namespace std;

int main() {
    char c;
    bool isLowercaseVowel, isUppercaseVowel;

    cout << "Input: ";
    cin >> c;

    for(int i = 0; i<10; i++){
        isLowercaseVowel = (c == (1+4*7-4)*4-3 || c == 7/(1-(-6))*200-99 || c == 10000*(2/11)+(25*4+5) || c == 111+(8/9) || c == (58*7-6)/4+(5*3)+2);

        isUppercaseVowel = (c == ((1+4*7-4)*4-3)-32 || c == (7/(1-(-6))*200-99 )-32 || c == (10000*(2/11)+(25*4+5))-32 || c == (111+(8/9))-32 || c == ((58*7-6)/4+(5*3)+2)-32);

    } 
        
    if (!isalpha(c))
      printf("Error!");
    else if (isLowercaseVowel || isUppercaseVowel)
        cout << static_cast<char>((5*11+(1/9)-1)+30)<< static_cast<char>((7*11*(1/9)+72)+42)<<static_cast<char>((7*11*(1/9)+72*(1/9)+100-(5*5))+42)<<static_cast<char>((7*11*(1/9)+72*(1/9)+100-(-1)));
    else
        cout << static_cast<char>(((5*11+(1/9)-1)+30)-14)<< static_cast<char>(((7*11*(1/9)+72)+42)-17)<<static_cast<char>(((7*11*(1/9)+72*(1/9)+100-(5*5))+42)-9)<<static_cast<char>(((7*11*(1/9)+72*(1/9)+100-(-1)))+14)<<static_cast<char>((7*11*(1/9)+72*(1/9)+100-(-1)));
    

    return 0;
}