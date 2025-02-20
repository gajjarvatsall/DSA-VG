// 6
// https://leetcode.com/problems/zigzag-conversion/description/


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
            return s; // Edge case: No zigzag needed

        vector<string> zigzag(min(numRows, int(s.size()))); // Limit rows to size of string
        int row = 0;
        bool down = true;

        for (char c : s)
        {
            zigzag[row] += c;

            if (row == 0)
                down = true; // Change direction to down
            else if (row == numRows - 1)
                down = false; // Change direction to up

            row += (down ? 1 : -1); // Move row accordingly
        }

        string ans;
        for (const string &str : zigzag)
        {
            ans += str; // Concatenate rows
        }

        return ans;
    }
};

int main()
{

    return 0;
}