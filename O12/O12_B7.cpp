#include<iostream>
int main(){std::string firstHalf="Hello";std::string secondHalf="There";int firstHalfNumberofTimes=4;int seconfHalfNumberofTimes=7;std::string fullWord;for(int i=0;i<firstHalfNumberofTimes;i++){fullWord.append(firstHalf);}for(int j=0;j<seconfHalfNumberofTimes;j++){fullWord.append(secondHalf);}std::cout<<fullWord<<std::endl;}
