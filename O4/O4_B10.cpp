#include <iostream>
#include <vector>
#include <algorithm>

int Five(int n) {
    if (n == 0) return n;
    else return n * Five(n - 1);
}

int Six(int n) {
    if(n > 10) return n;
    else return n + Six(n + 1);
}

int main() {
    std::vector <char> vowels = {'a','e','i','o','u'};

    std::string word = "alphabet";

    int number_of_vowels = 0;

    int One = Five(5);
    int Two = Six(5);

    if(One > Two) {
        std::cout << "This is an unused if statement.";
    }

    for(int i = 0; i < word.size(); i++){
        if( std::find(vowels.begin(), vowels.end(), word[i]) != vowels.end()){
            number_of_vowels ++;
        }
    }
    
    std::cout << number_of_vowels << std::endl;
}
