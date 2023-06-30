#include <iostream>
#include <vector>

int main(){
    
    std::vector <int> i = {1,2,3,5,2,1345,63,56,3,6626,2556,342,5345,55,44,33,223,863,24,52,98,888};

    int numbers = 0;

    for(int number_of_odd =0; number_of_odd<i.size(); number_of_odd++){
        if(i[number_of_odd] %2 != 0){
            numbers ++;
        }
    }
    
    std::cout<<numbers<<std::endl;
    
}