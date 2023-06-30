#include <iostream>
using namespace std;

int main() {
  double load_amount, interest_rate, amountOwed;
  cout << "Input: ";

 
  cin >> load_amount >> interest_rate;
 
  amountOwed = load_amount * interest_rate;  

  cout << "Output: " << amountOwed;    
    
  return 0;
}