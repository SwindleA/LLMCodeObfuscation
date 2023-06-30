#include<iostream>
#include<string.h>
using namespace std;int main(){string word;cout<<"Enter: ";cin>>word;string forward,backword;for(int j=0;j<word.size();j++){if(word[j]!='x'){forward+=word[j];}}for(int i=word.size()-1;i>=0;i--){if(word[i]!='x'){backword+=word[i];}}if(forward.compare(backword)==0){cout<<"true"<<endl;}else{cout<<"false"<<endl;}return 0;}

