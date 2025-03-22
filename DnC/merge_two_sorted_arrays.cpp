#include <bits/stdc++.h>
using namespace std;
void mergeTwoSortedArray(vector<int> &arr1, vector<int> &arr2, int arr1S, int arr2S, vector<int> &ans)
{
    int i = 0;
    int j = 0;
    while (i < arr1S && j < arr2S)
    {
        if (arr1[i] < arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else
        {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while (i < arr1S)
    {
        ans.push_back(arr1[i]);
        i++;
    }
    while (j < arr2S)
    {
        ans.push_back(arr2[j]);
        j++;
    }
}
int main()
{
    vector<int> arr1 = {10, 20, 30, 40, 50};
    vector<int> arr2 = {60, 70, 80};
    vector<int> ans;
    mergeTwoSortedArray(arr1, arr2, arr1.size(), arr2.size(), ans);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}