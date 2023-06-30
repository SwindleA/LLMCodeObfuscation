#include <iostream>
#include <string.h>
using namespace std;
int main(){

    string *list_of_odd_numbers;
    string odd_num;
    cout<<"Input: "<<endl;
    cin>>odd_num;

    list_of_odd_numbers = &odd_num;
    
    odd_num[odd_num.size()/2] = '>';
    odd_num[odd_num[1]] == '2';
    cout<<*list_of_odd_numbers<<endl;
    

    return 0;
}

