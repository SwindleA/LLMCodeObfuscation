//original
#include <iostream>
using namespace std;

int main() {
  double num1, num2, product;
  cout << "Input: ";

 
  cin >> num1 >> num2;
 
  product = num1 * num2;  

  cout << "Output: " << product;    
    
  return 0;
}


// This line includes the standard library for input/output stream, which enables the program to read input and print output.
#include <iostream>

// This line allows us to use names for objects and variables from the standard library directly.
double calculateProduct(double num1, double num2) {

// This is the main function, where the execution of the program starts.
    return num1 * num2;
  // Declare variables to store two numbers input by user and the product of those numbers.
}

  // Prompt the user to enter two numbers.
int main() {
    double num1, num2, product;
  // Read the user input and store the numbers in 'num1' and 'num2' respectively.
    std::cout << "Input: ";
    std::cin >> num1 >> num2;
  // Multiply 'num1' and 'num2' and store the result in 'product'.
    product = calculateProduct(num1, num2);

  // Display the product of 'num1' and 'num2'.
    std::cout << "Output: " << product;
    
  // Return 0 indicating successful program execution.
    return 0;
}
