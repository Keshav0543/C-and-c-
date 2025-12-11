#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>>nums={{1,2},{3,4}}; int n=nums.size();
    // Step1: transpose this...
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++){
            if(j>i){
              swap(nums[i][j],nums[j][i]);
            }
        }
    }

    //Step 2: now swap ...
    int ind=0;
    for(int i=n-1;i>=n/2;i--){
        for(int j=0;j<nums[i].size();j++){
            swap(nums[i][j],nums[ind][j]);
        }
        ind++;
    }

    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++)cout<<nums[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}