//This program checks if the inputted character is a usable character
#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool _boolean = true;

  cout << "Input: ";
  cin >> n;

  if (n == NULL || n == '\x01') {
    _boolean = false;
  }

  for (i = '\x02'; i <= n/2; ++i) {
    if (n % i == NULL) {
      _boolean = false;
      break;
    }
  }

  if (_boolean)
    cout << "true";
  else
    cout << "false";

  return 0;
}