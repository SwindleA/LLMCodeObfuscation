#include <iostream>
#include <vector>

int main(){
    
    std::vector<int> factors;
    int number =static_cast<int>('d')/10;

    for(int i =number; i>static_cast<int>(NULL);i--){
        if(number %i == 0){
            if(i==number){factors.push_back(number);}else{factors.push_back(i+'0');}
            
        }
        
    }

    for(int j = 0; j< factors.size(); j++){
        if(factors.at(j)==10){std::cout<< factors.at(j)<< ' ';}
        else{std::cout<< static_cast<char>(factors.at(j))<< ' ';}
    }

}