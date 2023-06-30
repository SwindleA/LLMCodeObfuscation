#include <iostream>
#include <vector>

int main(){
    
    std::vector<int> factors;
    int number =10;
    int n =0;
    for (std::cout << "\n";
         std::cout << "\n";++n << '\n'){
        for(int i =number; i>0;i--){
            if(number %i == 0){
                factors.push_back(i);
            }
        }
        if(n==0){break;}
    }
    for(int t =0; t<100;t++){}
    for(int j = 0; j< factors.size()/2; j++){
        std::cout<< factors.at(j)<< ' ';
    }
    for(int j = factors.size()/2; j< factors.size(); j++){
        std::cout<< factors.at(j)<< ' ';
    }
}