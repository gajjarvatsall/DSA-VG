#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int k = i + 1;
            int j = nums.size() - 1;

            while (k < j)
            {
                int sum = nums[i] + nums[k] + nums[j];
                if (sum == 0)
                {
                    ans.push_back({nums[i], nums[k], nums[j]});

                    while (k < j && nums[k] == nums[k + 1])
                        k++;

                    while (k < j && nums[j] == nums[j - 1])
                        j--;

                    k++;
                    j--;
                }
                else if (sum < 0)
                {

                    k++;
                }
                else
                {
                    j--;
                }
            }
        }

        return ans;
    }
};
int main()
{

    return 0;
}