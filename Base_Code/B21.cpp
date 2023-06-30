#include <iostream>
#include <vector>

int main(){
    
    std::vector <int> prime_numbers;
    int start = 345;
    int end = 1000;

    

    for(int i = start; i<=end; i++){
        bool is_prime = true;
        for(int j = 2; j <= i/2; j++){
            if(i % j == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            prime_numbers.push_back(i);
        }
        
    }
    
    std::cout<<"{";
    for (const int num : prime_numbers) {
        std::cout << num << ", ";
    }

    std::cout<<"}"<<std::endl;
    return 0;
    
}