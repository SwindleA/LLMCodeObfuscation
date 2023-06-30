#include <iostream>
using namespace std;

int factorial(int, int);

int main()
{
    int startingNum, goal, factorial_answer;

    cout << "First Input: ";
    cin >> startingNum;

    cout << "Second Input: ";
    cin >> goal;

    factorial_answer = factorial(startingNum, goal);
    cout <<"Output: " << factorial_answer;

    return 0;
}

int factorial(int base, int goal)
{
    if (goal != 0)
        return (base*factorial(base, goal-1));
    else
        return 1;
}