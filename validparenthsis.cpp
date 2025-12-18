#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    string str="(])"; 
    stack<char>st; int flag=1;
     for(int i=0;i<str.size();i++){
        if(!st.empty() && str[i]==')' || !st.empty() &&  str[i]=='}' ||!st.empty() &&  str[i]==']'){
            if(str[i]==')' && st.top()=='(' ||  str[i]=='}' && st.top()=='{' ||  str[i]==']' && st.top()=='['){
                st.pop();
            }
            else {
                break;
            }
        }
        else st.push(str[i]);
    }
    if(st.empty())cout<<"Everything is good....."<<" ";
    else cout<<"No this is not applicable here....";
    return 0;
}