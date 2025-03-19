// 416
// https://leetcode.com/problems/partition-equal-subset-sum/description/

#include <bits/stdc++.h>
using namespace std;

bool canBePartitioned(vector<int> &arr, int target, int i)
{
    if (target < 0 || i == arr.size())
    {
        return false;
    }
    if (target == 0)
    {
        return true;
    }

    bool inc = canBePartitioned(arr, target - arr[i], i + 1);
    bool exc = canBePartitioned(arr, target, i + 1);

    return inc || exc;
}

int main()
{
    vector<int> arr = {1, 5, 11, 5};
    int sum = accumulate(arr.begin(), arr.end(), 0);
    int target = sum >> 1;

    bool ans = canBePartitioned(arr, target, 0);
    cout << "Can be partitioned :- " << ans << endl;
    return 0;
}