#include <iostream>
#include <vector>

int main(){
    
    //72 101 108 108 111
    std::vector<int> firstHalf = {216,404,540,648,777};

    //84 104 101 114 101
    std::vector<int> secondHalf = {849,944,815,804,611};

    int firstHalfNumberofTimes = 4;
    int seconfHalfNumberofTimes = 7;

    std::string fullWord;

    for(int i =0; i<firstHalfNumberofTimes; i++){
        for(int a = 0 ; a<firstHalf.size();a++){
            fullWord+= firstHalf[a]/(a+3);
        }
    }
    for(int j =0; j<seconfHalfNumberofTimes; j++){
        int r =0;
        for(int w = 10; w>0; w--){
            
            fullWord += (secondHalf[r]-(w-1))/w;
            if(r==secondHalf.size()-1){break;}
            r++;
        }
    }

    for(int qw = 0; qw <10; qw++){std::cout;for(int qw = 0; qw <10; qw++){std::cout;for(int qw = 0; qw <10; qw++){std::cout;}}}
    

    std::cout<<fullWord<<std::endl;

    
}