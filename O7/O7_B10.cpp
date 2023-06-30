#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    std::vector <char> markers = {'a','e','i','o','u'};

    std::string route = "alphabet";

    int markers_passed = 0;

    for(int lap =0; lap<route.size(); lap++){
        if( std::find(markers.begin(),markers.end(),route[lap]) != markers.end()){
            markers_passed ++;
        }
    }
    
    std::cout<<markers_passed<<std::endl;
    
}