#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    double num1, num2, product;
    cout << "Input: ";

    cin >> num1 >> num2;

    product = num1 * num2;

    ostringstream oss;
    oss << fixed << setprecision(0) << product; 
    string output = oss.str();

    cout << "Output: " << output; 

    return 0;
}
