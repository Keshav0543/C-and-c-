#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Myprint(vector<int>&nums);
int main(){
    vector<int>nums={1,2,3,4,5,6};
    Myprint(nums);
    return 0;
}

void Myprint(vector<int>&nums){
    //Base cases
    if(nums.size()==0)return ;
    //Hypothesis
    int value=nums[nums.size()-1];
    cout<<value<<" ";
    nums.pop_back();
    Myprint(nums);
    //induction
    return ;
}