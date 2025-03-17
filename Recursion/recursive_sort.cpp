#include <bits/stdc++.h>
using namespace std;
bool recursiveSort(vector<int> &arr, int i)
{
    if (i == arr.size() - 1)
    {
        return true; // Base case: last element reached, no issues found
    }
    if (arr[i] > arr[i + 1])
    {
        return false; // If current element is greater than next, not sorted
    }
    return recursiveSort(arr, i + 1); // Recursively check next elements
}
int main()
{
    vector<int> arr = {34, 35, 56, 42, 31, 4};
    int ans = recursiveSort(arr, arr.size());
    cout << "Is this is sorted :- " << ans << endl;
    return 0;
}