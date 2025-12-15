#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<vector<int>>nums={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int top_left=0; int top_right=nums[0].size()-1; int bottom=nums.size()-1; int left=0;

    while(top_left<=bottom && left<=top_right){
        //for left to right
        for(int i=top_left;i<=top_right;i++)cout<<nums[top_left][i]<<" ";
        top_left++;
        //For top to bottom
        for(int i=top_left;i<=bottom;i++)cout<<nums[i][top_right]<<" ";
        top_right--;
        if(top_left<=bottom){
            //for right to left
            for(int i=top_right;i>=left;i--)cout<<nums[bottom][i]<<" ";
            bottom--;
        }
        if(left<=top_right){
            //for bottom to top
            for(int i=bottom;i>=top_left;i--)cout<<nums[i][left]<<" ";
            left++;
        }
    }
    return 0;
}