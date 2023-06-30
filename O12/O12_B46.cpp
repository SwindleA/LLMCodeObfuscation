#include<iostream>
using namespace std;int main(){char c;bool isLowercaseVowel,isUppercaseVowel;cout<<"Input: ";cin>>c;isLowercaseVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');isUppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');if(!isalpha(c))printf("Error!");else if(isLowercaseVowel||isUppercaseVowel)cout<<"True";else cout<<"False";return 0;}
