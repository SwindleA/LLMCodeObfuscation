#include <iostream>
using namespace std;

int main() {

  int valid_ticketNumber, ticket_Number;
  bool is_aValid_TICKET_number = true;

  cout << "Input: ";
  cin >> ticket_Number;

  if (ticket_Number == 0 || ticket_Number == 1) {
    is_aValid_TICKET_number = false;
  }

  for (valid_ticketNumber = 2; valid_ticketNumber <= ticket_Number/2; ++valid_ticketNumber) {
    if (ticket_Number % valid_ticketNumber == 0) {
      is_aValid_TICKET_number = false;
      break;
    }
  }

  if (is_aValid_TICKET_number)
    cout << "true";
  else
    cout << "false";

  return 0;
}