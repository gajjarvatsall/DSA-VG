// 680
// https://leetcode.com/problems/valid-palindrome-ii/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool validPalindrome(string s)
    {
        int l = 0;
        int r = s.length() - 1;
        while (l < r)
        {
            if (s.at(l) == s.at(r))
            {
                l++;
                r--;
            }
            else
            {
                return isPalindrome(s, l + 1, r) || isPalindrome(s, l, r - 1);
            }
        }
        return true;
    }
    bool isPalindrome(string s, int l, int r)
    {
        while (l < r)
        {
            if (s.at(l) == s.at(r))
            {
                l++;
                r--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

// TC :- O(n)
// SC :- O(1)

int main()
{

    return 0;
}