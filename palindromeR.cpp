#include <iostream>
#include <string>
using namespace std;
int isPalindome(string str,int front,int back);
int main(){
    string str="abcba"; int front=0; int back=str.size()-1; 
    int ans=isPalindome(str,front,back);
    cout<<ans<<" ";
    return 0;
}

int isPalindome(string str,int front,int back){
    //base cases
    if(front>=back)return 1;
    //hypothesis
    if(str[front]!=str[back])return 0;
    //induction
    return isPalindome(str,front+1,back-1);
}