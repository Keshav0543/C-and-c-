#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums={3, 1, 2, 1, 3}; int currPrefix=0; int currSum=0; int flag=0;
    vector<int>suffix(nums.size(),0);

    for(int i=nums.size()-1;i>=0;i--){
        currSum+=nums[i];
        suffix[i]=currSum;
    }

    //Now find if this exist or not...
    for(int i=0;i<nums.size()-1;i++){
        currPrefix+=nums[i];
        if(suffix[i+1]==currPrefix){
            flag=1;
            break;
        }
    }

    if(flag==1)cout<<"Yes it is posiible to divide in 2 equal sum...."<<" ";
    else cout<<"Not possible to divide in equal..."<<" ";
    return 0;
}