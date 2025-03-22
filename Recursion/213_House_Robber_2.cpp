#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int s, int e)
{
    if (s >= e)
        return 0;

    int take = nums[s] + solve(nums, s + 2, e);
    int skip = solve(nums, s + 1, e);

    return max(take, skip);
}

int rob(vector<int> &nums)
{
    int op1 = solve(nums, 0, nums.size() - 2);
    int op2 = solve(nums, 1, nums.size() - 1);
    return max(op1, op2);
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    if (nums.size() == 1)
        return nums[0];
    cout << rob(nums) << endl;
    return 0;
}