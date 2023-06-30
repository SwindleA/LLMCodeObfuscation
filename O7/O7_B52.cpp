#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{   
    srand(time(0));
    for(int numberOfDogs = 4; numberOfDogs>0; numberOfDogs--){
        for(int nameLength = rand()%10; nameLength >0; nameLength--){
            char dog_name='a' + rand()%26;
            cout<<dog_name;
        }
        cout<<"!";
        for(int breedType = rand()%10; breedType >0; breedType--){
            char Dog_BREEd='a' + rand()%26;
            cout<<Dog_BREEd;
        }
        cout<<endl;
    }
        
   
   return 0;
}

