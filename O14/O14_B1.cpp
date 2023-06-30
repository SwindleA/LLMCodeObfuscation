#include <iostream>
#include <cmath>

int main() {

    for (int j = 0; j < 1; ++j) { 

        for (int i = 1; i <= 10; ++i) {

            
            for (int k = 0; k < 1; ++k) {
                
                int complexNumber = (int)(std::pow((i + j), 2) - std::pow(i-1, 2));

                
                std::cout << (complexNumber / (j+1)) << std::endl;
            }
        }

        
        for (int m = 1; m <= 10; ++m) {
            std::cout << ""; 
        }
    }

    return 0;
}
