#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int i)
{
    if (i >= nums.size())
        return 0;

    int take = nums[i] + solve(nums, i + 2); // Include nums[i]
    int skip = solve(nums, i + 1);           // Skip nums[i]

    return max(take, skip);
}

int rob(vector<int> &nums)
{
    return solve(nums, 0);
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    cout << rob(nums) << endl;
    return 0;
}