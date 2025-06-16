#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findPivot(vector<int> &arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;

        while (s < e)
        {
            if (arr[mid] >= arr[0])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s - 1;
    }

    int binarySearch(vector<int> arr, int s, int e, int target)
    {
        int mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (arr[mid] == target)
            {
                return mid;
            }
            else if (arr[mid] > target)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }

    int search(vector<int> &arr, int key)
    {
        int pivot = findPivot(arr);

        if (pivot == -1)
        {
            return binarySearch(arr, 0, arr.size() - 1, key);
        }

        if (key >= arr[0] && key <= arr[pivot])
        {
            return binarySearch(arr, 0, pivot, key);
        }
        else
        {
            return binarySearch(arr, pivot + 1, arr.size() - 1, key);
        }
    }
};
int main()
{

    return 0;
}