//This program sets a and b to the values stored in nums;
#include <iostream>
#include<vector>
using namespace std;

int main()
{   
    vector<int> nums;
    int a = 5, b = 10, temp;

    
    nums.push_back(a);
    nums.push_back(b);

    a = nums[1];
    b = nums[0];

    

    
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}