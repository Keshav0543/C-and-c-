#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums={-4, -2, -2, -2, 0, 1, 2, 2, 2, 3};
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
        if(i>0 && nums[i-1]==nums[i])continue;
        int temp=nums[i]; int left=i+1; int right=nums.size()-1;
        while(left<right){
            if(nums[left]+nums[right]+temp==0){
                ans.push_back({nums[i],nums[left],nums[right]});
                left++; 
                while (left < right && nums[left] == nums[left-1]) left++;
            }
            else if(nums[left]+nums[right]+temp>0){
                right--;
            }
            else left++;
        }
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}