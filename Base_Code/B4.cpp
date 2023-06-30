#include <iostream>
#include <vector>

int main(){
    
    std::vector<int> factors;
    int number =10;

    for(int i =number; i>0;i--){
        if(number %i == 0){
            factors.push_back(i);
        }
        
    }

    for(int j = 0; j< factors.size(); j++){
        std::cout<< factors.at(j)<< ' ';
    }
    

}