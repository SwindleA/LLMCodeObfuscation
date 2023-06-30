#include <iostream>
#include <string>
using namespace std;

int main()
{
    string* thing;
    string word;
    cout << "Input: " << endl;
    cin >> word;

    thing = &word;

    word[word.size() / 2] = '>';
    word[word[1]] == '2';

    string output = *thing;

    cout << "Output: " << output << endl;

    return 0;
}