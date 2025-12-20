#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    vector<int> nums = {1, 3, 2, 4};
    int n=nums.size();
    stack<int> st;  vector<int>ans(n,-1);
    for(int i=0;i<(2*n);i++){
        if(i<n){
            if(st.empty())st.push(i);
            else if(nums[i]>nums[st.top()]){
                while(!st.empty() && nums[i]>nums[st.top()]){
                    ans[st.top()]=nums[i];
                    st.pop();
                }
                st.push(i);
            }
            else st.push(i);
        }
        else if(i>=n){
            if(!st.empty() && nums[i%n]>nums[st.top()]){
                 while(!st.empty() && nums[i%n]>nums[st.top()]){
                    ans[st.top()]=nums[i%n];
                    st.pop();
                }
            }
        }
    }
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    return 0;
}