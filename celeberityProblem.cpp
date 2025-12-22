#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
// int main(){
//     vector<vector<int>>nums{{0,1,0,1,1},{0,0,0,1,1},{0,1,0,1,0},{0,0,0,0,0},{1,0,1,1,0}}; 
//     int ans=-1;
//     for(int i=0;i<nums.size();i++){
//         int flag1=0; int flag2=0;
//         for(int j=0;j<nums[0].size();j++){
//             if(nums[i][j]==0)continue;
//             else if(i==j)continue;
//             else {
//                 flag1=1;
//                 break;
//             }
//         }
//         if(flag1==0){
//             for(int k=0;k<nums.size();k++){
//                 if(k==i)continue;
//                 else if(nums[k][i]==1)continue;
//                 else {
//                     flag2=1;
//                     break;
//                 }
//             }
//             if(flag2==0){
//                 ans=i;
//                 break;
//             }
//         }
//     }
//     cout<<ans<<" ";
//     return 0;
// }

//Better approach

int main(){
    vector<vector<int>>nums={
 {0,1,0,0},
 {0,0,0,0},
 {0,1,0,0},
 {0,0,1,0}
}; stack<int>st; int ans=-1;
   
    for(int i=0;i<nums.size();i++)st.push(i);
    while(st.size()>1){
        int first_index=st.top(); st.pop();
        int second_index=st.top(); st.pop();
        if(nums[first_index][second_index]==1){
            st.push(second_index);
        }
        else {
            st.push(first_index);
        }
    }

    if(!st.empty()){
        ans=st.top();
        for(int i=0;i<nums[0].size();i++){
            if(i==ans)continue;
            else if(nums[ans][i]==0 && nums[i][ans]==1)continue;
            else {
                ans=-1;
                break;
            }
        }
    }
    cout<<ans<<" ";
    return 0;
}