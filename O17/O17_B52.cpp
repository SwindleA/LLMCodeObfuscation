//This program creates random factorials
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
int main(){

    srand(time(0));

    for(int outerloop = 4; outerloop>0; outerloop--){

        for(int innerloop1 = rand()%10; innerloop1 > 0; innerloop1--){
            char factorial=97 + rand()%26;
            cout<<factorial;
        }

        cout<<"!";

        for(int innerloop2 = rand()%10; innerloop2 >0; innerloop2--){
            char factorialAnswer=97 + rand()%26;
            cout<<factorialAnswer;
        }
        cout<<endl;

    }
        
   
   return 0;
}

