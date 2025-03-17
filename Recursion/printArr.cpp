#include <bits/stdc++.h>
using namespace std;
void recursivePrint(vector<int> &arr, int size)
{
    if (size < 0)
    {
        return;
    }
    recursivePrint(arr, size - 1);
    cout << arr[size] << " ";
}
int main()
{
    vector<int> arr = {23, 45, 56, 56, 23, 3};
    recursivePrint(arr, 5);
    return 0;
}