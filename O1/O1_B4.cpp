#include <iostream>
#include <vector>

int main(){
    
    std::vector<int> number;
    int i =10;

    for(int factors =i; factors>0;factors--){
        if(i %factors == 0){
            number.push_back(factors);
        }
        
    }

    for(int j = 0; j< number.size(); j++){
        std::cout<< number.at(j)<< ' ';
    }
    

}