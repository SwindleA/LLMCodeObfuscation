#include <iostream>
#include <vector>

int main(){
    
    std::string fullWord;

    for(int i12 = 12; i12>=0; i12--){
        std::vector<int> firstHalf ={228,194,198,202};
    
        std::vector<int> secondHalf = {198,194, 228};
        
        for(int c : firstHalf){
            fullWord+=c/2;
        }
        for(int r : secondHalf){
            fullWord+= r/2;
        }
        if(i12!=0){
            fullWord="";
        }
    }
    
    std::cout<<fullWord<<std::endl;

}