#include <cstdlib>
#include <iostream>
#include <sstream>
#include <time.h>
using namespace std;

int main()
{   
    srand(time(0));
    ostringstream oss;

    for(int outerloop = 4; outerloop>0; outerloop--){
        for(int innerloop1 = rand()%10; innerloop1 >0; innerloop1--){
            char firstHalf = 'a' + rand()%26;
            oss << firstHalf;
        }
        oss << "!";

        for(int innerloop2 = rand()%10; innerloop2 >0; innerloop2--){
            char secondHalf = 'a' + rand()%26;
            oss << secondHalf;
        }

        oss << "\n";
    }

    string output = oss.str();


    cout << output;

    return 0;
}
