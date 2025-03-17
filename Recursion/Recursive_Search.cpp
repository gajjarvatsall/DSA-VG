#include <bits/stdc++.h>
using namespace std;
int recursiveSearch(vector<int> &arr, int size, int i, int x)
{
    if (i == size)
    {
        return -1;
    }
    if (arr[i] == x)
    {
        return i;
    }
    else
    {
        return recursiveSearch(arr, size, i + 1, x);
    }
}
int main()
{
    vector<int> arr = {23, 45, 56, 54, 56, 23, 3};
    int ans = recursiveSearch(arr, arr.size(), 0, 540);
    cout << "Element present at index :- " << ans << endl;
    return 0;
}