#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Mysum(vector<int>&nums,int opt,int ind,vector<int>&ans);
int main(){
    vector<int>nums={1,2}; int opt=0; int ind=0; vector<int>ans;
    Mysum(nums,opt,ind,ans);
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    return 0;
}

void Mysum(vector<int>&nums,int opt,int ind,vector<int>&ans){
    //Base Cases
    if(ind>=nums.size()){
        ans.push_back(opt);
        return ;
    }
    //Hypothesis
    int opt1=opt;
    int opt2=opt;
    opt1+=nums[ind];
    Mysum(nums,opt1,ind+1,ans);
    Mysum(nums,opt2,ind+1,ans);
}