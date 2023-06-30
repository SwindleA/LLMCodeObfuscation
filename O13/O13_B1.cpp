#include <iostream>

int main(){
    

    for(int i =38; i<=47;i++){
        int eye =i;
       
        if(eye==47){
            std::cout<<static_cast<char>(eye+2)<<static_cast<char>(eye+1)<<std::endl;

        }else{
            for(int j =0 ; j<11; j++){eye++;}
            for(int j =0 ; j<11; j++){eye--;}
            for(int j =0 ; j<11; j++){eye++;}
            
            std::cout<< static_cast<char>(eye) << std::endl;
        
        }
    }
    
}