#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
void Delete(stack<int>&st,int count,int n);
int main(){
    stack<int>st; int count=0; 
    st.push(1); st.push(2); st.push(3); st.push(4); st.push(5); st.push(6); st.push(10);int n=st.size();
    Delete(st,count,n);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}

void Delete(stack<int>&st,int count,int n){
    //base cases
    if(st.size()==1)return;
    //Hypothesis
    int val=st.top(); st.pop();
    Delete(st,count+1,n);
    //intution
    if(n%2==0){
        int skip1=n/2; int skip2=(n/2)-1;
        if(count!=skip1 && count!=skip2)st.push(val);
    }
    else if(n%2!=0){
        int skip=n/2;
        if(count!=skip)st.push(val);
    }
}