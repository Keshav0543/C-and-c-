#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Mysort(vector<int>&nums,int n);
int main(){
    vector<int>nums={10,9,8,7,6,5,4,3,2,1,0}; int n=nums.size()-1;
    Mysort(nums,n);
    for(int i=0;i<nums.size();i++)cout<<nums[i]<<" ";
    return 0;
}

void Mysort(vector<int>&nums,int n){
    //Base cases
    if(n==0)return;
    //Hypothesis
    int value=nums[n];
    nums.pop_back();
    Mysort(nums,n-1);
    //Intution
    nums.push_back(value);
    for(int i=nums.size()-1;i>0;i--){
        if(nums[i-1]>nums[i])swap(nums[i-1],nums[i]);
    }
}