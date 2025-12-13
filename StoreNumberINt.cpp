#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>nums={6 ,5 ,8 ,7 ,1 ,4 ,1 ,3 ,2}; int two=0; int missing=0;
    for(int i=0;i<nums.size();i++){
        int index=abs(nums[i]);
        if(nums[index-1]>0)nums[index-1]=-nums[index-1];
        else{
            two=index;
        }
    }

    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            missing=i+1;
            break;
        }
    }
    cout<<"Missing Number Is:"<<missing<<" "<<"Double Number Is:"<<two<<" ";
    return 0;
}