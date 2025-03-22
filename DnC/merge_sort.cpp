#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int s, int e, int mid)
{
    int leftLen = mid - s + 1;
    int rightLen = e - mid;

    int *leftArr = new int[leftLen];
    int *rightArr = new int[rightLen];

    int index = s;

    for (int i = 0; i < leftLen; i++)
    {
        leftArr[i] = arr[index];
        index++;
    }
    index = mid + 1;
    for (int i = 0; i < rightLen; i++)
    {
        rightArr[i] = arr[index];
        index++;
    }

    int i = 0;
    int j = 0;
    int mainIndex = s;

    while (i < leftLen && j < rightLen)
    {
        if (leftArr[i] < rightArr[j])
        {
            arr[mainIndex] = leftArr[i];
            i++;
            mainIndex++;
        }
        else
        {
            arr[mainIndex] = rightArr[j];
            j++;
            mainIndex++;
        }
    }

    while (i < leftLen)
    {
        arr[mainIndex] = leftArr[i];
        i++;
        mainIndex++;
    }
    while (j < rightLen)
    {
        arr[mainIndex] = rightArr[j];
        j++;
        mainIndex++;
    }

    delete[] leftArr;
    delete[] rightArr;
}
void mergeSortRec(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    mergeSortRec(arr, s, mid);
    mergeSortRec(arr, mid + 1, e);
    merge(arr, s, e, mid);
}
int main()
{
    vector<int> arr = {23, 54, 3, 12, 34, 65, 34, 5, 4};
    mergeSortRec(arr, 0, arr.size() - 1);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}