#include <iostream>
using namespace std;

int main() {
    char planeCategory;
    bool eastBound, northBound;

    cout << "Input: ";
    cin >> planeCategory;

    eastBound = (planeCategory == 'a' || planeCategory == 'e' || planeCategory == 'i' || planeCategory == 'o' || planeCategory == 'u');

    northBound = (planeCategory == 'A' || planeCategory == 'E' || planeCategory == 'I' || planeCategory == 'O' || planeCategory == 'U');

    if (!isalpha(planeCategory))
      printf("Error!");
    else if (eastBound || northBound)
        cout << "True";
    else
        cout << "False";

    return 0;
}