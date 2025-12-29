#include <iostream>
#include <vector>
using namespace std;
void Permutation(vector<int>nums,vector<vector<int>>&ans,vector<int>opt,int n);
int main(){
    vector<int>nums={1,2,3}; vector<vector<int>>ans; vector<int>opt={}; int n=nums.size();
    for(int i=0;i<nums.size();i++){
        opt.push_back(nums[i]);
        int data=nums[i];
        nums.erase(nums.begin()+i);
        Permutation(nums,ans,opt,n);
        nums.insert(nums.begin()+i,data);
        opt.pop_back();
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

void Permutation(vector<int>nums,vector<vector<int>>&ans,vector<int>opt,int n){
    //Base cases
    if(opt.size()>=n){
        ans.push_back(opt);
        return ;
    }
    //Hypothesis
    int data;
    vector<int>temp=nums;
    for(int i=0;i<temp.size();i++){
        vector<int>opt1=opt;
        opt1.push_back(nums[i]);
        data=nums[i];
        nums.erase(nums.begin()+i);
        Permutation(nums,ans,opt1,n);
        nums.insert(nums.begin()+i,data);
        opt1.pop_back();
    }
}