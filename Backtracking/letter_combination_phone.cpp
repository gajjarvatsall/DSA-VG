#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(string &digits, vector<string> &ans,
               unordered_map<char, string> &umap, string &output, int i)
    {
        if (i >= digits.size())
        {
            if (!output.empty())
            {
                ans.push_back(output);
            }
            return;
        }
        char digit = digits[i];
        string mappedString = umap[digit];
        for (char ch : mappedString)
        {
            output.push_back(ch);
            solve(digits, ans, umap, output, i + 1);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        unordered_map<char, string> umap;
        umap['2'] = "abc";
        umap['3'] = "def";
        umap['4'] = "ghi";
        umap['5'] = "jkl";
        umap['6'] = "mno";
        umap['7'] = "pqrs";
        umap['8'] = "tuv";
        umap['9'] = "wxyz";
        string output = "";
        solve(digits, ans, umap, output, 0);
        return ans;
    }
}; 

int main()
{

    return 0;
}