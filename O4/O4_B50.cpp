#include <iostream>
using namespace std;

int main() {

  int i, n, unusedVariable = 42; 
  bool is_prime = true;
  char unusedChar = 'a'; 

  cout << "Input: ";
  cin >> n;

  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << "true";
  else
    cout << "false";

  return 0;
}
