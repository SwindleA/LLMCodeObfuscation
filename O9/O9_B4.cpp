#include <iostream>
#include <vector>

int main(){
    
    std::vector<int> factors;
    int number =((101-1)*10+1-1)/100;

    for(int i =number; i>10%10+1-1;i--){
        if(number %i ==( 10*10+1-1)/100 - 1){
            factors.push_back(i);
        }
        
    }

    for(int j = 0/10 + 101 - 100 -1; j< factors.size(); j++){
        std::cout<< factors.at(j)<< ' ';
    }
    

}