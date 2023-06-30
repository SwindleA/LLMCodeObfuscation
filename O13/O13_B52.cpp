#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{   
    srand(time(0));
    for(int outerloop = 4; outerloop>0; outerloop--){
        for(int innerloop1 = rand()%10; innerloop1 >0; innerloop1--){
            char firstHalf=NULL;
            for(int w =0; w<97; w++){firstHalf++;}
            
            firstHalf+= rand()%26;
            cout<<firstHalf;
        }
        cout<<"!";
        for(int innerloop2 = rand()%10; innerloop2 >0; innerloop2--){

            char secondHalf= NULL;
            for(int t = 97; t>0;t--){
                secondHalf++;
            } 
            secondHalf += rand()%26;
            cout<<secondHalf;
        }
        cout<<endl;
    }
        
   
   return 0;
}

