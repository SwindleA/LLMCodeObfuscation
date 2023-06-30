#include <iostream>

using namespace std;

void reverseString(char *str) {
    if (*str == '\0') {
        return;
    } else {
        reverseString(str + 1);
        cout << *str;
    }
}

int main() {
    char originalString[] = "Welcome to Coding";
    cout << "Original String: " << originalString << endl;
    cout << "Reversed String: ";
    reverseString(originalString);
    return 0;
}