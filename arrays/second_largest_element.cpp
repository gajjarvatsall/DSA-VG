#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int getSecondLargest(vector<int> &arr)
    {
        // code here
        int ans = INT_MIN;

        for (int i = 0; i < arr.size(); i++)
        {
            ans = max(ans, arr[i]);
        }
        int ans2 = INT_MAX;

        for (int i = 0; i < arr.size(); i++)
        {
            int temp = ans - arr[i];
            if (temp == 0)
            {
                continue;
            }
            ans2 = min(ans2, temp);
        }

        if (ans2 == INT_MAX)
        {
            return -1;
        }
        return ans - ans2;
    }
};
// OPTIMIZED APPROACH
int getSecondLargest(vector<int>& arr) {
    int first = INT_MIN, second = INT_MIN;
    
    for (int num : arr) {
        if (num > first) {
            second = first;
            first = num;
        } else if (num < first && num > second) {
            second = num;
        }
    }
    
    return (second == INT_MIN) ? -1 : second;
}

int main()
{

    return 0;
}