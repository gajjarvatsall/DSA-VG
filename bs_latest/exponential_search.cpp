#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> nums,int s,int e, int x)
{
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

int exponentialSearch(vector<int> nums,int x){
    int n = nums.size();
    if(nums[0] == 0) return 0;
    int i = 1;
    while(i<n && nums[i]<x){
        i = i+2;
    }
    return binarySearch(nums,i/2,min(i,n-1),x);
}

int main()
{
    vector<int> a = {34,2133,45,56,4,2,4,54};
    sort(a.begin(), a.end());

    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    int ans = exponentialSearch(a, 45);
    
    if (ans != -1)
        cout << "Index is: " << ans << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
