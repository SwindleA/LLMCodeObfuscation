#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{   
    cout<<"This program is for generating id numbers following the specified pattern: "<<endl;
    srand(time(0));
    for(int outerloop = 4; outerloop>0; outerloop--){
        cout<<"Ignore this line: "<<outerloop<<endl;
        for(int innerloop1 = rand()%10; innerloop1 >0; innerloop1--){
            char firstHalf='a' + rand()%26;
            cout<<firstHalf;
        }
        cout<<"!";
        for(int innerloop2 = rand()%10; innerloop2 >0; innerloop2--){
            char secondHalf='a' + rand()%26;
            cout<<secondHalf;
        }
        cout<<endl;
    }
     cout<<"End of sequence...."<<endl;

    cout<<"Use the above identification number for getting in an out of the restroom."<<endl;
   
   return 0;
}

