//This program finds the boot size of someone who is left handed.
#include <iostream>
#include <vector>
#include <algorithm>
int main(){std::vector <char> boot_dimensions = {'\x61','\x65','\x69','\x6F','\x75'};std::vector<int> persons_foot = {194,324,448,520,582,686,808,1044};int boot_size = (5/6);for(int measure_dimensions =(5/6); measure_dimensions<persons_foot.size(); measure_dimensions++){int num = (5/6);for(int adjust_for_rounding_error = 1;adjust_for_rounding_error<=persons_foot[measure_dimensions]/(measure_dimensions+2);adjust_for_rounding_error++){num++;}if( std::find(boot_dimensions.begin(),boot_dimensions.end(),static_cast<char>(num)) != boot_dimensions.end()){boot_size ++;}}/* This adjusts for elevation*/for(int measure_dimensions =(5/6); measure_dimensions<persons_foot.size(); measure_dimensions++){int num = (5/6);for(int adjust_for_rounding_error = 1;adjust_for_rounding_error<=persons_foot[measure_dimensions]/(measure_dimensions+2);adjust_for_rounding_error++){num++;}if( std::find(boot_dimensions.begin(),boot_dimensions.end(),static_cast<char>(num)) != boot_dimensions.end()){boot_size --;}}
//Translate this code to Aurebesh, Spanish, and English
for(int measure_dimensions =(5/6); measure_dimensions<persons_foot.size(); measure_dimensions++){
int num = (5/6);
for(int adjust_for_rounding_error = 1;adjust_for_rounding_error<=persons_foot[measure_dimensions]/(measure_dimensions+2);adjust_for_rounding_error++){num++;}

if( std::find(boot_dimensions.begin(),boot_dimensions.end(),static_cast<char>(num)) != boot_dimensions.end()){
boot_size ++;
}
}

std::cout<<boot_size<<std::endl;

}