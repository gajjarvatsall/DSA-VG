#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int count = 0;
        int n = nums.size();
        cout << n << endl;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > nums[(i + 1) % n])
            {
                count++;
            }
        }
        cout << count << endl;
        return (count <= 1);
    }
};
int main()
{

    return 0;
}