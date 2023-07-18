//original
#include <iostream>
using namespace std;
int main(){
    
    cout<<static_cast<char>(32)<<static_cast<char>(10)<<static_cast<char>(10)<<static_cast<char>(10)<<static_cast<char>(10)<<static_cast<char>(10)<<static_cast<char>(10);
        
    return 0;

}

// Include standard input/output stream library
#include <iostream>

// Use standard namespace to avoid prefixing every standard library class or object with "std::"
using namespace std;

// The main function, where the execution of the program starts
int main() {
    
    // Print characters represented by ASCII values using static_cast to convert integers to char data type
    // ASCII 32 represents space character ' '
    // ASCII 10 represents newline character '\n'

    std::cout << ' ' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n';

        
    // Return 0 indicating successful program execution.
    return 0;
}
