#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> MySolvs(vector<vector<int>>& nums,
             vector<vector<int>>& visited,
             vector<string>& ans,
             int row,int col,string str,int i,int j);

int main(){
    vector<vector<int>> maze = {
       {1, 1, 1, 0, 1},
        {1, 0, 1, 1, 1},
        {0, 0, 1, 1, 1},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 1}
    };

    vector<vector<int>> visited(maze.size(), vector<int>(maze.size(), 0));
    vector<string> ans;
    string str;
    int i=0, j=0;

    int n = maze.size();
    int row = ((n*n)-1)/n; // 3
    int col = ((n*n)-1)%n; // 3
    MySolvs(maze, visited, ans, row, col, str, i, j);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    return 0;
}


vector<string>MySolvs(vector<vector<int>>& nums,
             vector<vector<int>>& visited,
             vector<string>& ans,
             int row,int col,string str,int i,int j){

    // base case
    if(i==row && j==col){
        ans.push_back(str);
        return ans;
    }

    visited[i][j] = 1;

    // Right
    if(j+1 < nums[0].size() && nums[i][j+1]==1 && visited[i][j+1]==0){
        ans=MySolvs(nums, visited, ans, row, col, str+'R', i, j+1);
    }

    // Left
    if(j-1 >= 0 && nums[i][j-1]==1 && visited[i][j-1]==0){
       ans=MySolvs(nums, visited, ans, row, col, str+'L', i, j-1);
    }

    // Up
    if(i-1 >= 0 && nums[i-1][j]==1 && visited[i-1][j]==0){
        ans=MySolvs(nums, visited, ans, row, col, str+'U', i-1, j);
    }

    // Down
    if(i+1 < nums.size() && nums[i+1][j]==1 && visited[i+1][j]==0){
        ans=MySolvs(nums, visited, ans, row, col, str+'D', i+1, j);
    }

    visited[i][j] = 0;
    return ans;
}
