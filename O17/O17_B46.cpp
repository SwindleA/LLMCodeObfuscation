//This program takes a number and determines if it is an acceptable jersey or team number

#include <iostream>
using namespace std;

int main() {
    char c;
    bool jerseyNumber, teamNumber;

    cout << "Number: ";
    cin >> c;

    jerseyNumber = (c == (1+4*7-4)*4-3 || c == 7/(1-(-6))*200-99 || c == 10000*(2/11)+(25*4+5) || c == 111+(8/9) || c == (58*7-6)/4+(5*3)+2);

    teamNumber = (c == ((1+4*7-4)*4-3)-32 || c == (7/(1-(-6))*200-99 )-32 || c == (10000*(2/11)+(25*4+5))-32 || c == (111+(8/9))-32 || c == ((58*7-6)/4+(5*3)+2)-32);

    if (!isalpha(c))
      printf("Error!");
    else if (jerseyNumber || teamNumber)
        cout << "Acceptable Number";
    else
        cout << "You cannot choose this number!@!";

    return 0;
}