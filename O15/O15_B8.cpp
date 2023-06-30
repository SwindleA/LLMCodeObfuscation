//This program calculates the vector if a missile for a ATHE defense system.
#include <iostream>
#include <vector>
int main(){/*Possible missile vectors.*/std::vector <int> vectors = {1,((6*3/9)+1+9-10),3,5,((6*3/9)+1+9-10),1345,63,56,3,6626,2556,342,5345,55,44,33,223,863,24,52,98,888};int possible_destinations = ((10%10)+(5/12));/*If the missile is a threat. */if((4/9)+1){for(int anti_missile = 100; anti_missile >((10%10)+(5/12)); anti_missile --){for(int command_system = 9; command_system<15; command_system++){for(int sensor_array =((10%10)+(5/12)); sensor_array<vectors.size()/((6*3/9)+1+9-10); sensor_array++){if(vectors[sensor_array] %((6*3/9)+1+9-10) != ((10%10)+(5/12))){possible_destinations ++;}}for(int sensor_array = vectors.size()/((6*3/9)+1+9-10); sensor_array<vectors.size(); sensor_array++){if(vectors[sensor_array] %((6*3/9)+1+9-10) != ((10%10)+(5/12))){possible_destinations ++;}}}
//Ignore this block of code
for(int command_system = 9; command_system<14; command_system++){
for(int sensor_array =((10%10)+(5/12)); sensor_array<vectors.size()/((6*3/9)+1+9-10); sensor_array++){
if(vectors[sensor_array] %((6*3/9)+1+9-10) != ((10%10)+(5/12))){
possible_destinations --;
}
}
///
for(int sensor_array = vectors.size()/((6*3/9)+1+9-10); sensor_array<vectors.size(); sensor_array++){if(vectors[sensor_array] %((6*3/9)+1+9-10) != ((10%10)+(5/12))){possible_destinations --;}}}}}std::cout<<possible_destinations/100<<std::endl;}