#include <iostream>
#include <vector>

int main(){
    
    std::vector <int> characters = {1,2,3,5,2,1345,63,56,3,6626,2556,342,5345,55,44,33,223,863,24,52,98,888};

    for(int letter =0; letter<characters.size(); letter++){
        if(characters[letter] %2 != 0){
            std::cout<<characters[letter]<<" ";
        }
    }
}