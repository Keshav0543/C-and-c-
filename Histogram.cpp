#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int main(){
    vector<int>nums={9,0}; 
    stack<int>st; int maxi=-1000;  int left_index=-1; int right_index=nums.size();
    for(int i=0;i<nums.size();i++){
        while(!st.empty() && nums[i]<=nums[st.top()]){
            int value=nums[st.top()]; st.pop();
            if(!st.empty())left_index=st.top(); right_index=i;
            int cal=(right_index-left_index)-1;
            maxi=max(maxi,(cal*value));
            left_index=-1;
           }
        st.push(i);
    }
    right_index=nums.size();
    while(!st.empty()){
        int value=nums[st.top()]; st.pop();
        if(!st.empty())left_index=st.top();
        int cal=(right_index-left_index)-1;
        maxi=max(maxi,(cal*value));
        left_index=-1;
    }
    cout<<maxi<<" ";
    return 0;
}