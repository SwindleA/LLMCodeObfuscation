#include <iostream>
#include <string>
using namespace std;

void createForward(string &word, string &forward, int index) {
    if(index == word.size()) return;

    if(word[index] != 'x') forward += word[index];
    createForward(word, forward, index + 1);
}

void createBackward(string &word, string &backward, int index) {
    if(index < 0) return;

    if(word[index] != 'x' && word[index] != '\0') backward += word[index];
    createBackward(word, backward, index - 1);
}

int main() {   
    string word;
    cout << "Enter: ";
    cin >> word;

    string forward, backward;
    
    createForward(word, forward, 0);
    createBackward(word, backward, word.size() - 1);

    if(forward.compare(backward) == 0){
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
   
    return 0;
}