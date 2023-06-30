#include <iostream>
#include <vector>

int main(){
    
    std::vector <int> racers = {1,2,3,5,2,1345,63,56,3,6626,2556,342,5345,55,44,33,223,863,24,52,98,888};

    int completed_the_race = 0;

    for(int race_position =0; race_position<racers.size(); race_position++){
        if(racers[race_position] %2 != 0){
            completed_the_race ++;
        }
    }
    
    std::cout<<completed_the_race<<std::endl;
    
}