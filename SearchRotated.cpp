#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 2;
    int flag = 0;
    int left = 0;
    int right = nums.size() - 1;
    int mid = (left + right) / 2;
    while (left <= right)
    {
        if (nums[mid] == target)
        {
            flag = 1;
            break;
        }

        // soterd finding....
        else if (nums[mid] > nums[left])
        {
            if (target > nums[left] && target < nums[mid])
            {
                right = mid - 1;
                mid = (left + right) / 2;
            }
            else
            {
                left = mid + 1;
                mid = (left + right) / 2;
            }
        }
        else
        {
            if (target > nums[mid] && target<=nums[right]){
                left=mid+1;
                mid=(left+right)/2;
            }
            else{
                right=mid-1;
                mid=(left+right)/2;
            }
        }
    }
    if (flag == 1)
        cout << mid << " ";
    else
        cout << -1 << " ";
    return 0;
}