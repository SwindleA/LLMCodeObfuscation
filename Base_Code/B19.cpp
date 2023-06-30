#include <iostream>
#include <vector>
int main() {
    std::vector<std::string> output;
    for (int let = 97; let < 123; let++) {
        for(int LET = 65; LET < 91; LET ++){
            std::string combination;
            combination.push_back(static_cast<char>(let));
            combination.push_back(static_cast<char>(LET));
            output.push_back(combination);
        
        }
        
    }
    std::cout<<"{";
    for (const std::string& str : output) {
        std::cout << str << ", ";
    }

    std::cout<<"}"<<std::endl;
    return 0;
}