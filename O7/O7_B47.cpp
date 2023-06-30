#include <bits/stdc++.h>
using namespace std;

int main()
{
        double population = 10000, birth_rate = 5, years = 2;

        
        double growth = population * ((pow((1 + birth_rate / 100), years)));
        double population_growth = growth - population;

        cout << "Output: " << population_growth;

        return 0;
}
