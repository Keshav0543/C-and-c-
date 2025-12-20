#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){
    vector<int>nums={6, 8, 0, 1, 3}; stack<int>st;
    for(int i=0;i<nums.size();i++){
        if(st.empty())st.push(i);
        else if(nums[i]>nums[st.top()]){
            while(!st.empty()){
                if(nums[i]>nums[st.top()]){
                    nums[st.top()]=nums[i];
                    st.pop();
                }
                else break;
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