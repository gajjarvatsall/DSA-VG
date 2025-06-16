#include <bits/stdc++.h>
using namespace std;

int reccBs(vector<int> a, int x, int s, int e)
{
    if (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (a[mid] < x)
        {
            return reccBs(a, x, mid + 1, e);
        }
        else if (a[mid] > x)
        {
            return reccBs(a, x, s, mid - 1);
        }
        else
        {

            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> a = {34, 2133, 45, 56, 4, 2, 4, 54};
    sort(a.begin(), a.end());

    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    int ans = reccBs(a, 45, 0, a.size() - 1);

    if (ans != -1)
        cout << "Index is: " << ans << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}