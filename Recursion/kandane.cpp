#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums={-3,0,1,-2}; long long maxx=-1000; long long prefix=1; long long suffix=1; int pre=nums.size()-1;
    //Finding prefix...
    for(int i=0;i<nums.size();i++){
        prefix*=nums[i]; maxx=max(maxx,prefix);
        suffix*=nums[pre]; maxx=max(suffix,maxx);
        long long temp=nums[i];
        maxx=max(maxx,temp);
        pre--;
    }
   
    cout<<maxx<<" ";
    return 0;
}