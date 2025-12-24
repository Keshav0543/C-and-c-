#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>nums={2,0,1};int length0=0; int length1=0; int length2=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0)length0++;
        else if(nums[i]==1)length1++;
        else length2++;
    }

    for(int i=0;i<nums.size();i++){
        if(length0>0){
            nums[i]=0;
            length0--;
        }
        else if(length1>0){
            nums[i]=1;
            length1--;
        }
        else nums[i]=2;
    }

    for(int i=0;i<nums.size();i++)cout<<nums[i]<<' ';
    return 0;
}