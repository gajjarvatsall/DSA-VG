// 14
// https://leetcode.com/problems/longest-common-prefix/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.size() == 1)
            return strs[0];
        string ans = "";
        string temp = strs[0];
        string t = "";
        for (int i = 1; i < strs.size(); i++)
        {
            ans = "";
            for (int j = 0; j < strs[i].length(); j++)
            {

                if (temp[j] == strs[i][j])
                {
                    ans.push_back(strs[i][j]);
                }
                else
                {
                    break;
                }
            }

            temp = ans;
        }
        return ans;
    }
};

int main()
{

    return 0;
}