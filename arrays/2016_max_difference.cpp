#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumDifference(vector<int> &nums)
    {
        int minEle = nums[0];
        int ans = -1;

        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] > minEle)
            {
                ans = max(ans, nums[j] - minEle);
            }
            else
            {
                minEle = nums[j];
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}