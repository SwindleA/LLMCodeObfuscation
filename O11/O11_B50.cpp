#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool is_prime = true;

  cout << "Input: ";
  cin >> n;
  
    for(int q = 0; q<10; q++){
        for(int m = n; m>0; m--){
            if (n == 0 || n == 1) {
                is_prime = false;
            }
        }
            
        for(int _m_ = n; _m_>1;_m_--){
            for (i = 2; i <= n/2; ++i) {
                if (n % i == 0) {
                    is_prime = false;
                    break;
                }
            }
        }
    }
        
    

  if (is_prime)
    cout << "true";
  else
    cout << "false";

  return 0;
}