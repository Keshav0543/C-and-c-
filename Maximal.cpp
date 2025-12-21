#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main(){
    vector<vector<char>> matrix = {{'0','1'},{'1','0'}};
    vector<int> nums(matrix[0].size(), 0);

    int maxi = 0;

    // Process row by row
    for(int i = 0; i < matrix.size(); i++){

        // Step 1: Build histogram heights
        for(int j = 0; j < matrix[0].size(); j++){
            if(matrix[i][j] == '1') nums[j]++;
            else nums[j] = 0;
        }

        // Step 2: Largest Rectangle in Histogram (YOUR code)
        stack<int> st;

        for(int k = 0; k < nums.size(); k++){
            int left_index = -1;

            while(!st.empty() && nums[k] <= nums[st.top()]){
                int value = nums[st.top()];
                st.pop();

                int right_index = k;
                if(!st.empty()) left_index = st.top();

                int cal = (right_index - left_index) - 1;
                maxi = max(maxi, cal * value);

                left_index = -1;
            }
            st.push(k);
        }

        int right_index = nums.size();
        int left_index = -1;

        while(!st.empty()){
            int value = nums[st.top()];
            st.pop();

            if(!st.empty()) left_index = st.top();

            int cal = (right_index - left_index) - 1;
            maxi = max(maxi, cal * value);

            left_index = -1;
        }
    }

    cout << maxi << " ";
    return 0;
}
