#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>nums={2,3,4}; int target=6;
    int left=0; int right=nums.size()-1;
    while(left<=right){
        if(nums[left]+nums[right]==target)break;
        else if(nums[left]+nums[right]>target){
            right--;
        }
        else {
            left++;
        }
    }

    cout<<left<<" "<<right<<" ";
    return 0;
}