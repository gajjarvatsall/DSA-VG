#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int minLen = INT_MAX;
        int currSum = 0;

        int high = 0;
        int low = 0;

        while (high < nums.size())
        {
            currSum += nums[high];
            high++;

            while (currSum >= target)
            {
                int window = high - low;

                minLen = min(minLen, window);

                currSum -= nums[low];
                low++;
            }
        }
        return minLen == INT_MAX ? 0 : minLen;
    }
};
int main()
{

    return 0;
}