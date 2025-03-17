#include <bits/stdc++.h>
using namespace std;
int recursiveMax(vector<int> &arr, int size, int i)
{
    if (i == size)
    {
        return INT_MIN; // Base case: return minimum possible value
    }
    int rec = recursiveMax(arr, size, i + 1); // Recursive call
    return max(arr[i], rec);                  // Compare current element with the recursive result
}
int recursiveMin(vector<int> &arr, int size, int i)
{
    if (i == size)
    {
        return INT_MAX; // Base case: return minimum possible value
    }
    int rec = recursiveMin(arr, size, i + 1); // Recursive call
    return min(arr[i], rec);                  // Compare current element with the recursive result
}

int main()
{
    vector<int> arr = {23, 45, 56, 54, 56, 23, 3};
    int ansMax = recursiveMax(arr, arr.size(), 0);
    int ansMin = recursiveMin(arr, arr.size(), 0);
    cout << "Maximun number is :- " << ansMax << endl;
    cout << "Minimum number is :- " << ansMin << endl;
    return 0;
}