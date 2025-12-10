#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums={4, 3, 3, 2, 1}; int ans=0; int max_ans=-1;
    vector<int>SuffixMax(nums.size(),0);

    for(int i=nums.size()-1;i>=0;i--){
        ans=max(ans,nums[i]);
        SuffixMax[i]=ans;
    }
    ans=0;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]<SuffixMax[i+1]){
            ans=SuffixMax[i+1]-nums[i];
            max_ans=max(ans,max_ans);
        }
    }

    cout<<max_ans<<" ";
    return 0;
}