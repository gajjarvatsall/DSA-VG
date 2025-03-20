// 9
// https://leetcode.com/problems/palindrome-number/submissions/1579993501/

#include <bits/stdc++.h>
using namespace std;
bool solve(string x, int s, int e)
{
    if (s >= e)
        return true;

    if (x[s] != x[e])
        return false;

    return solve(x, s + 1, e - 1);
}
bool isPalindrome(int x)
{
    string temp = to_string(x);
    return solve(temp, 0, temp.length() - 1);
}
int main()
{
    cout << isPalindrome(121) << endl;
    return 0;
}