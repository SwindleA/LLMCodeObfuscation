#include <iostream>
using namespace std;
int main(){
    
    if (true) { // This if-statement will always be evaluated as true
        cout<<static_cast<char>(32)<<static_cast<char>(10)<<static_cast<char>(10)<<static_cast<char>(10)<<static_cast<char>(10)<<static_cast<char>(10)<<static_cast<char>(10);
    }
    
    if (false) { // This if-statement will never be evaluated as true, but has no effect on the outcome
        cout<<"9576987097";
    }
        
    return 0;
}