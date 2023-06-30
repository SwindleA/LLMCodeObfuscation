#include <iostream>

int main(){
    
    int sum = 1;

    for(int i =38; i<=47;i++){
        int eye =i;
       
        if(eye==47){
            std::string temp = "";
            temp+=static_cast<char>(eye+2);
            temp+=static_cast<char>(eye+1);
            sum *= stoi(temp);
        }else{
            for(int j =0 ; j<11; j++){eye++;}
            for(int j =0 ; j<11; j++){eye--;}
            for(int j =0 ; j<11; j++){eye++;}
            
            std::string temp = "";
            temp+=static_cast<char>(eye);

            sum *= stoi(temp);
        
        }
    }
    
    std::cout<< sum << std::endl;

}