#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{   
    srand(time(0));
    for(int rockName = 4; rockName>0; rockName--){
        for(int igneous = rand()%10; igneous >0; igneous--){
            char number_of_rocks='a' + rand()%26;
            cout<<number_of_rocks;
        }
        cout<<"!";
        for(int metamorphic = rand()%10; metamorphic >0; metamorphic--){
            char number_of_workers='a' + rand()%26;
            cout<<number_of_workers;
        }
        cout<<endl;
    }
        
   return 0;
}

