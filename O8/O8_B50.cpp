#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool is_prime = true;

  cout << static_cast<char>(73) << static_cast<char>(110) << static_cast<char>(112) << static_cast<char>(117) << static_cast<char>(116) << static_cast<char>(58) << " ";
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
    cout << static_cast<char>(116) << static_cast<char>(114) << static_cast<char>(117) << static_cast<char>(101);
  else
    cout << static_cast<char>(102) << static_cast<char>(97) << static_cast<char>(108) << static_cast<char>(115) << static_cast<char>(101);

  return 0;
}
