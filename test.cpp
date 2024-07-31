#include <bits/stdc++.h>
using namespace std;
bool canAliceWin(vector<int> &nums)
{
    int singleSum = 0;
    int doubleSum = 0;
    bool ans = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 10)
        {
            singleSum += nums[i];
        }
        else
        {
            doubleSum += nums[i];
        }
    }
    if (singleSum > doubleSum)
    {
        ans = true;
    }
    else if (singleSum < doubleSum)
    {
        ans = true;
    }
    else
    {
        ans = false;
    }
    return ans;
}
int main()

{

    // vector<int> v;
    // v.push_back(5);
    // v.push_back(5);
    // v.push_back(5);
    // v.push_back(25);

    // bool ans = canAliceWin(v);
    // cout << "Ans :- " << ans << endl;
    int i = 9;
    bool test = true;
    int count = 0;
    int ans = 0;

    for (int j = 0; j < i; j++)
    {
        if (i % j == 0)
        {
            count++;
            cout << count << " --- " << j << endl;
        }
        if (count > 2)
        {
            count = 0;
            ans++;
            break;
        }
    }

    return 0;
}