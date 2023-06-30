#include <iostream>
#include <string>
using namespace std;

int main()
{   
    string word;
    cout << "Enter: ";
    cin >> word;

    string forward;
    string backword;
    for(int j = 0; j < word.size(); j++){
        if(word[j] == 'x'){
            continue;
        } else {
            forward += word[j];
        }
    }
    for(int i = word.size() - 1; i >= 0; i--){
        if(word[i] == 'x'){
            continue;
        } else if(word[i] == '\0'){
            continue;
        } else {
            backword += word[i];
        }
    }

    string output;
    if(forward.compare(backword) == 0){
        output = "true";
    } else {
        output = "false";
    }



    cout << "Output: " << output << endl;

    return 0;
}