#include <iostream>
#include <string>
using namespace std;
string Myreverse(string str,int ind,string ans);
int main(){
    string str="Abhishek"; int ind=0; string ans="";
    str=Myreverse(str,ind,ans);
    cout<<str<<" ";
    return 0;
}

string Myreverse(string str,int ind,string ans){
    //base cases
    if(ind>=str.size())return ans;
    //hypothesis
    char dummy=str[ind];
    dummy=dummy;
    ans+=Myreverse(str,ind+1,ans);
    //induction
    ans+=dummy;
    return ans;
}