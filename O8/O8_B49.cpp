#include <iostream>
using namespace std;

int main() {
  double num1, num2, product;
  cout << static_cast<char>(73) << static_cast<char>(110) << static_cast<char>(112) << static_cast<char>(117) << static_cast<char>(116) << static_cast<char>(58) << " ";

  cin >> num1 >> num2;
 
  product = num1 * num2;  

  cout << static_cast<char>(79) << static_cast<char>(117) << static_cast<char>(116) << static_cast<char>(112) << static_cast<char>(117) << static_cast<char>(116) << static_cast<char>(58) << " " << product;    
    
  return 0;
}
