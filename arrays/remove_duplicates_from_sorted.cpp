#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> st;
        int t = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]);
        }
        for (auto &str : st)
        {
            nums[t] = str;
            t++;
        }
        return st.size();
    }
};

// OPTIMIZED APPROACH
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;

        int i = 0;

        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};
int main()
{

    return 0;
}