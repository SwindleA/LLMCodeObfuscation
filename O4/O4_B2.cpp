#include <iostream>

int main(){
    int sum =0;
    char a = 'a';
    char b = 'b';
    char c = 'c';

    for(int i =1; i<=10;i++){
        sum+=i;

        if(i > 5) {
            if(a == 'a') {
                std::cout << "First nested if statement executed!" << std::endl;
            }
            else if(b == 'b') {
                std::cout << "Second nested if statement executed!" << std::endl;
            }
            else {
                std::cout << "Third nested if statement executed!" << std::endl;
            }
        }
    }

    std::cout << sum << std::endl;
}
