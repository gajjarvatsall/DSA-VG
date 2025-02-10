#include <bits/stdc++.h>
using namespace std;

int peakIndex(vector<int> a)
{
    int s = 0;
    int e = a.size() - 1;
    int mid = s + (e - s) / 2;
    int c = 0;
    while (s < e)
    {

        if (a[mid] > a[mid + 1] && a[mid] > a[mid - 1])
        {
            return mid;
        }
        else if (a[mid] < a[mid + 1])
        {
            s = mid + 1;
            cout<<c<<"  -- "<<s<<endl;
        }
        else
        {
            e = mid;
            cout<<c<<"  -- "<<e<<endl;
        }
        mid = s + (e - s) / 2;
        c++;
    }
    return -1;
}

int main()
{
    vector<int> a = {10, 20, 30, 80, 70, 60, 55, 46, 40};

    int ans = peakIndex(a);
    cout << "Peak index is at :- " << a[ans] << endl;
    return 0;
}