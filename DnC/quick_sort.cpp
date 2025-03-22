#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int> &nums, int s, int e)
{
    if (s >= e)
        return;

    int pivot = e;
    int i = s - 1;
    int j = s;

    while (j < pivot)
    {
        if (nums[j] < nums[pivot])
        {
            i++;
            swap(nums[i], nums[j]);
        }
        j++;
    }
    i++;
    swap(nums[i], nums[pivot]);
    quickSort(nums, s, i - 1);
    quickSort(nums, i + 1, e);
}

int main()
{
    vector<int> nums = {34, 3, 34, 12, 34, 5, 6};
    quickSort(nums, 0, nums.size() - 1);
    for (auto i : nums)
    {
        cout << i << " ";
    }
    return 0;
}