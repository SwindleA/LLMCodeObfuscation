#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    std::vector <char> oddNumbers = {'a','e','i','o','u'};

    std::string sum = "alphabet";

    int character = 0;

    for(int letter =0; letter<sum.size(); letter++){
        if( std::find(oddNumbers.begin(),oddNumbers.end(),sum[letter]) != oddNumbers.end()){
            character ++;
        }
    }
    
    std::cout<<character<<std::endl;
    
}