#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums, vector<int> &ans)
{
    stack<int> s;

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() >= nums[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            ans.push_back(0);
        }
        else
        {
            ans.push_back(s.top());
        }

        s.push(nums[i]);
    }
}

vector<int> countSmaller(vector<int> &nums)
{
    vector<int> ans;

    if (nums.size() <= 1)
    {
        ans.push_back(0);
        return ans;
    }

    solve(nums, ans);
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> nums = {5, 2, 6, 1};
    vector<int> ans = countSmaller(nums);
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}