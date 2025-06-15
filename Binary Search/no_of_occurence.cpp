#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countFreq(vector<int> &arr, int target)
    {
        // code here
        int l = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
        int r = upper_bound(arr.begin(), arr.end(), target) - arr.begin();

        // Return the differnce between upper
        // bound and lower bound of the target
        return r - l;
    }
};

int main()
{

    return 0;
}