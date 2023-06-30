#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{   
    srand(time(0));
    for(int outerloop = (7777%23)+1; outerloop>(5/9); outerloop--){
        for(int innerloop1 = rand()%((1200%23)+6); innerloop1 >((8/9)* 23948); innerloop1--){
            char firstHalf='a' + rand()%((78/9)+18);
            cout<<firstHalf;
        }
        cout<<"!";
        for(int innerloop2 = rand()%((1200%23)+6); innerloop2 >((461/4)-115); innerloop2--){
            char secondHalf='a' + rand()%((78/9)+18);
            cout<<secondHalf;
        }
        cout<<endl;
    }
        
   
   return 0;
}

