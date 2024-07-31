// 35. Search Insert Position
// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

// TC :- O(logn)
// Sc :- O(1)


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int s = 0;
        int e = nums.size() - 1;
        int mid = (s + e) / 2;
        int temp = 0;

        while (s <= e)
        {
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (target < nums[mid])
            {
                e = mid - 1;
                temp = mid + 1;
            }
            else
            {
                s = mid + 1;
                temp = mid + 1;
            }

            mid = (s + e) / 2;
        }

        cout << "start :- " << s << endl;
        cout << "end :- " << e << endl;
        cout << "mid :- " << mid << endl;

        return s;
    }
};

int main()
{

    return 0;
}