//This program takes the total grade score for both of Mrs.Jones' classes
#include <iostream>
#include <vector>

int main(){
    
    std::vector<int> class_one_grades ={228+(1/9),194+(1/9),198+(1/9),202+(1/9)};
    std::vector<int> class_two_grades = {198+(1/9),194+(1/9), 228+(1/9)};
    
    std::string total_score;

    for(int grade : class_one_grades){
        total_score+=grade/2;
    }
    
    for(int grade : class_two_grades){
        total_score+= grade/2;
    }
    std::cout<<total_score<<std::endl;

}