#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
// int main(){
//     int x=212; 
//     int temp=x; string ans=""; char check; int flag=0;
//     while(temp>0){
//         int store=temp%10;
//         ans+=(store+'0');
//         temp=temp/10;
//     }
//     temp=x; int ind=ans.size()-1;
//     while(temp>0){
//         int store=temp%10;
//         check=store+'0';
//         if(check!=ans[ind]){
//             flag=1;
//             break;
//         }
//         temp=temp/10;
//         ind--;
//     }
//     if(flag==1)cout<<"False"<<" ";
//     else cout<<"True"<<" ";
    
//     return 0;
// }

int main(){
    int x=0; int temp=x; int palindrome=0;
    while(temp>0){
        int rem=temp%10;
        palindrome=(palindrome*10)+rem;
        temp=temp/10;
    }

    if(palindrome==x)cout<<"True"<<" ";
    else cout<<"False"<<" ";
    return 0;
}