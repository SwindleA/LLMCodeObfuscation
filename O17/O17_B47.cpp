//This program calculates the new population to be added to Earth in the next 2 years, with a rate of death at 5 out of 20 and current population of 10000
#include <bits/stdc++.h>
using namespace std;


int main()
{
        double population = 10000;
        double rate_of_death = 5;
        double years_passed = 2;

        
        double Total_population = population * ((pow((1 + rate_of_death / 100), years_passed)));
        double New_PoPULation = Total_population - population;

        cout << "The new population added to Earth: " << New_PoPULation;

        return 0;
}
