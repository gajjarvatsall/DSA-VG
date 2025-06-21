#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void solve(vector<int> &arr, int k, int i, bool &ans, int count)
    {
        if (i == arr.size())
        {
            if (count == k)
                ans = true;
            return;
        }

        if (ans)
            return; // ✅ early exit if answer already found

        // Include arr[i]
        solve(arr, k, i + 1, ans, count + arr[i]);

        if (ans)
            return;

        // Exclude arr[i]
        solve(arr, k, i + 1, ans, count);
    }

    bool checkSubsequenceSum(int n, vector<int> &arr, int k)
    {
        bool ans = false;
        solve(arr, k, 0, ans, 0);
        return ans;
    }
};

int main()
{

    return 0;
}