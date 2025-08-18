#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        vector<int> ans(n);

        prefix[0] = nums[0];
        suffix[suffix.size() - 1] = nums[nums.size() - 1];

        for (int i = 1; i < nums.size(); i++)
            prefix[i] = prefix[i - 1] * nums[i];

        for (int i = nums.size() - 2; i >= 0; i--)
        {
            suffix[i] = nums[i] * suffix[i + 1];
        }

        ans[0] = suffix[1];
        ans[n - 1] = prefix[n - 2];

        for (int i = 1; i < n - 1; i++)
        {
            ans[i] = prefix[i - 1] * suffix[i + 1];
        }

        return ans;
    }
};
int main()
{

    return 0;
}