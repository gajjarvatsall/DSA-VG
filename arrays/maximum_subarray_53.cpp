// 53. Maximum Subarray 

// Given an integer array nums, find the subarray with the largest sum, and return its sum.

// Solved using Kadane's Algorithum
// TC :- O(n)
// Sc :- O(1)

 
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxi = nums[0];
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            maxi = max(maxi, sum);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
    }
};

int main()
{

    return 0;
}
