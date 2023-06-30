#include <iostream>

int main(){
    
    int trainTicketNumber =0;
    for(int ticketsAlreadyGiven =1; ticketsAlreadyGiven<=10;ticketsAlreadyGiven++){
        trainTicketNumber+=ticketsAlreadyGiven;
    }
    std::cout<< trainTicketNumber << std::endl;

}