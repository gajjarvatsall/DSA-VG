#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s) / 2;

        if (nums[s] <= nums[e])
            return nums[0];

        while (s < e)
        {
            cout << mid << endl;
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
        return nums[s];
    }
};
int main()
{

    return 0;
}