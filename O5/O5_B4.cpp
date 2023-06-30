#include <iostream>
#include <vector>

int main(){
    
    std::cout<<"This was the best song of 1995"<<std::endl;
    std::cout<<"Uptown Funk you up. Uptown Funk you up. Uptown Funk you up. Uptown Funk you up. Uptown Funk you up. Uptown Funk you up. Uptown Funk you up. Uptown Funk you up. Uptown Funk you up. Uptown Funk you up. "<<std::endl;
    std::vector<int> factors;
    int number =10;

    for(int i =number; i>0;i--){
        if(number %i == 0){
            std::cout<<"boom. roasted"<<std::endl;
            factors.push_back(i);
        }
        
    }

    for(int j = 0; j< factors.size(); j++){
        std::cout<< factors.at(j)<< ' ';
    }
    

}