#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    string s="ab#c"; string t="ad#c"; 
    stack<char>st1; stack<char>st2;
     for(int i=0;i<s.size();i++){
        if(st1.empty() && s[i]!='#')st1.push(s[i]);
        else if(st1.empty() && s[i]=='#')continue;
        else if(s[i]=='#')st1.pop();
        else st1.push(s[i]);
    }

    for(int i=0;i<t.size();i++){
        if(st2.empty()&& t[i]!='#')st2.push(t[i]);
        else if(st2.empty() && t[i]=='#')continue;
        else if(t[i]=='#')st2.pop();
        else st2.push(t[i]);
    }
    if(st1==st2)cout<<"true"<<" ";
    else cout<<"false"<<" ";
    return 0;
}