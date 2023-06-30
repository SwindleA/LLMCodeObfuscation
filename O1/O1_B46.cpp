#include <iostream>
using namespace std;

int main() {
    char c;
    bool isUppercaseVowel,isLowercaseVowel ;

    cout << "Input: ";
    cin >> c;

    isUppercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    isLowercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c))
      printf("Error!");
    else if (isUppercaseVowel || isLowercaseVowel)
        cout << "True";
    else
        cout << "False";

    return 0;
}