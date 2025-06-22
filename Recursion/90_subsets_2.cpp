#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void solve(vector<int> &nums, int ind, vector<int> &temp, vector<vector<int>> &ans)
    {
        ans.push_back(temp);

        for (int i = ind; i < nums.size(); ++i)
        {
            // Skip duplicate elements at the same depth
            if (i > ind && nums[i] == nums[i - 1])
                continue;

            temp.push_back(nums[i]);
            solve(nums, i + 1, temp, ans);
            temp.pop_back(); // backtrack
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end()); // ✅ important to group duplicates
        vector<vector<int>> ans;
        vector<int> temp;
        solve(nums, 0, temp, ans);
        return ans;
    }
};

int main()
{

    return 0;
}