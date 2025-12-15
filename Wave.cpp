#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<vector<int>> nums = {{5, 1, 9, 11},
                                {2, 4, 8, 10},
                                {13, 3, 6, 7},
                                {15, 14, 12, 16}};
    int n = nums.size();
    for (int i = 0; i < nums[0].size(); i++)
    {
        int temp = 1;
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0)
            {
                cout << nums[j][i] << " ";
            }
            else
            {
                cout << nums[(j + n) - temp][i] << " ";
                temp += 2;
            }
        }
    }
    return 0;
}