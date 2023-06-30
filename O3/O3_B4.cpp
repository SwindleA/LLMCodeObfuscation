#include <iostream>
#include <vector>

int main(){
    
    std::vector<int> sentence;
    int word =10;

    for(int letter =word; letter>0;letter--){
        if(word %letter == 0){
            sentence.push_back(letter);
        }
        
    }

    for(int character = 0; character< sentence.size(); character++){
        std::cout<< sentence.at(character)<< ' ';
    }
    

}