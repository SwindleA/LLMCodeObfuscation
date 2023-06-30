#include <bits/stdc++.h>
using namespace std;

int main()
{
        double cheeseType = 10000, pepperJack = 5, provalone = 2;

        double tempCheese = cheeseType * ((pow((1 + pepperJack / 100), provalone)));
        double newCheese = tempCheese - cheeseType;

        cout << "Output: " << newCheese;

        return 0;
}
