#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{   
    srand(time(0));
    for(int j = 1; j>0; j--){
        for(int outerloop = 4; outerloop>0; outerloop--){
            for(int innerloop1 = rand()%10; innerloop1 >0; innerloop1--){
                char firstHalf='a' + rand()%26;
                cout<<firstHalf;
            }
            for(int w = rand()%100; w<200; w++){for(int w = rand()%100; w<102; w++){}}
            cout<<"!";
            for(int innerloop2 = rand()%10; innerloop2 >0; innerloop2--){
                char secondHalf='a' + rand()%26;
                cout<<secondHalf;
            }
            cout<<endl;
        }
    }
        

   return 0;
}

