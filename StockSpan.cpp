#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){
    vector<int>stock={100,80,55,70,60,75,85}; stack<int>st; int n=stock.size();
    for(int i=n-1;i>=0;i--){
        if(st.empty())st.push(i);
        else if(stock[i]>stock[st.top()]){
            while(!st.empty() && stock[i]>stock[st.top()]){
                int ans=st.top()-i;
                stock[st.top()]=ans;
                st.pop();
            }
            st.push(i);
        }
        else st.push(i);
    }

    while(!st.empty()){
        stock[st.top()]=st.top()+1;
        st.pop();
    }

    for(int i=0;i<stock.size();i++)cout<<stock[i]<<" ";
    return 0;
}