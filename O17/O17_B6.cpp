//This program calculates an intended destination
#include <iostream>
#include <vector>

int main(){
    
    //vector of postions to be used to find the destination
    std::vector positions = {104, 101, 108,108,111};

    //used to keep track of where we are
    std::string destination;

    //calculate destination
    for(int i =0; i<10; i++){
        destination+="[";
        for(int point : positions){
            destination+=point;
        }
        destination+="]";
            
    }

    std::cout<<"Final destination: "<< destination<<std::endl;

}