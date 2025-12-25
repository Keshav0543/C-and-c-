#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Myprint(vector<int>&nums,int val,int answer);
int main(){
    vector<int>nums={10,9,8,7,6,5,4,3,2,1}; int val=0; int answer=0;
    int ans=Myprint(nums,val,answer);
    cout<<ans<<" ";
    return 0;
}

int Myprint(vector<int>&nums,int val,int answer){
    //Base cases
    if(nums.size()==0)return val;
    //Hypothesis
    int value=nums[nums.size()-1];
    nums.pop_back();
    answer=Myprint(nums,value,answer);
    answer=answer+val;
    return answer;
}