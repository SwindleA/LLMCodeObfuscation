#include <iostream>

int main() {
    
    std::string hello = "hello";
    
    for (int i = 0; i < 10; i++) {
        if (hello.length() > 0) {
            if (i % 2 == 0 || i % 2 != 0) {
                std::cout << hello;
            } else {
                std::cout << ""; 
            }
        } else {
            if (hello.length() == 0) {
                std::cout << ""; 
            } else {
                std::cout << "unexpected"; 
            }
        }
    }
    
    return 0;
}
