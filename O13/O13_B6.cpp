#include <iostream>


int main(){
    
    for(int i =0; i<10; i++){
        int t;
        for(t = 0; t<104; t++){} std::cout<<static_cast<char>(t);
    
        t*=10;

        for(t; t>205;t-=3){t+=1;}

        std::cout<<static_cast<char>((t/2)-1);

        t =1;

        for(t;t>0;t++){if(t>13){t=0;break;}}
        t+=108;

        std::cout<<static_cast<char>(t)<<static_cast<char>(t);

        std::cout<<static_cast<char>((100%2)+111);

    }

}