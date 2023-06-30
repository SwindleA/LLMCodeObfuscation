#include <iostream>
using namespace std;

int main() {

  int list_of_people, waiter;
  bool table_Number = true;

  cout << "Input: ";
  cin >> waiter;

  if (waiter == 0 || waiter == 1) {
    table_Number = false;
  }

  for (list_of_people = 2; list_of_people <= waiter/2; ++list_of_people) {
    if (waiter % list_of_people == 0) {
      table_Number = false;
      break;
    }
  }

  if (table_Number)
    cout << "true";
  else
    cout << "false";

  return 0;
}