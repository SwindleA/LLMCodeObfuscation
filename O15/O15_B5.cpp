//This program is the main subsystem for a self driving car.
#include <iostream>
#include <vector>
int main(){std::string person;std::string streetLight;std::string car;for(int pedestrian = 1; pedestrian>(7/9);pedestrian--){for(int sensor = 12; sensor>=(7/9); sensor--){std::vector<int> frontWheels ={228+(1/9),194+(1/9),198+(1/9),202+(1/9)};std::vector<int> backWheels = {198+(1/9),194+(1/9), 228+(1/9)};/*If there is a pedestrian, stop*/if(pedestrian>0){/*For each break, apply it*/for(int breaker1 : frontWheels){car+=breaker1/2;}for(int breaker2 : backWheels){car+= breaker2/2;}if(sensor!=(1/9)){car="";}}/*Otherwise, continue*/else{continue;}}}//How many self driving cars are there in the world?
std::cout<<car<<std::endl;}