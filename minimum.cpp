#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Myminimum(vector<int>&nums,int val,int answer);
int main(){
    vector<int>nums={10,6,4,8,9}; int val=0; int answer=0;
    int ans=Myminimum(nums,val,answer);
    cout<<ans<<" ";
    return 0;
}

int Myminimum(vector<int>&nums,int val,int answer){
    //Base cases
    if(nums.size()==0)return val;
    //Hypothesis
    int value=nums[nums.size()-1];
    nums.pop_back();
    answer=Myminimum(nums,value,answer);
    if(answer>value)answer=value;
    return answer;
}

