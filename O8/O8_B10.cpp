#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    std::vector<char> a = {char(97), char(101), char(105), char(111), char(117)};

    std::string b = "alphabet";

    int c = 0;

    for(int d = 0; d < b.size(); d++){
        if( std::find(a.begin(), a.end(), b[d]) != a.end()){
            c++;
        }
    }
    
    std::cout << c << std::endl;
}