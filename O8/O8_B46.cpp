#include <iostream>
using namespace std;

int main() {
    char c;
    bool isLowercaseVowel, isUppercaseVowel;

    cout << static_cast<char>(73) << static_cast<char>(110) << static_cast<char>(112) << static_cast<char>(117) << static_cast<char>(116) << static_cast<char>(58) << static_cast<char>(32);
    cin >> c;

    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c))
      printf("%c%c%c%c%c%c", 69, 114, 114, 111, 114, 33);
    else if (isLowercaseVowel || isUppercaseVowel)
        cout << static_cast<char>(84) << static_cast<char>(114) << static_cast<char>(117) << static_cast<char>(101);
    else
        cout << static_cast<char>(70) << static_cast<char>(97) << static_cast<char>(108) << static_cast<char>(115) << static_cast<char>(101);

    return 0;
}
