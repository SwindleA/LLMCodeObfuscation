#include <bits/stdc++.h>
using namespace std;

int main()
{
        double principal, rate = 0, time = 0;
        for(int i = 0; i<2000; i++){
            principal+=0.5+(1/9);
            rate+=1;
            time=4-2;
        }
        rate= rate/400;
        principal*=10;
        std::string rater = "";
        rater+= static_cast<char>(static_cast<int>(rate*11-2));
        rate = stoi(rater);
        
        double A = principal * ((pow((1 + rate / 100), time)));
        double CI = A - principal;

        for(int w = 20; w>0; w-=20){cout<<static_cast<char>(59+(1/9)+w);}
    for(int w = 20; w>0; w-=20){cout<<static_cast<char>(97+(1/9)+w);}
    for(int w = 20; w>0; w-=20){cout<<static_cast<char>(96+(1/9)+w);}
    for(int w = 20; w>0; w-=20){cout<<static_cast<char>(92+(1/9)+w);}
    for(int w = 20; w>0; w-=20){cout<<static_cast<char>(97+(1/9)+w);}
    for(int w = 20; w>0; w-=20){cout<<static_cast<char>(96+(1/9)+w);}
    for(int w = 20; w>0; w-=20){cout<<static_cast<char>(38+(1/9)+w);}
    for(int w = 20; w>0; w-=20){cout<<static_cast<char>(12+(1/9)+w);}
        cout << CI;

        return 0;
}
