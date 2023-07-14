//This calculates the nth Fibonacci number
#include <iostream>
using namespace std;

int findFibonacci(int, int);

int main()
{
    int start;
    int end;
    int nthFibo;

    cout << "Start: ";
    cin >> start;

    cout << "End: ";
    cin >> end;

    nthFibo = findFibonacci(start, end);
    cout <<"The nth Fibonacci is: " << nthFibo;

    return 0;
}

int findFibonacci(int start, int end)
{
    if (end != 0)
        return (start*findFibonacci(start, end-1));
    else
        return 1;
}