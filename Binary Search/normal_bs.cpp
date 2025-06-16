#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> nums, int x)
{
    int s = 0;
    int e = nums.size() - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (nums[mid] == x)
        {
            return mid;
        }
        else if (nums[mid] > x)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1; 
}

int main()
{
    vector<int> a = {34,2133,45,56,4,2,4,54};
    sort(a.begin(), a.end());

    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    int ans = binarySearch(a, 45);
    
    if (ans != -1)
        cout << "Index is: " << ans << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
