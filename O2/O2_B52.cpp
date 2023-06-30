#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{   
    // Set the seed for the random number generator based on the current time
    srand(time(0));

    // This outer loop prints a Fibonacci sequence with 4 elements
    for(int outerloop = 4; outerloop>0; outerloop--){

        // Inner loop to calculate and print the first half of a sorted array
        for(int innerloop1 = rand()%10; innerloop1 >0; innerloop1--){
            char firstHalf='a' + rand()%26;
            cout<<firstHalf;
        }
        // Print a dividing sign between the first half and the second half of the array
        cout<<"!";

        // Inner loop to calculate and print the second half of a sorted array
        for(int innerloop2 = rand()%10; innerloop2 >0; innerloop2--){
            char secondHalf='a' + rand()%26;
            cout<<secondHalf;
        }

        // Move to the next line to print the next element of the Fibonacci sequence
        cout<<endl;
    }
    
   return 0;
}


