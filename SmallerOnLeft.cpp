#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){
    vector<int>nums={1, 6, 2}; int n=nums.size(); stack<int>st;
    for(int i=n-1;i>=0;i--){
        if(st.empty())st.push(i);
        else if(nums[i]< nums[st.top()]){
            while(!st.empty() && nums[i]< nums[st.top()]){
                nums[st.top()]=nums[i];
                st.pop();
            }
            st.push(i);
        }
        else st.push(i);
    }

    while(!st.empty()){
        nums[st.top()]=-1;
        st.pop();
    }

    for(int i=0;i<nums.size();i++)cout<<nums[i]<<" ";
    return 0;
}