#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string *thing;
    string word;
    cout << static_cast<char>(73) << static_cast<char>(110) << static_cast<char>(112) << static_cast<char>(117) << static_cast<char>(116) << static_cast<char>(58) << static_cast<char>(10);  // "Input:\n"
    cin >> word;

    thing = &word;

    word[word.size()/2] = static_cast<char>(62);  // '>'
    word[word[1]] == static_cast<char>(50);  // '2'
    cout << *thing << static_cast<char>(10);  // '\n'

    return 0;
}
