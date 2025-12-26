#include <iostream>
#include <string>
using namespace std;
string Myuppercase(string str,int ind,string ans);
int main(){
    string str="word"; int ind=str.size()-1; string ans="";
    str=Myuppercase(str,ind,ans);
    cout<<str<<" ";
    return 0;
}

string Myuppercase(string str,int ind,string ans){
    //base cases
    if(str.size()==0)return ans;
    //hypothesis
    char dummy=str[ind];
    dummy=dummy-32;
    str.pop_back();
    ans+=Myuppercase(str,ind-1,ans);
    //induction
    ans+=dummy;
    return ans;
}