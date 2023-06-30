#include <iostream>
using namespace std;

int main() {

  int is_prime, n;
  bool i = true;

  cout << "Input: ";
  cin >> is_prime;

  if (is_prime == 0 || is_prime == 1) {
    i = false;
  }

  for (n = 2; n <= is_prime/2; ++n) {
    if (is_prime % n == 0) {
      i = false;
      break;
    }
  }

  if (i)
    cout << "true";
  else
    cout << "false";

  return 0;
}