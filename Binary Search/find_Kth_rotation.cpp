#include <bits/stdc++.h>
using namespace std;
// User function template for C++
class Solution
{
public:
    int findKRotation(vector<int> &nums)
    {
        // Code Here
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s) / 2;

        if (nums[s] <= nums[e])
            return 0;

        while (s < e)
        {
            if (nums[mid] < nums[0])
            {
                e = mid;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
};

int main()
{

    return 0;
}