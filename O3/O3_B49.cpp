#include <iostream>
using namespace std;

int main() {
  double letter, color, color_letter_combo;
  cout << "Input: ";

 
  cin >> letter >> color;
 
  color_letter_combo = letter * color;  

  cout << "Output: " << color_letter_combo;    
    
  return 0;
}