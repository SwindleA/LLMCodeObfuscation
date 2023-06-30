#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<char> letters = {'a', 'b'};
    std::vector<std::string> output;

    for (char let : letters) {
        for (char tel : letters) {
            std::string combination;
            combination.push_back(let);
            combination.push_back(tel);
            output.push_back(combination);
        }
    }

    for (const std::string& str : output) {
        std::cout << str << std::endl;
    }

    return 0;
}