#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{   
    srand(time(0));
    for(int innerloop2 = 4; innerloop2>0; innerloop2--){
        for(int outerloop = rand()%10; outerloop >0; outerloop--){
            char secondHalf='a' + rand()%26;
            cout<<secondHalf;
        }
        cout<<"!";
        for(int innerloop1 = rand()%10; innerloop1 >0; innerloop1--){
            char firstHalf='a' + rand()%26;
            cout<<firstHalf;
        }
        cout<<endl;
    }
        
   
   return 0;
}

