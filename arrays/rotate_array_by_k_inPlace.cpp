#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int> &arr, int d)
    {
        // code here
        int n = arr.size();
        d = d % n;

        if (d == 0)
            return;

        // Reverse the first d elements
        reverse(arr.begin(), arr.begin() + d);

        // Reverse the remaining n-d elements
        reverse(arr.begin() + d, arr.end());

        // Reverse the entire array
        reverse(arr.begin(), arr.end());
    }
};
int main()
{

    return 0;
}