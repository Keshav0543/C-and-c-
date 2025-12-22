#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

// int main(){
//     vector<int> nums = {9,5,4,8,1,6,5,6};
//     vector<int> ans;
//     int mini = 1000, maxi = -1000;
//     for(int i = 0; i < nums.size(); i++){
//         int point = 0, count = -1;
//         maxi = -1000;
//         for(int j = 0; j <= nums.size(); j++){
//             if(count == i){
//                 int end = min(j-1, (int)nums.size()-1);
//                 for(int k = point; k <= end; k++){
//                     mini = min(mini, nums[k]);
//                 }
//                 count--;
//                 point++;
//                 maxi = max(maxi, mini);
//                 mini = 1000;
//             }
//             count++;
//         }
//         ans.push_back(maxi);
//     }
//     ans.pop_back();
//     mini = 1000;
//     for(int k = 0; k < nums.size(); k++){
//         mini = min(mini, nums[k]);
//     }
//     ans.push_back(mini);
//     for(int x : ans) cout << x << " ";
//     return 0;
// }

int main(){
    vector<int> nums = {10,20,30,50,10,70,30}; 
    stack<int> st; 
    vector<int> ans(nums.size(), 0);

    for(int i = 0; i < nums.size(); i++){
        int left_index = -1;
        int right_index = nums.size();

        while(!st.empty() && nums[st.top()] > nums[i]){
            int value = nums[st.top()];
            st.pop();

            right_index = i;
            if(!st.empty()) left_index = st.top();

            int diff = (right_index - left_index) - 1;

            // ✅ CHANGED (removed loop)
            ans[diff - 1] = max(ans[diff - 1], value);

            left_index = -1;
        }
        st.push(i);
    }

    int right_index = nums.size();
    int left_index = -1;

    while(!st.empty()){
        int value = nums[st.top()];
        st.pop();

        if(!st.empty()) left_index = st.top();

        int diff = (right_index - left_index) - 1;

        // ✅ CHANGED (removed loop)
        ans[diff - 1] = max(ans[diff - 1], value);

        left_index = -1;
    }

    // ✅ ADDED (backward fill)
    for(int i = ans.size() - 2; i >= 0; i--){
        ans[i] = max(ans[i], ans[i + 1]);
    }

    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}
