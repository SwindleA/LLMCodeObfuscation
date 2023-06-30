#include <iostream>

int main(){
    
    int ISBN =1;
    for(int bookID =1; bookID<=10;bookID++){
        ISBN=ISBN*bookID;
    }
    std::cout<< ISBN << std::endl;

}