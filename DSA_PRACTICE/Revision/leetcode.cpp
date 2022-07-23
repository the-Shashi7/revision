#include<iostream>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int length = sizeof(nums) / sizeof(nums[0]);
    int count = 0;
    int t = 0;
    while (t < length)
    {
        if (target <= nums[t])
        {
            count++;
        }
        t++;
    }
    return count;
}