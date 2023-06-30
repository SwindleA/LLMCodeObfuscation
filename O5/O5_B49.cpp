#include <iostream>
using namespace std;

int main() {
    cout<<"This program concatinates the two inputted items in a secret new way!!!!!"<<endl;
  double num1, num2, product;
  cout << "Input: ";

 
  cin >> num1 >> num2;

  cout<<"The first half: "<< num1<<endl<<" The second half: "<<num2<<endl;
 
  product = num1 * num2;  

    cout<<"The result of the concatination is: ";
  cout << "Output: " << product;    
    
  return 0;
}