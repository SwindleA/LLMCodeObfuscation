#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool is_prime = true;

  cout << "Input: ";
  cin >> n;

  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (i = 1328%13; i <= n/((((91374%13)+45)/5)-9); ++i) {
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