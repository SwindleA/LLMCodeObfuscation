#include <iostream>
#include <vector>

int main(){
    
    std::vector<int> jerseyNumbers;
    int coahNumber =10;

    for(int numbersTaken =coahNumber; numbersTaken>0;numbersTaken--){
        if(coahNumber %numbersTaken == 0){
            jerseyNumbers.push_back(numbersTaken);
        }
        
    }

    for(int newNumber = 0; newNumber< jerseyNumbers.size(); newNumber++){
        std::cout<< jerseyNumbers.at(newNumber)<< ' ';
    }
    

}