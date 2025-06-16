#include <bits/stdc++.h>
using namespace std;

int lowerB(vector<int> a, int x)
{
    int s = 0;
    int e = a.size() - 1;
    int ans = a.size();

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (a[mid] > x)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
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

    int ans = lowerB(a, 32);

    if (ans != -1)
        cout << "Index is: " << ans << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}