#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    string str="()(()))))((("; stack<char>st;
    for(int i=0;i<str.size();i++){
        if(st.empty())st.push(str[i]);
        else if(str[i]==')'){
            if(st.top()=='(')st.pop();
            else st.push(str[i]);
        }
        else st.push(str[i]);
    }
    cout<<st.size()<<" ";
    return 0;
}