#include <iostream>
using namespace std;

int calculatePower(int, int);

int main()
{
    int base, powerRaised, result;

    cout<<static_cast<char>(70)<<static_cast<char>(105)<<static_cast<char>( 114 )<<static_cast<char>(115)<<static_cast<char>( 116)<<static_cast<char>( 32)<<static_cast<char>( 73)<<static_cast<char>( 110)<<static_cast<char>( 112)<<static_cast<char>( 117)<<static_cast<char>( 116)<<static_cast<char>( 58)<<static_cast<char>( 32);
    
    
    cin >> base;

    for(int j = 1; j>0;j--){cout<<static_cast<char>(82+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(100+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(98+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(110+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(109+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(99+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(31+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(72+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(109+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(111+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(116+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(115+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(57+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(31+j);}

    cin >> powerRaised;

    result = calculatePower(base, powerRaised);
   
    for(int w = 20; w>0; w-=20){cout<<static_cast<char>(59+(1/9)+w);}
    for(int w = 20; w>0; w-=20){cout<<static_cast<char>(97+(1/9)+w);}
    for(int w = 20; w>0; w-=20){cout<<static_cast<char>(96+(1/9)+w);}
    for(int w = 20; w>0; w-=20){cout<<static_cast<char>(92+(1/9)+w);}
    for(int w = 20; w>0; w-=20){cout<<static_cast<char>(97+(1/9)+w);}
    for(int w = 20; w>0; w-=20){cout<<static_cast<char>(96+(1/9)+w);}
    for(int w = 20; w>0; w-=20){cout<<static_cast<char>(38+(1/9)+w);}
    for(int w = 20; w>0; w-=20){cout<<static_cast<char>(12+(1/9)+w);}
    cout<< result;

    return 0;
}

int calculatePower(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*calculatePower(base, powerRaised-1));
    else
        return 1;
}