#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> ans;
        deque<int> qt;

        for (int i = 0; i < k; i++)
        {
            while (!qt.empty() && nums[qt.back()] < nums[i])
            {
                qt.pop_back();
            }
            qt.push_back(i);
        }
        ans.push_back(nums[qt.front()]);

        for (int i = k; i < nums.size(); i++)
        {

            // removal
            if (!qt.empty() && qt.front() <= i - k)
            {
                qt.pop_front();
            }

            // addition
            while (!qt.empty() && nums[qt.back()] < nums[i])
            {
                qt.pop_back();
            }
            qt.push_back(i);

            // save answer
            ans.push_back(nums[qt.front()]);
        }
        return ans;
    }
};
int main()
{

    return 0;
}