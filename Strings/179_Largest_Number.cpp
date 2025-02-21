// 179
// https://leetcode.com/problems/largest-number/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static bool comp(string a, string b)
    {
        string t1 = a + b;
        string t2 = b + a;
        return t1 > t2;
    }
    string largestNumber(vector<int> &nums)
    {
        string ans = "";
        vector<string> str;

        for (int i = 0; i < nums.size(); i++)
        {
            str.push_back(to_string(nums[i]));
        }
        sort(str.begin(), str.end(), comp);
        if (str[0] == "0")
            return "0";
        for (auto x : str)
        {
            ans += x;
        }
        return ans;
    }
};

int main()
{

    return 0;
}