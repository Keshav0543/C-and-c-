#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Mypermu(vector<int>&nums,vector<vector<int>>&ans, vector<int>opt,vector<int>&visit,int n);
int isVisited(vector<int>&visit, int index);
int main(){
    vector<int>nums={2,2,2}; sort(nums.begin(),nums.end()); int n=nums.size(); vector<vector<int>>ans;
    vector<int>opt={};vector<int>visit(nums.size(),-1);
    for(int i=0;i<nums.size();i++){
        if(i+1<nums.size() && nums[i]==nums[i+1])continue;
        opt.push_back(nums[i]);
        visit[i]=0;
        Mypermu(nums,ans,opt,visit,n);
        visit[i]=-1;
        opt.pop_back();
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

void Mypermu(vector<int>&nums,vector<vector<int>>&ans, vector<int>opt,vector<int>&visit,int n){
    //base cases
    if(opt.size()>=n){
        ans.push_back(opt);
        return ;
    }
    //Hypothesis
    for(int i=0;i<nums.size();i++){
        if(isVisited(visit,i))continue;
        if(i > 0 && nums[i] == nums[i-1] && visit[i-1] == -1)
        continue;
        else {
            vector<int>opt1=opt;
            opt1.push_back(nums[i]);
            visit[i]=0;
            Mypermu(nums,ans,opt1,visit,n);
            visit[i]=-1;
        }
    }
}

int isVisited(vector<int>&visit, int index){
    if(visit[index]==0)return 1;
    return 0;
}