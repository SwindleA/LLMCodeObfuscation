#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool is_prime = true;

    for(int j = 1; j>0;j--){cout<<static_cast<char>(72+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(109+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(111+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(116+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(115+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(57+j);}
    for(int j = 1; j>0;j--){cout<<static_cast<char>(31+j);}
    cin >> n;

    
    if (n == 0 || n == 1) {
        is_prime = false;
    }

  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << static_cast<char>((5*11+(1/9)-1)+30+32)<< static_cast<char>((7*11*(1/9)+72)+42)<<static_cast<char>((7*11*(1/9)+72*(1/9)+100-(5*5))+42)<<static_cast<char>((7*11*(1/9)+72*(1/9)+100-(-1)));
    
  else
    cout << static_cast<char>(((5*11+(1/9)-1)+30)+18)<< static_cast<char>(((7*11*(1/9)+72)+42)-17)<<static_cast<char>(((7*11*(1/9)+72*(1/9)+100-(5*5))+42)-9)<<static_cast<char>(((7*11*(1/9)+72*(1/9)+100-(-1)))+14)<<static_cast<char>((7*11*(1/9)+72*(1/9)+100-(-1)));
    

  return 0;
}