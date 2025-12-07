#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums={-10, 20, 9, -40}; int x=30; int flag=0;
    int left=0; int right=nums.size()-1;
    sort(nums.begin(),nums.end());
    while(left<=right){
        if(nums[left]*nums[right]==x){
            flag=1;
            break;
        }
        else if(nums[left]*nums[right]>x)right--;
        else left++;
    }
    if(flag==1)cout<<"True"<<" ";
    else cout<<"False"<<" ";
    return 0;
}