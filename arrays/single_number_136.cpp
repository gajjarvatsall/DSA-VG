// 136. Single Number

// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

// Solved using unordered_map
// TC :- O(n)
// Sc :- O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> numbers;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            numbers[num] = numbers[num] + 1;
        }

        unordered_map<int, int>::iterator it;

        for (it = numbers.begin(); it != numbers.end(); it++)
        {
            if (it->second == 1)
            {
                ans = it->first;
                break;
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}
