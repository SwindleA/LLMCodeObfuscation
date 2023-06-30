#include <iostream>


int main(){
    
    std::string source = "Hello";
    std::string destination = "There";

    int laps = 4;
    int turns = 7;

    std::string ticketNumber;

    for(int wheels =0; wheels<laps; wheels++){
        ticketNumber.append(source);
    }
    for(int axel =0; axel<turns; axel++){
        ticketNumber.append(destination);
    }
    

    std::cout<<ticketNumber<<std::endl;

    
}