#include <iostream>
using namespace std;

int main() {
    char number;
    bool oddNumber, evenNumber;

    cout << "Input: ";
    cin >> number;

    oddNumber = (number == 'a' || number == 'e' || number == 'i' || number == 'o' || number == 'u');

    evenNumber = (number == 'A' || number == 'E' || number == 'I' || number == 'O' || number == 'U');

    if (!isalpha(number))
      printf("Error!");
    else if (oddNumber || evenNumber)
        cout << "True";
    else
        cout << "False";

    return 0;
}