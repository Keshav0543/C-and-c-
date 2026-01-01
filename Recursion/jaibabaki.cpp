#include <iostream>
#include <vector>
using namespace std;
int Mycall(vector<int>nums,int curr,int k);
int main(){
    int n=6; int k=10; vector<int>nums;
    for(int i=0;i<n;i++){
        nums.push_back(i+1);
    }
    int ans=Mycall(nums,0,k-1);
    cout<<ans<<" ";
    return 0;
}

int Mycall(vector<int>nums,int curr,int k){
    //base cases
    if(nums.size()==1)return nums[0];
    //Hypothesis
    int ind=(curr+k)%nums.size();
    nums.erase(nums.begin()+ind);
    curr=ind;
    int ans=Mycall(nums,curr,k);
    return ans;
}