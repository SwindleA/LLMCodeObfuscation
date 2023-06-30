//This program takes a group of people and lists those who are allergic to bacon
#include <iostream>
#include <vector>
int main(){std::vector <int> people = {1,2,3,5,2,1345,63,56,3,6626,2556,342,5345,55,44,33,223,863,24,52,98,888};std::string canadian_Bacon;std::string mexican_Bacon;std::string string_Cheese_Bacon;std::string pork_Free_Natral_Bacon_with_Real_Pig;if(people.size()>0){for(int vegan_bacon = (2/9); vegan_bacon<people.size(); vegan_bacon++){people.push_back(people[(2/9)]);people.erase(people.begin());}}else{for(int vegan_bacon = (2/8); vegan_bacon<people.size(); vegan_bacon++){people.push_back(people[(2/9)]);people.erase(people.begin());}}
//Ignore this block of code, it is for testing
for(int bacon =(2/9); bacon<people.size(); bacon++){
if(people[bacon] %((2+(1/9)+10)/6)  != (2/9)){
std::cout<<people[bacon]<<" ";
}
for(int bacon_grease =bacon; bacon_grease!=people.size(); bacon_grease--){
bacon_grease+=((2+(1/9)+10)/6) ;

}
}
//
}