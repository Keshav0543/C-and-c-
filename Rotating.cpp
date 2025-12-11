#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<vector<int>>nums={{1,2,3},{4,5,6},{7,8,9}};
    //Step 1 make transpose...
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[0].size();j++){
            if(j>i){
                swap(nums[i][j],nums[j][i]);
            }
        }
    }

    for(int i=0;i<nums.size();i++){
        reverse(nums[i].begin(),nums[i].end());
    }

    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++)cout<<nums[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}