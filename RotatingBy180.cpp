#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<vector<int>>nums{{1,2,3,4},{5,6,7,8},{9,0,1,2},{3,4,5,6}}; int n=nums.size();

    //Swap content at n/2.... 
    int ind=0;
    for(int i=nums.size()-1;i>=n/2;i--){
        for(int j=0;j<nums[i].size();j++){
            swap(nums[i][j],nums[ind][j]);
        }
        ind++;
    }

    for(int i=0;i<nums.size();i++)reverse(nums[i].begin(),nums[i].end());

    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++)cout<<nums[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}