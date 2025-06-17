#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string largestOddNumber(string num)
    {
        int v = -1;

        for (int ch = num.size() - 1; ch >= 0; ch--)
        {
            int t = num[ch] - '0';
            if (t & 1)
            {
                v = ch;
                break;
            }
        }

        if (v == -1)
        {
            return "";
        }

        return num.substr(0, v + 1);
    }
};
int main()
{

    return 0;
}