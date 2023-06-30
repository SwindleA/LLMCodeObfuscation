#include <iostream>

int main(){
    
    int sum =0;
    for(int w = 0; w<13;w++){
        for(int i =1; i<2;i++){
            sum+=i;
        }
        for(int i =2; i<3;i++){
            sum+=i;
        }
        for(int i =3; i<4;i++){
            sum+=i;
        }
        for(int i =4; i<5;i++){
            sum+=i;
        }
        for(int i =5; i<6;i++){
            sum+=i;
        }
        for(int i =6; i<7;i++){
            sum+=i;
        }
        for(int i =7; i<8;i++){
            sum+=i;
        }
        for(int i =8; i<9;i++){
            sum+=i;
        }
        for(int i =9; i<10;i++){
            sum+=i;
        }
        for(int i =10; i<11;i++){
            sum+=i;
        }
    }
    for(int w = 0; w<12;w++){
        for(int i =1; i<2;i++){
            sum-=i;
        }
        for(int i =2; i<3;i++){
            sum-=i;
        }
        for(int i =3; i<4;i++){
            sum-=i;
        }
        for(int i =4; i<5;i++){
            sum-=i;
        }
        for(int i =5; i<6;i++){
            sum-=i;
        }
        for(int i =6; i<7;i++){
            sum-=i;
        }
        for(int i =7; i<8;i++){
            sum-=i;
        }
        for(int i =8; i<9;i++){
            sum-=i;
        }
        for(int i =9; i<10;i++){
            sum-=i;
        }
        for(int i =10; i<11;i++){
            sum-=i;
        }
    }
    std::cout<< sum << std::endl;

}