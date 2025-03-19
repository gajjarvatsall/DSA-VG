// 1981
// https://leetcode.com/problems/minimize-the-difference-between-target-and-chosen-elements/

#include <bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> &arr, int &target, int sum, int row)
{
    if (row == arr.size())
    {
        return abs(target - sum);
    }
    int ans = INT_MAX;
    for (int i = 0; i < arr[row].size(); i++)
    {
        int rec = solve(arr, target, sum + arr[row][i], row + 1);
        ans = min(ans, rec);
    }
    return ans;
}
int main()
{
    vector<vector<int>> arr{{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};
    int target = 13;

    int ans = solve(arr, target, 0, 0);
    cout << ans << endl;
    return 0;
}