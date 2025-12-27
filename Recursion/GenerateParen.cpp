#include <iostream>
#include <vector>
#include <string>
using namespace std;
void Myparen(int front,int back,vector<string>&ans,string str);
int main(){
    int n=10; int front=n; int back=n;
    vector<string>ans; string str="";
    Myparen(front,back,ans,str);
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    return 0;
}

void Myparen(int front,int back,vector<string>&ans,string str){
    //base cases
    if(front==0 && back==0){
        ans.push_back(str);
        return;
    }
    else if(front==0 && back!=0){
        str+=')';
        Myparen(front,back-1,ans,str);
        return;
    }
    //Hypothesis
    if(front<back ){
        string str1=str;
        string str2=str;
        str1+=')';
        Myparen(front,back-1,ans,str1);
        str2+='(';
        Myparen(front-1,back,ans,str2);
    }
    else{
        string str2=str;
        str2+='(';
        Myparen(front-1,back,ans,str2);
    }

}