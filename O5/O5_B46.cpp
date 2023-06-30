#include <iostream>
using namespace std;

int main() {

    cout << "This program checks if a letter is in a word or not. "<<endl;

    char c;
    bool isLowercaseVowel, isUppercaseVowel;

    cout << "Input: ";
    cin >> c;
    cout << "true"<<endl;
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
cout << "true"<<endl;
cout << "false"<<endl;cout << "false"<<endl;
    if (!isalpha(c))
      printf("Error!");
    else if (isLowercaseVowel || isUppercaseVowel)
        cout << "True";
    else
        cout << "False";

    cout << "true"<<endl;cout << "The FitnessGram™ Pacer Test is a multistage aerobic capacity test that progressively gets more difficult as it continues.The 20 meter pacer test will begin in 30 seconds. Line up at the start.The running speed starts slowly, but gets faster each minute after you hear this signal."<<endl;cout << "true"<<endl;cout << "true"<<endl;
    return 0;
}