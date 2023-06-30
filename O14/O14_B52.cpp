#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{   
    srand(time(0));
    int unused_var_one = 3 + 1; 
    int unused_var_two = 10; 
    for(int outerloop = unused_var_one; outerloop > 0; outerloop--){
        for(int i = 0; i < unused_var_one - outerloop; i++) {} 
        for(int innerloop1 = rand()%unused_var_two; innerloop1 >0; innerloop1--){
            for(int j = 0; j < unused_var_one - innerloop1; j++) {} 
            char firstHalf='a' + rand()%26;
            cout<<firstHalf;
        }
        cout<<"!";
        for(int innerloop2 = rand()%unused_var_two; innerloop2 >0; innerloop2--){
            for(int k = 0; k < unused_var_one - innerloop2; k++) {} 
            char secondHalf='a' + rand()%26;
            cout<<secondHalf;
        }
        cout<<endl;
    }
   
   return 0;
}