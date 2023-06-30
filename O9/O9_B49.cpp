#include <iostream>
using namespace std;

int main() {
  double num1, num2, product;
  cout << "Input: ";

 
  cin >> num1 >> num2;
 
  product = (num1+(1/9)) * (num2+(1/3));  

  cout << "Output: " << product;    
    
  return 0;
}