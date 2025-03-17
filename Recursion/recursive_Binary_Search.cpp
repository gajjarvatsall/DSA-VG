#include <bits/stdc++.h>
using namespace std;
int recBS(vector<int> &arr, int target, int s, int e)
{
    if (s > e)
    {
        return -1;
    }
    int mid = (s + e) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    if (arr[mid] < target)
    {
        return recBS(arr, target, mid + 1, e);
    }
    else
    {
        return recBS(arr, target, s, mid - 1);
    }
    return -1;
}
int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int target = 30;
    int ans = recBS(arr, target, 0, arr.size() - 1);
    cout << "Element present at index :- " << ans << endl;
    return 0;
}